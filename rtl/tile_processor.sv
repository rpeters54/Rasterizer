
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
    output coord_3d_t                           out_abs_pos,
    output coord_3d_t                           out_delta_0,
    output coord_3d_t                           out_delta_1,
    output coord_3d_t                           out_delta_2,
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_edge_0,
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_edge_1,
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_edge_2,
    output metadata_t                           out_metadata,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_dzdx,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_dzdy,
    output logic        [`FX_TOTAL_BITS*2-1:0]  out_z_current
);

tile_state_t present_state, next_state;

coord_3d_t v           [0:`NUM_VERTICES-1];
coord_3d_t rotated_v   [0:`NUM_VERTICES-1];
coord_3d_t temp_start;
coord_3d_t temp_deltas [0:`NUM_VERTICES-1];
coord_3d_t zero;
assign zero.x = 0;
assign zero.y = 0;
assign zero.z = 0;

// put vertices in an array for clarity during the computations
assign v[0] = v0;
assign v[1] = v1;
assign v[2] = v2;

assign rotated_v[0] = v1;
assign rotated_v[1] = v2;
assign rotated_v[2] = v0;

// compute the deltas between all vertices in clockwise order
assign temp_deltas[0] = compute_delta(rotated_v[0], v[0]);   
assign temp_deltas[1] = compute_delta(rotated_v[1], v[1]);   
assign temp_deltas[2] = compute_delta(rotated_v[2], v[2]);   


always_comb begin
    // convert from tile number to pixel coordinates
    temp_start = tile_to_coord(in_metadata);

    case (present_state)
        INPUT : begin
            if (vld_in && rdy_in) begin
                next_state = DETERMINANT;
            end else begin
                next_state = INPUT;
            end
        end
        DETERMINANT : begin
            next_state = SCALING;
        end
        SCALING : begin
            next_state = Z_VALUE;
        end
        Z_VALUE : begin
            next_state = PASS_ONWARD;
        end
        PASS_ONWARD : begin
            next_state = AWAIT_RESPONSE;
        end
        AWAIT_RESPONSE : begin
            if (!rdy_out) begin
                next_state = AWAIT_RESPONSE;
            end else begin
                next_state = INPUT;
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
logic [`FX_TOTAL_BITS*2-1:0]        coeff_A, coeff_B, coeff_C;  
logic [`FX_TOTAL_BITS-1:0]          dzdx, dzdy;
logic [`FX_TOTAL_BITS*2-1:0]        z_current;

always_ff @(posedge clk) begin 
    if (!rst_n) begin
        // Reset logic
        abs_pos.x       <= 0;
        abs_pos.y       <= 0;
        abs_pos.z       <= 0;
        for (int i = 0; i < `NUM_VERTICES; i++) begin
            deltas[i]   <= zero;
            edges[i]    <= 0;
        end
        metadata.color  <= 0;
        metadata.tile_x <= 0;
        metadata.tile_y <= 0;
        coeff_A         <= '0;
        coeff_B         <= '0;
        coeff_C         <= '0;
        dzdx            <= '0;
        dzdy            <= '0;
        z_current       <= '0;

        rdy_in       <= '1;
        vld_out <= 0;
        out_abs_pos <= 0;
        out_delta_0 <= zero;
        out_delta_1 <= zero;
        out_delta_2 <= zero;
        out_edge_0 <= 0;
        out_edge_1 <= 1;
        out_edge_2 <= 2;
        out_metadata.color   <= 0;
        out_metadata.tile_x  <= 0;
        out_metadata.tile_y  <= 0;
        out_dzdx <= 0;
        out_dzdy <= 0;
        out_z_current <= 0;

        present_state <= INPUT;
    end else begin
        present_state <= next_state;

        case (present_state)
            INPUT: begin
                // Deassert ready signal if valid input is received
                rdy_in <= vld_in ? '0 : rdy_in;

                // Store the metadata
                metadata <= in_metadata;
            
                // Store the start position for the next cycle
                abs_pos <= temp_start;

                // Store the differences for the next cycle
                for (int i = 0; i < `NUM_VERTICES; i++) begin
                    deltas[i] <= temp_deltas[i];
                end

                // Compute the edges using the current tile's top-left pixel
                for (int i = 0; i < `NUM_VERTICES; i++) begin
                    edges[i] <= compute_edge(temp_start, v[i], temp_deltas[i]);
                end
            end
            DETERMINANT: begin
                // Compute the planar coefficients of the triangle A, B, C
                coeff_A <= compute_plane_coeff_a(deltas[0], deltas[2]);
                coeff_B <= compute_plane_coeff_b(deltas[0], deltas[2]);
                coeff_C <= compute_plane_coeff_c(deltas[0], deltas[2]);
            end
            SCALING: begin
                // Scale the planar coefficients to calculate dz/dx and dy/dx
                // dz/dx = - a / c; dy/dx = - b / c
                dzdx <= scale_dz(coeff_A, coeff_C);
                dzdy <= scale_dz(coeff_B, coeff_C);
            end
            Z_VALUE: begin
                // Compute the z for the top left pixel
                z_current <= compute_z(v[0], abs_pos, dzdx, dzdy);
            end
            PASS_ONWARD: begin
                // if output is open, write the data to the output
                vld_out <= '1;

                out_abs_pos   <= abs_pos;
                out_delta_0   <= deltas[0];
                out_delta_1   <= deltas[1];
                out_delta_2   <= deltas[2];
                out_edge_0    <= edges[0];
                out_edge_1    <= edges[1];
                out_edge_2    <= edges[2];
                out_metadata  <= metadata;
                out_dzdx      <= dzdx;
                out_dzdy      <= dzdy;
                out_z_current <= z_current;
            end
            AWAIT_RESPONSE: begin
                // once output has been read
                // set output invalid, mark ready to read
                if (rdy_out) begin
                    vld_out <= 0;
                    rdy_in  <= 1;
                end 
            end
        endcase
    end
