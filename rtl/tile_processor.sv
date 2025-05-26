
`include "raster_defines.svh"

//----------------------------------------------------------------------------------------------------------------------
// Module: tile_processor
//
// Author: Riley Peters
//
// Description:
// This module processes an incoming polygon (defined by three vertices v0, v1, v2)
// and a specific tile (defined by tile_x_i, tile_y_i) for rasterization.
// It calculates various parameters necessary for determining pixel coverage
// within the tile and for depth testing. These parameters include:
//    - The absolute starting screen-space position (x, y) of the tile.
//    - The delta vectors (dx, dy, dz) between the polygon vertices.
//    - The edge function values for each of the three polygon edges, evaluated
//      at the tile's origin.
//    - The partial derivatives of depth with respect to x and y (dz/dx, dz/dy).
//    - The initial depth (z_current) at the tile's origin.
//
// The module utilizes a state machine to manage the multi-cycle computations
// involved, primarily for fixed-point multiplication and division operations
// required for edge function and depth calculations.
//
// Parameters:
//   `FX_TOTAL_BITS`: Total number of bits for fixed-point numbers.
//   `FX_FRAC_BITS`: Number of fractional bits for fixed-point numbers.
//   `FX_INT_BITS`: Number of integer bits for fixed-point numbers.
//   `COLOR_BITS`: Number of bits for color data.
//   `TILE_COLUMNS_BITS`: Number of bits to represent tile column index.
//   `TILE_ROWS_BITS`: Number of bits to represent tile row index.
//   `TILE_WIDTH_BITS`: Number of bits to represent the width/height of a tile in pixels (derived from TILE_SIZE).
//   `NUM_VERTICES`: Number of vertices in a polygon (typically 3).
//
// Inputs:
//   clk_i:         Clock signal.
//   rst_n_i:       Synchronous reset, active low.
//   rdy_out_i:     Ready signal from the downstream module, indicating it can accept new data.
//   vld_i:         Valid signal for incoming polygon and tile data.
//   v0_x_i, v0_y_i, v0_z_i: Coordinates of the first vertex (fixed-point).
//   v1_x_i, v1_y_i, v1_z_i: Coordinates of the second vertex (fixed-point).
//   v2_x_i, v2_y_i, v2_z_i: Coordinates of the third vertex (fixed-point).
//   color_i:       Color of the polygon.
//   tile_x_i:      X-coordinate (column index) of the current tile.
//   tile_y_i:      Y-coordinate (row index) of the current tile.
//
// Outputs:
//   rdy_in_o:      Ready signal to the upstream module, indicating this module can accept new data.
//   vld_o:         Valid signal for the outgoing processed data.
//   abs_pos_x_o:   Absolute X-coordinate of the tile's origin (fixed-point).
//   abs_pos_y_o:   Absolute Y-coordinate of the tile's origin (fixed-point).
//   delta_0_x_o:   X-component of vector (v1 - v0) (fixed-point).
//   delta_0_y_o:   Y-component of vector (v1 - v0) (fixed-point).
//   delta_1_x_o:   X-component of vector (v2 - v1) (fixed-point).
//   delta_1_y_o:   Y-component of vector (v2 - v1) (fixed-point).
//   delta_2_x_o:   X-component of vector (v0 - v2) (fixed-point).
//   delta_2_y_o:   Y-component of vector (v0 - v2) (fixed-point).
//   edge_0_o:      Edge function value for edge v0-v1 at tile origin (fixed-point, 2*FX_TOTAL_BITS).
//   edge_1_o:      Edge function value for edge v1-v2 at tile origin (fixed-point, 2*FX_TOTAL_BITS).
//   edge_2_o:      Edge function value for edge v2-v0 at tile origin (fixed-point, 2*FX_TOTAL_BITS).
//   color_o:       Color of the polygon (passed through).
//   tile_x_o:      X-coordinate of the current tile (passed through).
//   tile_y_o:      Y-coordinate of the current tile (passed through).
//   dzdx_o:        Partial derivative of Z with respect to X (fixed-point, 1.5*FX_TOTAL_BITS).
//   dzdy_o:        Partial derivative of Z with respect to Y (fixed-point, 1.5*FX_TOTAL_BITS).
//   z_current_o:   Interpolated Z value at the tile's origin (fixed-point, 1.5*FX_TOTAL_BITS).
//
//----------------------------------------------------------------------------------------------------------------------

module tile_processor(
    input                                                     clk_i,
    input                                                     rst_n_i,
    input                                                     rdy_out_i,
    input                                                     vld_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  v0_x_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  v0_y_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  v0_z_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  v1_x_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  v1_y_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  v1_z_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  v2_x_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  v2_y_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  v2_z_i,
    input               [`COLOR_BITS-1:0]                     color_i,
    input               [`TILE_COLUMNS_BITS-1:0]              tile_x_i,
    input               [`TILE_ROWS_BITS-1:0]                 tile_y_i,
        
    output logic                                              rdy_in_o,
    output logic                                              vld_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  abs_pos_x_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  abs_pos_y_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  delta_0_x_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  delta_0_y_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  delta_1_x_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  delta_1_y_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  delta_2_x_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  delta_2_y_o,
    output logic signed [`FX_TOTAL_BITS*2-1:0]                edge_0_o,
    output logic signed [`FX_TOTAL_BITS*2-1:0]                edge_1_o,
    output logic signed [`FX_TOTAL_BITS*2-1:0]                edge_2_o,
    output logic        [`COLOR_BITS-1:0]                     color_o,
    output logic        [`TILE_COLUMNS_BITS-1:0]              tile_x_o,
    output logic        [`TILE_ROWS_BITS-1:0]                 tile_y_o,
    output logic signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] dzdx_o,
    output logic signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] dzdy_o,
    output logic signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] z_current_o
);

