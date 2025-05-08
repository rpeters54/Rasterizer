
`include "raster_defines.svh"

module tile_processor(
    input             clk,
    input             rst_n,
    input             rdy_out,
    input             vld_in,
    input  coord_3d_t v0,
    input  coord_3d_t v1,
    input  coord_3d_t v2,
    input  metadata_t in_metadata,

    output logic                                rdy_in,
    output logic                                vld_out,
    output coord_3d_t                           out_abs_pos;
    output coord_3d_t                           out_delta_0;
    output coord_3d_t                           out_delta_1;
    output coord_3d_t                           out_delta_2;
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_edge_0;
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_edge_1;
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_edge_2;
    output logic        [3:0]                   out_color;
    output logic        [`FX_TOTAL_BITS-1:0]    out_dzdx;
    output logic        [`FX_TOTAL_BITS-1:0]    out_dzdy;
    output logic        [`FX_TOTAL_BITS*2-1:0]  out_z_current;
);

// Treat v as an array of vertices
coord_3d_t v [0:`NUM_VERTICES-1];
v = '{v0, v1, v2};

tile_state_t present_state, next_state;

coord_3d_t temp_start;
coord_3d_t temp_deltas [0:`NUM_VERTICES-1];

always_comb begin
    // convert from tile number to pixel coordinates
    tile_to_coord(temp_start, in_metadata);
    // compute the deltas between all vertices in clockwise order
    compute_deltas(temp_deltas, {v[1:2], v[0]}, v);
end

always_comb begin
    case (present_state)
        INPUT: begin
            if (vld_in && rdy_in) begin
                next_state = DETERMINANT;
            end else begin
                next_state = INPUT;
            end
        end
        DETERMINANT: begin
            next_state = SCALING;
        end
        SCALING: begin
            next_state = Z_VALUE;
        end
        Z_VALUE: begin
            next_state = PASS_ONWARD;
        end
        PASS_ONWARD: begin
            if (!vld_out) begin
                next_state = INPUT;
            end else begin
                next_state = PASS_ONWARD;
            end
        end
        default: begin
            next_state = INPUT;
        end
    endcase
end

coord_3d_t                          abs_pos;
coord_3d_t                          deltas  [0:`NUM_VERTICES-1];
logic signed [`FX_TOTAL_BITS*2-1:0] edges   [0:`NUM_VERTICES-1];
metadata_t                          metadata;
logic [`FX_TOTAL_BITS*2-1:0]        determinant, dzdx_undiv, dzdy_undiv;  
logic [`FX_TOTAL_BITS-1:0]          dzdx, dzdy;
logic [`FX_TOTAL_BITS*2-1:0]        z_current;

always_ff @(posedge clk) begin 
    if (!rst_n) begin
        // Reset logic
        abs_pos      <= '{ default: '0 };
        deltas       <= '{ default: '0 };
        edges        <= '{ default: '0 };
        metadata     <= '{ default: '0 };

        determinant  <= '0;
        dzdx_undiv   <= '0;
        dzdy_undiv   <= '0;

        dzdx         <= '0;
        dzdy         <= '0;

        z_current    <= '0;

        rdy_in       <= '1;

        present_state <= INPUT;
    end else begin
        present_state <= next_state;

        case (present_state)
            INPUT: begin
                // Deassert ready signal if valid input is received
                rdy_in <= vld_in ? '0 : rdy_in;

                // Store the color
                color <= in_metadata;
            
                // Store the start position for the next cycle
                abs_pos <= temp_start;

                // Store the differences for the next cycle
                for (int i = 0; i < `NUM_VERTICES; i++) begin
                    deltas[i] <= temp_deltas[i];
                end

                // Compute the edges using the current tile's top-left pixel
                for (int i = 0; i < `NUM_VERTICES; i++) begin
                    edges[i] <= (temp_start.x - v[i].x) * temp_deltas[i].y +
                                (temp_start.y - v[i].y) * temp_deltas[i].x;
                end
            end
            DETERMINANT: begin
                // Compute the determinant of the triangle and unscaled dzdx and dzdy
                determinant  <= (deltas[0].x * deltas[2].y - deltas[2].x * deltas[0].y);
                dzdx_undiv  <=  (deltas[1].y * v[0].z + deltas[2].y * v[1].z + deltas[0].y * v[2].z);
                dzdy_undiv  <= -(deltas[0].x * v[0].z + deltas[1].x * v[1].z + deltas[2].x * v[2].z);
            end
            SCALING: begin
                // Compute the scaled dzdx and dzdy
                // Scale up the dzdx and dzdy to 48_16 fixed point
                // This results in a 24_8 fixed point result when divided by 24_8 determinant
                // We extract the middle 16 bits of the result, to get the 12_4 fixed point result
                dzdx    <= ({{32{dzdx_undiv[31]}}, dzdx_undiv, 8'b0} / determinant)[(`FX_TOTAL_BITS-1)+4:4];
                dzdy    <= ({{32{dzdy_undiv[31]}}, dzdy_undiv, 8'b0} / determinant)[(`FX_TOTAL_BITS-1)+4:4];
            end
            Z_VALUE: begin
                // Compute the z for the top left pixel
                z_current <= v[0].z + (v[0].x - abs_pos.x) * dzdx + (v[0].y - abs_pos.y) * dzdy
            end
            PASS_ONWARD: begin
                // if output is open, write the data to the output
                if (!vld_out) begin
                    vld_out <= '1;

                    out_abs_pos   <= abs_pos;
                    out_delta_0   <= deltas[0];
                    out_delta_1   <= deltas[1];
                    out_delta_2   <= deltas[2];
                    out_edge_0    <= edges[0];
                    out_edge_1    <= edges[1];
                    out_edge_2    <= edges[2];
                    out_color     <= metadata.color;
                    out_dzdx      <= dzdx;
                    out_dzdy      <= dzdy;
                    out_z_current <= z_current;
                end 
            end
        endcase
    end
end

// Deassert the valid signal when the ready signal is asserted
always_ff @(posedge rdy_out) begin
    vld_out <= '0;
end

function void tile_to_coord(
    coord_3d_t out,
    metadata_t in
    );
    out.x = (in.tile_x << 5) << `FX_FRAC_BITS;
    out.y = (in.tile_y << 5) << `FX_FRAC_BITS;
    out.z = 0;
endfunction

// Compute the deltas between two sets of vertices
function void compute_deltas(
    coord_3d_t out [0:`NUM_VERTICES-1], 
    coord_3d_t a   [0:`NUM_VERTICES-1], 
    coord_3d_t b   [0:`NUM_VERTICES-1]
    );

    for (int i = 0; i < `NUM_VERTICES; i++) begin
        out[i].x = a[i].x - b[i].x;
        out[i].y = a[i].y - b[i].y;
        out[i].z = a[i].z - b[i].z;
    end
endfunction

endmodule