
`include "raster_defines.svh"

module tile_processor(
    input                               clk,
    input                               rst_n,
    input                               rdy_out,
    input                               vld_in,
    input signed [`FX_TOTAL_BITS-1:0]   v0_x,
    input signed [`FX_TOTAL_BITS-1:0]   v0_y,
    input signed [`FX_TOTAL_BITS-1:0]   v0_z,
    input signed [`FX_TOTAL_BITS-1:0]   v1_x,
    input signed [`FX_TOTAL_BITS-1:0]   v1_y,
    input signed [`FX_TOTAL_BITS-1:0]   v1_z,
    input signed [`FX_TOTAL_BITS-1:0]   v2_x,
    input signed [`FX_TOTAL_BITS-1:0]   v2_y,
    input signed [`FX_TOTAL_BITS-1:0]   v2_z,
    input        [`COLOR_BITS-1:0]              in_color,
    input        [`TILE_COLUMNS_BITS-1:0]       in_tile_x,
    input        [`TILE_ROWS_BITS-1:0]          in_tile_y,

    output logic                                rdy_in,
    output logic                                vld_out,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_abs_pos_x,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_abs_pos_y,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_delta_0_x,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_delta_0_y,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_delta_1_x,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_delta_1_y,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_delta_2_x,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_delta_2_y,
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_edge_0,
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_edge_1,
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_edge_2,
    output logic [`COLOR_BITS-1:0]              out_color,
    output logic [`TILE_COLUMNS_BITS-1:0]       out_tile_x,
    output logic [`TILE_ROWS_BITS-1:0]          out_tile_y, 
    output logic signed [`FX_TOTAL_BITS-1:0]    out_dzdx,
    output logic signed [`FX_TOTAL_BITS-1:0]    out_dzdy,
    output logic signed [`FX_TOTAL_BITS*2-1:0]  out_z_current
);

typedef struct packed {
    logic signed [`FX_TOTAL_BITS-1:0] x;
    logic signed [`FX_TOTAL_BITS-1:0] y;
    logic signed [`FX_TOTAL_BITS-1:0] z;
} coord_3d_t;

typedef struct packed {
    logic signed [`FX_TOTAL_BITS-1:0] x;
    logic signed [`FX_TOTAL_BITS-1:0] y;
} coord_2d_t;