////////////////////////////////////////////////////////////////////

// multi-cycle multipliers

logic                               mul_vld_i     [0:3];
logic signed [`FX_TOTAL_BITS-1:0]   mul_left_i    [0:3];
logic signed [`FX_TOTAL_BITS-1:0]   mul_right_i   [0:3];
logic                               mul_rdy_in_o  [0:3];
logic                               mul_vld_o     [0:3];
logic signed [`FX_TOTAL_BITS*2-1:0] mul_product_i [0:3];    

lp_mul #(.DATA_WIDTH(`FX_TOTAL_BITS), .SIGNED(1)) mul_unit_0 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(mul_vld_i[0]),
    .left_i(mul_left_i[0]),
    .right_i(mul_right_i[0]),
    .rdy_in_o(mul_rdy_in_o[0]),
    .vld_o(mul_vld_o[0]),
    .product_o(mul_product_i[0])
);

lp_mul #(.DATA_WIDTH(`FX_TOTAL_BITS), .SIGNED(1)) mul_unit_1 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(mul_vld_i[1]),
    .left_i(mul_left_i[1]),
    .right_i(mul_right_i[1]),
    .rdy_in_o(mul_rdy_in_o[1]),
    .vld_o(mul_vld_o[1]),
    .product_o(mul_product_i[1])
);

lp_mul #(.DATA_WIDTH(`FX_TOTAL_BITS), .SIGNED(1)) mul_unit_2 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(mul_vld_i[2]),
    .left_i(mul_left_i[2]),
    .right_i(mul_right_i[2]),
    .rdy_in_o(mul_rdy_in_o[2]),
    .vld_o(mul_vld_o[2]),
    .product_o(mul_product_i[2])
);

lp_mul #(.DATA_WIDTH(`FX_TOTAL_BITS), .SIGNED(1)) mul_unit_3 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(mul_vld_i[3]),
    .left_i(mul_left_i[3]),
    .right_i(mul_right_i[3]),
    .rdy_in_o(mul_rdy_in_o[3]),
    .vld_o(mul_vld_o[3]),
    .product_o(mul_product_i[3])
);

////////////////////////////////////////////////////////////////////

// multi-cycle dividers