end


function coord_3d_t tile_to_coord(
    input metadata_t in
    );

    coord_3d_t out;

    out.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, in.tile_x, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    out.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, in.tile_y, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    out.z = 0;

    return out;
endfunction

// Compute the deltas between two sets of vertices
function coord_3d_t compute_delta(
    input  coord_3d_t a,
    input  coord_3d_t b
    );

    coord_3d_t out;

    out.x = a.x - b.x;
    out.y = a.y - b.y;
    out.z = a.z - b.z;

    return out;

endfunction


function signed [`FX_TOTAL_BITS*2-1:0] compute_edge(
    input coord_3d_t start,
    input coord_3d_t v_i,
    input coord_3d_t delta_i
);

logic signed [`FX_TOTAL_BITS-1:0]   temp_x_sub, temp_y_sub;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_x_mult, temp_y_mult;

temp_x_sub  = (start.x - v_i.x);
temp_y_sub  = (start.y - v_i.y);
temp_x_mult = temp_x_sub * delta_i.y;
temp_y_mult = temp_y_sub * delta_i.x;
return temp_x_mult - temp_y_mult;

endfunction


function signed [`FX_TOTAL_BITS*2-1:0] compute_plane_coeff_a(
    input coord_3d_t delta_0,
    input coord_3d_t delta_2
);

logic signed [`FX_TOTAL_BITS*2-1:0] temp_y0z2_mult, temp_z0y2_mult;

temp_y0z2_mult = delta_0.y * delta_2.z;
temp_z0y2_mult = delta_0.z * delta_2.y;
// return temp_y0z2_mult - temp_z0y2_mult;

// negate to account for V02 = -delta[2]
return temp_z0y2_mult - temp_y0z2_mult;

endfunction

function signed [`FX_TOTAL_BITS*2-1:0] compute_plane_coeff_b(
    input coord_3d_t delta_0,
    input coord_3d_t delta_2
);

logic signed [`FX_TOTAL_BITS*2-1:0] temp_z0x2_mult, temp_x0z2_mult;

temp_z0x2_mult = delta_0.z * delta_2.x;
temp_x0z2_mult = delta_0.x * delta_2.z;
// return temp_z0x2_mult - temp_x0z2_mult;

// negate to account for V02 = -delta[2]
return temp_x0z2_mult - temp_z0x2_mult;

endfunction


function signed [`FX_TOTAL_BITS*2-1:0] compute_plane_coeff_c(
    input coord_3d_t delta_0,
    input coord_3d_t delta_2
);

logic signed [`FX_TOTAL_BITS*2-1:0] temp_x0y2_mult, temp_y0x2_mult;

temp_x0y2_mult = delta_0.x * delta_2.y;
temp_y0x2_mult = delta_0.y * delta_2.x;
// return temp_x0y2_mult - temp_y0x2_mult;

// negate to account for V02 = -delta[2]
return temp_y0x2_mult - temp_x0y2_mult;

endfunction

// Compute the scaled dzdx and dzdy
// We extract the middle 16 bits of the result, to get the 12_4 fixed point result
function signed [`FX_TOTAL_BITS-1:0] scale_dz(
    input signed [`FX_TOTAL_BITS*2-1:0] dz_undiv,
    input signed [`FX_TOTAL_BITS*2-1:0] c
);

logic signed [`FX_TOTAL_BITS*2-1:0] div_result_dz;

div_result_dz = -((dz_undiv << `FX_FRAC_BITS*2) / c);

return div_result_dz[(`FX_TOTAL_BITS-1+`FX_FRAC_BITS):`FX_FRAC_BITS];

endfunction


function signed [`FX_TOTAL_BITS*2-1:0] compute_z(
    input coord_3d_t                  v_0,
    input coord_3d_t                  abs_pos,
    input signed [`FX_TOTAL_BITS-1:0] dzdx,
    input signed [`FX_TOTAL_BITS-1:0] dzdy
);

logic signed [`FX_TOTAL_BITS-1:0]   delta_x, delta_y;
logic signed [`FX_TOTAL_BITS*2-1:0] x_component, y_component, z_component;

delta_x = (v_0.x - abs_pos.x);
delta_y = (v_0.y - abs_pos.y);
x_component = delta_x * dzdx;
y_component = delta_y * dzdy;
z_component = {{`FX_INT_BITS{v_0.z[`FX_TOTAL_BITS-1]}}, v_0.z, {`FX_FRAC_BITS{1'b0}}};

return z_component - x_component - y_component;

endfunction

endmodule