typedef struct packed {
    logic [`COLOR_BITS-1:0]         color;
    logic [`TILE_COLUMNS_BITS-1:0]  tile_x;
    logic [`TILE_ROWS_BITS-1:0]     tile_y;  
} metadata_t;

typedef enum {
    INPUT,
    DETERMINANT,
    SCALING,
    Z_VALUE,
    PASS_ONWARD,
    AWAIT_RESPONSE
} tile_state_t;

tile_state_t present_state, next_state;

coord_3d_t temp_start;
coord_3d_t temp_delta_0, temp_delta_1, temp_delta_2;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_edge_i;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_coeff_a, temp_coeff_b, temp_coeff_c;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_z;
logic signed [`FX_TOTAL_BITS-1:0] temp_dzdx, temp_dzdy;
coord_3d_t                          v0, v1, v2;
coord_3d_t                          zero;


always_comb begin
    zero.x = 0; zero.y = 0; zero.z = 0;
    v0.x = v0_x; v0.y = v0_y; v0.z = v0_z;
    v1.x = v1_x; v1.y = v1_y; v1.z = v1_z;
    v2.x = v2_x; v2.y = v2_y; v2.z = v2_z;
    // convert from tile number to pixel coordinates
    tile_to_coord(in_tile_x, in_tile_y, temp_start);
    // compute the deltas between all vertices in clockwise order
    compute_delta(v1, v0, temp_delta_0);   
    compute_delta(v2, v1, temp_delta_1);   
    compute_delta(v0, v2, temp_delta_2);    

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
coord_3d_t                          delta_0, delta_1, delta_2;
logic signed [`FX_TOTAL_BITS*2-1:0] edges   [0:`NUM_VERTICES-1];
metadata_t                          metadata;
logic signed [`FX_TOTAL_BITS*2-1:0] coeff_A, coeff_B, coeff_C;  
logic signed [`FX_TOTAL_BITS-1:0]   dzdx, dzdy;
logic signed [`FX_TOTAL_BITS*2-1:0] z_current;

always_ff @(posedge clk) begin 
    if (!rst_n) begin
        // Reset logic
        abs_pos.x       <= 0;
        abs_pos.y       <= 0;
        abs_pos.z       <= 0;
        for (int i = 0; i < `NUM_VERTICES; i++) begin
            edges[i]    <= 0;
        end
        delta_0 <= zero;
        delta_1 <= zero;
        delta_2 <= zero;
        metadata.color  <= 0;
        metadata.tile_x <= 0;
        metadata.tile_y <= 0;
        coeff_A         <= '0;
        coeff_B         <= '0;
        coeff_C         <= '0;
        dzdx            <= '0;
        dzdy            <= '0;
        z_current       <= '0;

        rdy_in          <= '1;
        vld_out         <= 0;
        out_abs_pos_x <= 0; out_abs_pos_y <= 0; 
        out_delta_0_x <= 0; out_delta_0_y <= 0; 
        out_delta_1_x <= 0; out_delta_1_y <= 0; 
        out_delta_2_x <= 0; out_delta_2_y <= 0;
        out_edge_0 <= 0;
        out_edge_1 <= 0;
        out_edge_2 <= 0;
        out_color   <= 0;
        out_tile_x  <= 0;
        out_tile_y  <= 0;
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
                metadata.color <= in_color;
                metadata.tile_x <= in_tile_x;
                metadata.tile_y <= in_tile_y;
            
                // Store the start position for the next cycle
                abs_pos <= temp_start;

                // Store the differences for the next cycle
                delta_0 <= temp_delta_0;
                delta_1 <= temp_delta_1;
                delta_2 <= temp_delta_2;

                // Compute the edges using the current tile's top-left pixel
                compute_edge(temp_start, v0, temp_delta_0, temp_edge_i);
                edges[0] <= temp_edge_i;
                compute_edge(temp_start, v1, temp_delta_1, temp_edge_i);
                edges[1] <= temp_edge_i;
                compute_edge(temp_start, v2, temp_delta_2, temp_edge_i);
                edges[2] <= temp_edge_i;
            end
            DETERMINANT: begin
                // Compute the planar coefficients of the triangle A, B, C
                compute_plane_coeff_a(delta_0, delta_2, temp_coeff_a);
                coeff_A <= temp_coeff_a;
                compute_plane_coeff_b(delta_0, delta_2, temp_coeff_b);
                coeff_B <= temp_coeff_b;
                compute_plane_coeff_c(delta_0, delta_2, temp_coeff_c);
                coeff_C <= temp_coeff_c;
            end
            SCALING: begin
                // Scale the planar coefficients to calculate dz/dx and dy/dx
                // dz/dx = - a / c; dy/dx = - b / c
                scale_dz(coeff_A, coeff_C, temp_dzdx);
                dzdx <= temp_dzdx;
                scale_dz(coeff_B, coeff_C, temp_dzdy);
                dzdy <= temp_dzdy;
            end
            Z_VALUE: begin
                // Compute the z for the top left pixel   
                compute_z(v0, abs_pos, dzdx, dzdy, temp_z);
                z_current <= temp_z;
            end
            PASS_ONWARD: begin
                // if output is open, write the data to the output
                vld_out <= '1;

                out_abs_pos_x <= abs_pos.x; out_abs_pos_y <= abs_pos.y; 
                out_delta_0_x <= delta_0.x; out_delta_0_y <= delta_0.y;
                out_delta_1_x <= delta_1.x; out_delta_1_y <= delta_1.y;
                out_delta_2_x <= delta_2.x; out_delta_2_y <= delta_2.y;
                out_edge_0    <= edges[0];
                out_edge_1    <= edges[1];
                out_edge_2    <= edges[2];
                out_color     <= metadata.color; 
                out_tile_x    <= metadata.tile_x; 
                out_tile_y    <= metadata.tile_y;
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
            default begin
            end
        endcase
    end
end


task automatic tile_to_coord(
    input  [`TILE_COLUMNS_BITS-1:0] tile_x,
    input  [`TILE_ROWS_BITS-1:0]    tile_y,
    output coord_3d_t out
    );

    out.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, tile_x, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    out.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, tile_y, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    out.z = 0;

endtask

// Compute the deltas between two sets of vertices
task automatic compute_delta(
    input  coord_3d_t a,
    input  coord_3d_t b,
    output coord_3d_t out
    );

    out.x = a.x - b.x;
    out.y = a.y - b.y;
    out.z = a.z - b.z;

endtask


task automatic compute_edge(
    input coord_3d_t start,
    input coord_3d_t v_i,
    input coord_3d_t delta_i,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

logic signed [`FX_TOTAL_BITS-1:0]   temp_x_sub, temp_y_sub;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_x_mult, temp_y_mult;

temp_x_sub  = (start.x - v_i.x);
temp_y_sub  = (start.y - v_i.y);
temp_x_mult = temp_x_sub * delta_i.y;
temp_y_mult = temp_y_sub * delta_i.x;
out = temp_x_mult - temp_y_mult;

endtask


task automatic compute_plane_coeff_a(
    input coord_3d_t delta_0,
    input coord_3d_t delta_2,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

logic signed [`FX_TOTAL_BITS*2-1:0] temp_y0z2_mult, temp_z0y2_mult;

temp_y0z2_mult = delta_0.y * delta_2.z;
temp_z0y2_mult = delta_0.z * delta_2.y;

// negate to account for V02 = -delta[2]
out = temp_z0y2_mult - temp_y0z2_mult;

endtask

task automatic compute_plane_coeff_b(
    input coord_3d_t delta_0,
    input coord_3d_t delta_2,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

logic signed [`FX_TOTAL_BITS*2-1:0] temp_z0x2_mult, temp_x0z2_mult;

temp_z0x2_mult = delta_0.z * delta_2.x;
temp_x0z2_mult = delta_0.x * delta_2.z;
// negate to account for V02 = -delta[2]
out = temp_x0z2_mult - temp_z0x2_mult;

endtask


task automatic compute_plane_coeff_c(
    input coord_3d_t delta_0,
    input coord_3d_t delta_2,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

logic signed [`FX_TOTAL_BITS*2-1:0] temp_x0y2_mult, temp_y0x2_mult;

temp_x0y2_mult = delta_0.x * delta_2.y;
temp_y0x2_mult = delta_0.y * delta_2.x;

// negate to account for V02 = -delta[2]
out = temp_y0x2_mult - temp_x0y2_mult;

endtask

// Compute the scaled dzdx and dzdy
// We extract the middle 16 bits of the result, to get the 12_4 fixed point result
task automatic scale_dz(
    input signed [`FX_TOTAL_BITS*2-1:0] dz_undiv,
    input signed [`FX_TOTAL_BITS*2-1:0] c,
    output logic signed [`FX_TOTAL_BITS-1:0] out
);

logic signed [`FX_TOTAL_BITS*2-1:0] div_result_dz;

div_result_dz = -((dz_undiv << `FX_FRAC_BITS*2) / c);

out = div_result_dz[(`FX_TOTAL_BITS-1+`FX_FRAC_BITS):`FX_FRAC_BITS];

endtask


task automatic compute_z(
    input coord_3d_t                  v_0,
    input coord_3d_t                  abs_pos,
    input signed [`FX_TOTAL_BITS-1:0] dzdx,
    input signed [`FX_TOTAL_BITS-1:0] dzdy,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

logic signed [`FX_TOTAL_BITS-1:0]   delta_x, delta_y;
logic signed [`FX_TOTAL_BITS*2-1:0] x_component, y_component, z_component;

delta_x = (v_0.x - abs_pos.x);
delta_y = (v_0.y - abs_pos.y);
x_component = delta_x * dzdx;
y_component = delta_y * dzdy;
z_component = {{`FX_INT_BITS{v_0.z[`FX_TOTAL_BITS-1]}}, v_0.z, {`FX_FRAC_BITS{1'b0}}};

out = z_component - x_component - y_component;

endtask

endmodule