logic                               div_vld_i     [0:1];
logic signed [`FX_TOTAL_BITS*2-1:0] div_numer_i   [0:1];
logic signed [`FX_TOTAL_BITS*2-1:0] div_denom_i   [0:1];
logic                               div_rdy_in_o  [0:1];
logic                               div_vld_o     [0:1];
logic signed [`FX_TOTAL_BITS*2-1:0] div_quot_i    [0:1];    

lp_div #(.DATA_WIDTH(`FX_TOTAL_BITS*2), .FRAC_BITS(`FX_FRAC_BITS*2), .SIGNED(1)) div_unit_0 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(div_vld_i[0]),
    .numer_i(div_numer_i[0]),
    .denom_i(div_denom_i[0]),
    .rdy_in_o(div_rdy_in_o[0]),
    .vld_o(div_vld_o[0]),
    .quot_o(div_quot_i[0])
);

lp_div #(.DATA_WIDTH(`FX_TOTAL_BITS*2), .FRAC_BITS(`FX_FRAC_BITS*2), .SIGNED(1)) div_unit_1 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(div_vld_i[1]),
    .numer_i(div_numer_i[1]),
    .denom_i(div_denom_i[1]),
    .rdy_in_o(div_rdy_in_o[1]),
    .vld_o(div_vld_o[1]),
    .quot_o(div_quot_i[1])
);

////////////////////////////////////////////////////////////////////

typedef enum {
    INPUT,
    FORWARDNG_1,
    COMPUTE_EDGE_0_EDGE_1,
    COMPUTE_EDGE_2_COEFF_A,
    COMPUTE_COEFF_B_COEFF_C,
    FORWARDNG_2,
    COMPUTE_PARTIALS,
    FORWARDNG_3,
    COMPUTE_Z,
    PASS_ONWARD,
    AWAIT_RESPONSE
} tile_state_t;

tile_state_t present_state, next_state, prev_state;

// State machine
always_ff @(posedge clk_i) begin
    if (!rst_n_i) begin
        prev_state    <= INPUT;
        present_state <= INPUT;
    end else begin
        prev_state    <= present_state;
        present_state <= next_state;
    end
end

always_comb begin
    next_state = present_state;
    case (present_state)
        INPUT : begin
            if (vld_i && rdy_in_o) begin
                next_state = FORWARDNG_1;
            end else begin
                next_state = INPUT;
            end
        end
        FORWARDNG_1 : begin
            next_state = COMPUTE_EDGE_0_EDGE_1;
        end
        COMPUTE_EDGE_0_EDGE_1 : begin
            if (mul_vld_o[0] && mul_vld_o[1] && mul_vld_o[2] && mul_vld_o[3]) begin
                next_state = COMPUTE_EDGE_2_COEFF_A;
            end else begin
                next_state = COMPUTE_EDGE_0_EDGE_1;
            end
        end
        COMPUTE_EDGE_2_COEFF_A : begin
            if (mul_vld_o[0] && mul_vld_o[1] && mul_vld_o[2] && mul_vld_o[3]) begin
                next_state = COMPUTE_COEFF_B_COEFF_C;
            end else begin
                next_state = COMPUTE_EDGE_2_COEFF_A;
            end
        end
        COMPUTE_COEFF_B_COEFF_C : begin
            if (mul_vld_o[0] && mul_vld_o[1] && mul_vld_o[2] && mul_vld_o[3]) begin
                next_state = FORWARDNG_2;
            end else begin
                next_state = COMPUTE_COEFF_B_COEFF_C;
            end
        end   
        FORWARDNG_2 : begin
            next_state = COMPUTE_PARTIALS;
        end
        COMPUTE_PARTIALS : begin
            if (div_vld_o[0] && div_vld_o[1]) begin
                next_state = FORWARDNG_3;
            end else begin
                next_state = COMPUTE_PARTIALS;
            end
        end  
        FORWARDNG_3 : begin
            next_state = COMPUTE_Z;
        end     
        COMPUTE_Z : begin
            if (mul_vld_o[0] && mul_vld_o[1] && mul_vld_o[2] && mul_vld_o[3]) begin
                next_state = PASS_ONWARD;
            end else begin
                next_state = COMPUTE_Z;
            end
        end   
        PASS_ONWARD : begin
            next_state = AWAIT_RESPONSE;
        end
        AWAIT_RESPONSE : begin
            if (!rdy_out_i) begin
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

////////////////////////////////////////////////////////////////////////////

// Important Value Registers

coord_2d_t                                         abs_pos;
coord_3d_t                                         delta_0, delta_1, delta_2;
coord_3d_t                                         v0, v1, v2;
logic signed [`FX_TOTAL_BITS*2-1:0]                edges   [0:`NUM_VERTICES-1];
metadata_t                                         metadata;
logic signed [`FX_TOTAL_BITS*2-1:0]                coeff_A, coeff_B, coeff_C;  
logic signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] dzdx, dzdy;
logic signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] z_current;


/////////////////////////////////////////////////////////////////////////////

// wires for naming the output of the mul and div units at different points in the circuit

logic signed [`FX_TOTAL_BITS*2-1:0] edge_0_x_mult, edge_0_y_mult, edge_1_x_mult, 
                                    edge_1_y_mult, edge_2_x_mult, edge_2_y_mult, 
                                    coeffA_y0z2_mult, coeffA_z0y2_mult, coeffB_z0x2_mult, 
                                    coeffB_x0z2_mult, coeffC_x0y2_mult, coeffC_y0x2_mult,
                                    div_result_dzdx, div_result_dzdy, z_component, 
                                    y_component, x_component, z_temp;

assign edge_0_x_mult = mul_product_i[0];
assign edge_0_y_mult = mul_product_i[1];
assign edge_1_x_mult = mul_product_i[2];
assign edge_1_y_mult = mul_product_i[3];

assign edge_2_x_mult = mul_product_i[0];
assign edge_2_y_mult = mul_product_i[1];
assign coeffA_y0z2_mult = mul_product_i[2];
assign coeffA_z0y2_mult = mul_product_i[3];

assign coeffB_z0x2_mult = mul_product_i[0];
assign coeffB_x0z2_mult = mul_product_i[1];
assign coeffC_x0y2_mult = mul_product_i[2];
assign coeffC_y0x2_mult = mul_product_i[3];

assign div_result_dzdx = -div_quot_i[0];
assign div_result_dzdy = -div_quot_i[1];

assign x_component = mul_product_i[0];
assign y_component = mul_product_i[1];
assign z_component = {{`FX_INT_BITS{v0.z[`FX_TOTAL_BITS-1]}}, v0.z, {`FX_FRAC_BITS{1'b0}}};
assign z_temp      = z_component - x_component - y_component;

/////////////////////////////////////////////////////////////////////////////

// Mul and Div Multiplexing based on next state

always_comb begin

    // set input for two cycle range at state transition
    if (present_state == FORWARDNG_1 && next_state == COMPUTE_EDGE_0_EDGE_1 
        || prev_state == FORWARDNG_1 && present_state == COMPUTE_EDGE_0_EDGE_1) begin

        // place edge 0 and 1 related computation values in the multiplier
        mul_left_i  = '{(abs_pos.x - v0.x), (abs_pos.y - v0.y), (abs_pos.x - v1.x), (abs_pos.y - v1.y)};
        mul_right_i = '{delta_0.y, delta_0.x, delta_1.y, delta_1.x};
        mul_vld_i   = '{1, 1, 1, 1};
        div_numer_i = '{0, 0};
        div_denom_i = '{0, 0};
        div_vld_i   = '{0, 0};
    end else if (present_state == COMPUTE_EDGE_0_EDGE_1 && next_state == COMPUTE_EDGE_2_COEFF_A 
        || prev_state == COMPUTE_EDGE_0_EDGE_1 && present_state == COMPUTE_EDGE_2_COEFF_A) begin

        // place edge 2 and coeff A related computation values in the multiplier
        mul_left_i  = '{(abs_pos.x - v2.x), (abs_pos.y - v2.y), delta_0.y, delta_0.z};
        mul_right_i = '{delta_2.y, delta_2.x, delta_2.z, delta_2.y};
        mul_vld_i   = '{1, 1, 1, 1};
        div_numer_i = '{0, 0};
        div_denom_i = '{0, 0};
        div_vld_i   = '{0, 0};
    end else if (present_state == COMPUTE_EDGE_2_COEFF_A && next_state == COMPUTE_COEFF_B_COEFF_C 
        || prev_state == COMPUTE_EDGE_2_COEFF_A && present_state == COMPUTE_COEFF_B_COEFF_C) begin

        // place coeff B and C related computation values in the multiplier
        mul_left_i  = '{delta_0.z, delta_0.x, delta_0.x, delta_0.y};
        mul_right_i = '{delta_2.x, delta_2.z, delta_2.y, delta_2.x};
        mul_vld_i   = '{1, 1, 1, 1};
        div_numer_i = '{0, 0};
        div_denom_i = '{0, 0};
        div_vld_i   = '{0, 0};
    end else if (present_state == FORWARDNG_2 && next_state == COMPUTE_PARTIALS 
        || prev_state == FORWARDNG_2 && present_state == COMPUTE_PARTIALS) begin
        
        // when moving to computing the partial diffs, place coefficients in dividers
        mul_left_i  = '{0, 0, 0, 0};
        mul_right_i = '{0, 0, 0, 0};
        mul_vld_i   = '{0, 0, 0, 0};
        div_numer_i = '{coeff_A, coeff_B};
        div_denom_i = '{coeff_C, coeff_C};
        div_vld_i   = '{1, 1};
    end else if (present_state == FORWARDNG_3 && next_state == COMPUTE_Z 
        || prev_state == FORWARDNG_3 && present_state == COMPUTE_Z) begin
        // if transition to compute z, place z related values into multipliers
        mul_left_i  = '{(v0.x - abs_pos.x), (v0.y - abs_pos.y), 0, 0};
        mul_right_i = '{dzdx[(`FX_TOTAL_BITS+`FX_FRAC_BITS/2)-1:`FX_FRAC_BITS/2], 
            dzdy[(`FX_TOTAL_BITS+`FX_FRAC_BITS/2)-1:`FX_FRAC_BITS/2], 0, 0};
        mul_vld_i   = '{1, 1, 1, 1};
        div_numer_i = '{0, 0};
        div_denom_i = '{0, 0};
        div_vld_i   = '{0, 0};
    end else begin
        // Default signal values
        mul_left_i  = '{0, 0, 0, 0};
        mul_right_i = '{0, 0, 0, 0};
        mul_vld_i   = '{0, 0, 0, 0};
        div_numer_i = '{0, 0};
        div_denom_i = '{0, 0};
        div_vld_i   = '{0, 0};
    end
end

/////////////////////////////////////////////////////////////////////////////

// Latching Logic

always_ff @(posedge clk_i) begin 
    if (!rst_n_i) begin
        // Reset internal registers
        abs_pos.x <= 0; abs_pos.y <= 0;
        edges[0]  <= 0; edges[1]  <= 0; edges[2]  <= 0;
        delta_0.x <= 0; delta_0.y <= 0; delta_0.z <= 0;
        delta_1.x <= 0; delta_1.y <= 0; delta_1.z <= 0;
        delta_2.x <= 0; delta_2.y <= 0; delta_2.z <= 0;
        metadata.color  <= 0;
        metadata.tile_x <= 0;
        metadata.tile_y <= 0;
        coeff_A   <= 0; coeff_B   <= 0; coeff_C   <= 0;
        dzdx      <= 0; dzdy      <= 0; z_current <= 0;

        // Reset output signals
        rdy_in_o      <= 1;
        vld_o         <= 0;

        abs_pos_x_o <= 0; abs_pos_y_o <= 0; 
        delta_0_x_o <= 0; delta_0_y_o <= 0; 
        delta_1_x_o <= 0; delta_1_y_o <= 0; 
        delta_2_x_o <= 0; delta_2_y_o <= 0;
        edge_0_o    <= 0; edge_1_o    <= 0; edge_2_o    <= 0;
        color_o     <= 0; tile_x_o    <= 0; tile_y_o    <= 0;
        dzdx_o      <= 0; dzdy_o      <= 0; z_current_o <= 0;
    end else begin
        case (present_state)
            INPUT: begin
                // If valid input received:
                if (next_state == FORWARDNG_1) begin
                    // Deassert ready signal
                    rdy_in_o <= 0;

                    // Store the metadata
                    metadata.color <= color_i;
                    metadata.tile_x <= tile_x_i;
                    metadata.tile_y <= tile_y_i;

                    // Store the verticies
                    v0.x <= v0_x_i; v0.y <= v0_y_i; v0.z <= v0_z_i;
                    v1.x <= v1_x_i; v1.y <= v1_y_i; v1.z <= v1_z_i;
                    v2.x <= v2_x_i; v2.y <= v2_y_i; v2.z <= v2_z_i;

                    // Store the start position of the tile
                    abs_pos.x <= {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, tile_x_i, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
                    abs_pos.y <= {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, tile_y_i, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};

                    // Store the deltas between each point
                    delta_0.x <= v1_x_i - v0_x_i; delta_0.y <= v1_y_i - v0_y_i; delta_0.z <= v1_z_i - v0_z_i;
                    delta_1.x <= v2_x_i - v1_x_i; delta_1.y <= v2_y_i - v1_y_i; delta_1.z <= v2_z_i - v1_z_i;
                    delta_2.x <= v0_x_i - v2_x_i; delta_2.y <= v0_y_i - v2_y_i; delta_2.z <= v0_z_i - v2_z_i;
                end
            end
            FORWARDNG_1 : begin
                // one cycle delay to allow delta values to propagate
            end
            COMPUTE_EDGE_0_EDGE_1 : begin
                // If computations for these edges are complete
                if (next_state == COMPUTE_EDGE_2_COEFF_A) begin
                    edges[0] <= edge_0_x_mult - edge_0_y_mult;
                    edges[1] <= edge_1_x_mult - edge_1_y_mult;
                end
            end
            COMPUTE_EDGE_2_COEFF_A: begin
                // If computations for edge 2 and coeff A are complete
                if (next_state == COMPUTE_COEFF_B_COEFF_C) begin
                    edges[2] <= edge_2_x_mult - edge_2_y_mult;
                    coeff_A  <= coeffA_y0z2_mult - coeffA_z0y2_mult;
                end
            end
            COMPUTE_COEFF_B_COEFF_C: begin
                // If computations for coeff B and C are complete
                if (next_state == FORWARDNG_2) begin
                    coeff_B <= coeffB_z0x2_mult - coeffB_x0z2_mult;
                    coeff_C <= coeffC_x0y2_mult - coeffC_y0x2_mult;
                end
            end
            FORWARDNG_2 : begin
                // one cycle delay to allow coeff values to propagate
            end
            COMPUTE_PARTIALS : begin
                // If computations for coeff dzdx and dzdy are complete
                if (next_state == FORWARDNG_3) begin
                    dzdx <= div_result_dzdx[(`FX_TOTAL_BITS+`FX_INT_BITS/2+`FX_FRAC_BITS)-1:`FX_FRAC_BITS/2];
                    dzdy <= div_result_dzdy[(`FX_TOTAL_BITS+`FX_INT_BITS/2+`FX_FRAC_BITS)-1:`FX_FRAC_BITS/2];
                end
            end
            FORWARDNG_3 : begin
                // one cycle delay to allow differential values to propagate
            end
            COMPUTE_Z: begin
                // If computations for z are complete
                if (next_state == PASS_ONWARD) begin
                    z_current <= z_temp[(`FX_TOTAL_BITS+`FX_INT_BITS/2+`FX_FRAC_BITS)-1:`FX_FRAC_BITS/2];
                end
            end
            PASS_ONWARD: begin
                // if output is open, write the data to the output
                vld_o <= '1;

                abs_pos_x_o <= abs_pos.x; abs_pos_y_o <= abs_pos.y; 
                delta_0_x_o <= delta_0.x; delta_0_y_o <= delta_0.y;
                delta_1_x_o <= delta_1.x; delta_1_y_o <= delta_1.y;
                delta_2_x_o <= delta_2.x; delta_2_y_o <= delta_2.y;
                edge_0_o    <= edges[0];
                edge_1_o    <= edges[1];
                edge_2_o    <= edges[2];
                color_o     <= metadata.color; 
                tile_x_o    <= metadata.tile_x; 
                tile_y_o    <= metadata.tile_y;
                dzdx_o      <= dzdx;
                dzdy_o      <= dzdy;
                z_current_o <= z_current;
            end
            AWAIT_RESPONSE: begin
                // once output has been read
                // set output invalid, mark ready to read
                if (rdy_out_i) begin
                    vld_o <= 0;
                    rdy_in_o  <= 1;
                end 
            end
            default begin
            end
        endcase
    end
end

/////////////////////////////////////////////////////////////////////////////

endmodule