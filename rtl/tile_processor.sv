
`timescale 1ns/1ps
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
//   v0_x_i, v0_y_i, v0_z_i: Coordinates of the first vertex (12.4 fixed-point).
//   v1_x_i, v1_y_i, v1_z_i: Coordinates of the second vertex (12.4 fixed-point).
//   v2_x_i, v2_y_i, v2_z_i: Coordinates of the third vertex (12.4 fixed-point).
//   color_i:       Color of the polygon.
//   tile_x_i:      X-coordinate (column index) of the current tile.
//   tile_y_i:      Y-coordinate (row index) of the current tile.
//
// Outputs:
//   rdy_in_o:      Ready signal to the upstream module, indicating this module can accept new data.
//   vld_o:         Valid signal for the outgoing processed data.
//   abs_pos_x_o:   Absolute X-coordinate of the tile's origin (12.4 fixed-point).
//   abs_pos_y_o:   Absolute Y-coordinate of the tile's origin (12.4 fixed-point).
//   delta_0_x_o:   X-component of vector (v1 - v0) (12.4 fixed-point).
//   delta_0_y_o:   Y-component of vector (v1 - v0) (12.4 fixed-point).
//   delta_1_x_o:   X-component of vector (v2 - v1) (12.4 fixed-point).
//   delta_1_y_o:   Y-component of vector (v2 - v1) (12.4 fixed-point).
//   delta_2_x_o:   X-component of vector (v0 - v2) (12.4 fixed-point).
//   delta_2_y_o:   Y-component of vector (v0 - v2) (12.4 fixed-point).
//   edge_0_o:      Edge function value for edge v0-v1 at tile origin (24.8 fixed-point).
//   edge_1_o:      Edge function value for edge v1-v2 at tile origin (24.8 fixed-point).
//   edge_2_o:      Edge function value for edge v2-v0 at tile origin (24.8 fixed-point).
//   color_o:       Color of the polygon (passed through).
//   tile_x_o:      X-coordinate of the current tile (passed through).
//   tile_y_o:      Y-coordinate of the current tile (passed through).
//   dzdx_o:        Partial derivative of Z with respect to X (18.6 fixed-point).
//   dzdy_o:        Partial derivative of Z with respect to Y (18.6 fixed-point).
//   z_o:           Interpolated Z value at the tile's origin (18.6 fixed-point).
//
//----------------------------------------------------------------------------------------------------------------------

module tile_processor(
    input  wire                                 clk_i,
    input  wire                                 rst_n_i,
    input  wire                                 rdy_out_i,
    input  wire                                 vld_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     v0_x_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     v0_y_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     v0_z_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     v1_x_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     v1_y_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     v1_z_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     v2_x_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     v2_y_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     v2_z_i,
    input  wire        [`COLOR_BITS-1:0]        color_i,
    input  wire        [`TILE_COLUMNS_BITS-1:0] tile_x_i,
    input  wire        [`TILE_ROWS_BITS-1:0]    tile_y_i,
        
    output reg                                  rdy_in_o,
    output reg                                  vld_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     abs_pos_x_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     abs_pos_y_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     delta_0_x_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     delta_0_y_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     delta_1_x_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     delta_1_y_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     delta_2_x_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     delta_2_y_o,
    output wire signed [`FX_TOTAL_BITS*2-1:0]   edge_0_o,
    output wire signed [`FX_TOTAL_BITS*2-1:0]   edge_1_o,
    output wire signed [`FX_TOTAL_BITS*2-1:0]   edge_2_o,
    output wire        [`COLOR_BITS-1:0]        color_o,
    output wire        [`TILE_COLUMNS_BITS-1:0] tile_x_o,
    output wire        [`TILE_ROWS_BITS-1:0]    tile_y_o,
    output wire signed [`FX_TOTAL_BITS*2-1:0]   dzdx_o,
    output wire signed [`FX_TOTAL_BITS*2-1:0]   dzdy_o,
    output wire signed [`FX_TOTAL_BITS*2-1:0]   z_o
);

////////////////////////////////////////////////////////////////////

// structs needed to be defined locally because of openlane

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


////////////////////////////////////////////////////////////////////

// multi-cycle multipliers

logic                               fw_mul_vld_i     [0:1];
logic signed [`FX_TOTAL_BITS*2-1:0] fw_mul_left_i    [0:1];
logic signed [`FX_TOTAL_BITS*2-1:0] fw_mul_right_i   [0:1];
logic                               fw_mul_rdy_in_o  [0:1];
logic                               fw_mul_vld_o     [0:1];
logic signed [`FX_TOTAL_BITS*4-1:0] fw_mul_product_i [0:1];   

lp_mul #(.DATA_WIDTH(`FX_TOTAL_BITS*2), .SIGNED(1)) mul_unit_0 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(fw_mul_vld_i[0]),
    .left_i(fw_mul_left_i[0]),
    .right_i(fw_mul_right_i[0]),
    .rdy_in_o(fw_mul_rdy_in_o[0]),
    .vld_o(fw_mul_vld_o[0]),
    .product_o(fw_mul_product_i[0])
);

lp_mul #(.DATA_WIDTH(`FX_TOTAL_BITS*2), .SIGNED(1)) mul_unit_1 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(fw_mul_vld_i[1]),
    .left_i(fw_mul_left_i[1]),
    .right_i(fw_mul_right_i[1]),
    .rdy_in_o(fw_mul_rdy_in_o[1]),
    .vld_o(fw_mul_vld_o[1]),
    .product_o(fw_mul_product_i[1])
);

logic                               hw_mul_vld_i     [0:1];
logic signed [`FX_TOTAL_BITS-1:0]   hw_mul_left_i    [0:1];
logic signed [`FX_TOTAL_BITS-1:0]   hw_mul_right_i   [0:1];
logic                               hw_mul_rdy_in_o  [0:1];
logic                               hw_mul_vld_o     [0:1];
logic signed [`FX_TOTAL_BITS*2-1:0] hw_mul_product_i [0:1];  

lp_mul #(.DATA_WIDTH(`FX_TOTAL_BITS), .SIGNED(1)) mul_unit_2 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(hw_mul_vld_i[0]),
    .left_i(hw_mul_left_i[0]),
    .right_i(hw_mul_right_i[0]),
    .rdy_in_o(hw_mul_rdy_in_o[0]),
    .vld_o(hw_mul_vld_o[0]),
    .product_o(hw_mul_product_i[0])
);

lp_mul #(.DATA_WIDTH(`FX_TOTAL_BITS), .SIGNED(1)) mul_unit_3 (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(hw_mul_vld_i[1]),
    .left_i(hw_mul_left_i[1]),
    .right_i(hw_mul_right_i[1]),
    .rdy_in_o(hw_mul_rdy_in_o[1]),
    .vld_o(hw_mul_vld_o[1]),
    .product_o(hw_mul_product_i[1])
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
            if (fw_mul_vld_o[0] && fw_mul_vld_o[1] && hw_mul_vld_o[0] && hw_mul_vld_o[1]) begin
                next_state = COMPUTE_EDGE_2_COEFF_A;
            end else begin
                next_state = COMPUTE_EDGE_0_EDGE_1;
            end
        end
        COMPUTE_EDGE_2_COEFF_A : begin
            if (fw_mul_vld_o[0] && fw_mul_vld_o[1] && hw_mul_vld_o[0] && hw_mul_vld_o[1]) begin
                next_state = COMPUTE_COEFF_B_COEFF_C;
            end else begin
                next_state = COMPUTE_EDGE_2_COEFF_A;
            end
        end
        COMPUTE_COEFF_B_COEFF_C : begin
            if (fw_mul_vld_o[0] && fw_mul_vld_o[1] && hw_mul_vld_o[0] && hw_mul_vld_o[1]) begin
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
            if (fw_mul_vld_o[0] && fw_mul_vld_o[1] && hw_mul_vld_o[0] && hw_mul_vld_o[1]) begin
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

coord_2d_t                        abs_pos;
coord_3d_t                        delta_0, delta_1, delta_2;
coord_3d_t                        v0, v1, v2;
metadata_t                        metadata;
reg signed [`FX_TOTAL_BITS*2-1:0] edges   [0:`NUM_VERTICES-1];
reg signed [`FX_TOTAL_BITS*2-1:0] coeff_A, coeff_B, coeff_C;  
reg signed [`FX_TOTAL_BITS*2-1:0] dzdx, dzdy;
reg signed [`FX_TOTAL_BITS*2-1:0] z_current;

// output is only shown when valid
assign abs_pos_x_o = vld_o ? abs_pos.x       :  0; 
assign delta_0_x_o = vld_o ? delta_0.x       :  0;
assign delta_1_x_o = vld_o ? delta_1.x       :  0;  
assign delta_2_x_o = vld_o ? delta_2.x       :  0; 
assign abs_pos_y_o = vld_o ? abs_pos.y       :  0;
assign delta_0_y_o = vld_o ? delta_0.y       :  0; 
assign delta_1_y_o = vld_o ? delta_1.y       :  0;
assign delta_2_y_o = vld_o ? delta_2.y       :  0; 
assign edge_0_o    = vld_o ? edges[0]        :  0; 
assign edge_1_o    = vld_o ? edges[1]        :  0;
assign edge_2_o    = vld_o ? edges[2]        :  0;
assign color_o     = vld_o ? metadata.color  :  0;
assign tile_x_o    = vld_o ? metadata.tile_x :  0;
assign tile_y_o    = vld_o ? metadata.tile_y :  0;
assign dzdx_o      = vld_o ? dzdx            :  0;
assign dzdy_o      = vld_o ? dzdy            :  0;
assign z_o         = vld_o ? z_current       :  0;


/////////////////////////////////////////////////////////////////////////////

// wires for naming the output of the mul and div units at different points in the circuit

wire signed [`FX_TOTAL_BITS*2-1:0] edge_0_x_mult, edge_0_y_mult, edge_1_x_mult, 
                                    edge_1_y_mult, edge_2_x_mult, edge_2_y_mult, 
                                    coeffA_y0z2_mult, coeffA_z0y2_mult, coeffB_z0x2_mult, 
                                    coeffB_x0z2_mult, coeffC_x0y2_mult, coeffC_y0x2_mult,
                                    div_result_dzdx, div_result_dzdy;

wire signed [`FX_TOTAL_BITS*4-1:0] z_component, y_component, x_component, z_temp;

assign edge_0_x_mult = fw_mul_product_i[0][`FX_TOTAL_BITS*2+`FX_FRAC_BITS*2-1:`FX_FRAC_BITS*2];
assign edge_0_y_mult = fw_mul_product_i[1][`FX_TOTAL_BITS*2+`FX_FRAC_BITS*2-1:`FX_FRAC_BITS*2];
assign edge_1_x_mult = hw_mul_product_i[0];
assign edge_1_y_mult = hw_mul_product_i[1];

assign edge_2_x_mult = fw_mul_product_i[0][`FX_TOTAL_BITS*2+`FX_FRAC_BITS*2-1:`FX_FRAC_BITS*2];
assign edge_2_y_mult = fw_mul_product_i[1][`FX_TOTAL_BITS*2+`FX_FRAC_BITS*2-1:`FX_FRAC_BITS*2];
assign coeffA_y0z2_mult = hw_mul_product_i[0];
assign coeffA_z0y2_mult = hw_mul_product_i[1];

assign coeffB_z0x2_mult = fw_mul_product_i[0][`FX_TOTAL_BITS*2+`FX_FRAC_BITS*2-1:`FX_FRAC_BITS*2];
assign coeffB_x0z2_mult = fw_mul_product_i[1][`FX_TOTAL_BITS*2+`FX_FRAC_BITS*2-1:`FX_FRAC_BITS*2];
assign coeffC_x0y2_mult = hw_mul_product_i[0];
assign coeffC_y0x2_mult = hw_mul_product_i[1];

assign div_result_dzdx = div_quot_i[0];
assign div_result_dzdy = div_quot_i[1];

assign x_component = fw_mul_product_i[0];
assign y_component = fw_mul_product_i[1];
assign z_component = {{`FX_INT_BITS*3{v0.z[`FX_TOTAL_BITS-1]}}, v0.z, {`FX_FRAC_BITS*3{1'b0}}};
assign z_temp      = z_component - x_component - y_component;

/////////////////////////////////////////////////////////////////////////////

// Mul and Div Multiplexing based on next state

always_comb begin

    // this extending needs to be done to increase variables size 12.4 to 24.8,
    // this ends up being necessary so that we can reuse two of the multipliers for 
    // the x_component and y_component computations which require that higher level of precision
    logic signed [`FX_TOTAL_BITS*2-1:0] temp_fw_mul_left_i[0:1], temp_fw_mul_right_i[0:1];
    sext_f12p4_f24p8(0, temp_fw_mul_left_i[0]);
    sext_f12p4_f24p8(0, temp_fw_mul_left_i[1]);
    sext_f12p4_f24p8(0, temp_fw_mul_right_i[0]);
    sext_f12p4_f24p8(0, temp_fw_mul_right_i[1]);

    // set input for two cycle range at state transition
    if (present_state == FORWARDNG_1 && next_state == COMPUTE_EDGE_0_EDGE_1 
        || prev_state == FORWARDNG_1 && present_state == COMPUTE_EDGE_0_EDGE_1) begin

        sext_f12p4_f24p8((abs_pos.x - v0.x), temp_fw_mul_left_i[0]);  
        sext_f12p4_f24p8((abs_pos.y - v0.y), temp_fw_mul_left_i[1]);
        sext_f12p4_f24p8(delta_0.y, temp_fw_mul_right_i[0]); 
        sext_f12p4_f24p8(delta_0.x, temp_fw_mul_right_i[1]);

        // place edge 0 and 1 related computation values in the multiplier
        fw_mul_left_i[0]  = temp_fw_mul_left_i[0];  fw_mul_left_i[1]  = temp_fw_mul_left_i[1];
        fw_mul_right_i[0] = temp_fw_mul_right_i[0]; fw_mul_right_i[1] = temp_fw_mul_right_i[1];
        fw_mul_vld_i[0]   = 1;                      fw_mul_vld_i[1]   = 1;

        hw_mul_left_i[0]  = (abs_pos.x - v1.x); hw_mul_left_i[1]  = (abs_pos.y - v1.y);
        hw_mul_right_i[0] = delta_1.y;          hw_mul_right_i[1] = delta_1.x;
        hw_mul_vld_i[0]   = 1;                  hw_mul_vld_i[1]   = 1;

        div_numer_i[0] = 0; div_numer_i[1] = 0;
        div_denom_i[0] = 0; div_denom_i[1] = 0;
        div_vld_i[0]   = 0; div_vld_i[1]   = 0;
    end else if (present_state == COMPUTE_EDGE_0_EDGE_1 && next_state == COMPUTE_EDGE_2_COEFF_A 
        || prev_state == COMPUTE_EDGE_0_EDGE_1 && present_state == COMPUTE_EDGE_2_COEFF_A) begin

        sext_f12p4_f24p8((abs_pos.x - v2.x), temp_fw_mul_left_i[0]);  
        sext_f12p4_f24p8((abs_pos.y - v2.y), temp_fw_mul_left_i[1]);
        sext_f12p4_f24p8(delta_2.y, temp_fw_mul_right_i[0]); 
        sext_f12p4_f24p8(delta_2.x, temp_fw_mul_right_i[1]);

        // place edge 2 and coeff A related computation values in the multiplier
        fw_mul_left_i[0]  = temp_fw_mul_left_i[0];  fw_mul_left_i[1]  = temp_fw_mul_left_i[1];
        fw_mul_right_i[0] = temp_fw_mul_right_i[0]; fw_mul_right_i[1] = temp_fw_mul_right_i[1];
        fw_mul_vld_i[0]   = 1;                      fw_mul_vld_i[1]   = 1;

        hw_mul_left_i[0]  = delta_0.y; hw_mul_left_i[1]  = delta_0.z;
        hw_mul_right_i[0] = delta_2.z; hw_mul_right_i[1] = delta_2.y;
        hw_mul_vld_i[0]   = 1;         hw_mul_vld_i[1]   = 1;

        div_numer_i[0] = 0; div_numer_i[1] = 0;
        div_denom_i[0] = 0; div_denom_i[1] = 0;
        div_vld_i[0]   = 0; div_vld_i[1]   = 0;
    end else if (present_state == COMPUTE_EDGE_2_COEFF_A && next_state == COMPUTE_COEFF_B_COEFF_C 
        || prev_state == COMPUTE_EDGE_2_COEFF_A && present_state == COMPUTE_COEFF_B_COEFF_C) begin

        sext_f12p4_f24p8(delta_0.z, temp_fw_mul_left_i[0]);  
        sext_f12p4_f24p8(delta_0.x, temp_fw_mul_left_i[1]);
        sext_f12p4_f24p8(delta_2.x, temp_fw_mul_right_i[0]); 
        sext_f12p4_f24p8(delta_2.z, temp_fw_mul_right_i[1]);

        // place coeff B and C related computation values in the multiplier
        fw_mul_left_i[0]  = temp_fw_mul_left_i[0];  fw_mul_left_i[1]  = temp_fw_mul_left_i[1];
        fw_mul_right_i[0] = temp_fw_mul_right_i[0]; fw_mul_right_i[1] = temp_fw_mul_right_i[1];
        fw_mul_vld_i[0]   = 1;                      fw_mul_vld_i[1]   = 1;

        hw_mul_left_i[0]  = delta_0.x; hw_mul_left_i[1]  = delta_0.y;
        hw_mul_right_i[0] = delta_2.y; hw_mul_right_i[1] = delta_2.x;
        hw_mul_vld_i[0]   = 1;         hw_mul_vld_i[1]   = 1;

        div_numer_i[0] = 0; div_numer_i[1] = 0;
        div_denom_i[0] = 0; div_denom_i[1] = 0;
        div_vld_i[0]   = 0; div_vld_i[1]   = 0;
    end else if (present_state == FORWARDNG_2 && next_state == COMPUTE_PARTIALS 
        || prev_state == FORWARDNG_2 && present_state == COMPUTE_PARTIALS) begin
        
        // when moving to computing the partial diffs, place coefficients in dividers
        fw_mul_left_i[0]  = 0;  fw_mul_left_i[1]  = 0;
        fw_mul_right_i[0] = 0;  fw_mul_right_i[1] = 0;
        fw_mul_vld_i[0]   = 0;  fw_mul_vld_i[1]   = 0;

        hw_mul_left_i[0]  = 0; hw_mul_left_i[1]  = 0;
        hw_mul_right_i[0] = 0; hw_mul_right_i[1] = 0;
        hw_mul_vld_i[0]   = 0; hw_mul_vld_i[1]   = 0;

        div_numer_i[0] = -coeff_A; div_numer_i[1] = -coeff_B;
        div_denom_i[0] = coeff_C;  div_denom_i[1] = coeff_C;
        div_vld_i[0]   = 1;        div_vld_i[1]   = 1;
    end else if (present_state == FORWARDNG_3 && next_state == COMPUTE_Z 
        || prev_state == FORWARDNG_3 && present_state == COMPUTE_Z) begin

        sext_f12p4_f24p8((v0.x - abs_pos.x), temp_fw_mul_left_i[0]);  
        sext_f12p4_f24p8((v0.y - abs_pos.y), temp_fw_mul_left_i[1]);

        // if transition to compute z, place z related values into multipliers
        fw_mul_left_i[0]  = temp_fw_mul_left_i[0];  fw_mul_left_i[1]  = temp_fw_mul_left_i[1];
        fw_mul_right_i[0] = dzdx;                   fw_mul_right_i[1] = dzdy;
        fw_mul_vld_i[0]   = 1;                      fw_mul_vld_i[1]   = 1;

        hw_mul_left_i[0]  = 0; hw_mul_left_i[1]  = 0;
        hw_mul_right_i[0] = 0; hw_mul_right_i[1] = 0;
        hw_mul_vld_i[0]   = 0; hw_mul_vld_i[1]   = 0;

        div_numer_i[0] = 0; div_numer_i[1] = 0;
        div_denom_i[0] = 0; div_denom_i[1] = 0;
        div_vld_i[0]   = 0; div_vld_i[1]   = 0;
    end else begin
        // Default signal values
        fw_mul_left_i[0]  = 0;  fw_mul_left_i[1]  = 0;
        fw_mul_right_i[0] = 0;  fw_mul_right_i[1] = 0;
        fw_mul_vld_i[0]   = 0;  fw_mul_vld_i[1]   = 0;

        hw_mul_left_i[0]  = 0; hw_mul_left_i[1]  = 0;
        hw_mul_right_i[0] = 0; hw_mul_right_i[1] = 0;
        hw_mul_vld_i[0]   = 0; hw_mul_vld_i[1]   = 0;

        div_numer_i[0] = 0; div_numer_i[1] = 0;
        div_denom_i[0] = 0; div_denom_i[1] = 0;
        div_vld_i[0]   = 0; div_vld_i[1]   = 0;
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
                    coeff_A  <= coeffA_z0y2_mult - coeffA_y0z2_mult;
                end
            end
            COMPUTE_COEFF_B_COEFF_C: begin
                // If computations for coeff B and C are complete
                if (next_state == FORWARDNG_2) begin
                    coeff_B <= coeffB_x0z2_mult - coeffB_z0x2_mult;
                    coeff_C <= coeffC_y0x2_mult - coeffC_x0y2_mult;
                end
            end
            FORWARDNG_2 : begin
                // one cycle delay to allow coeff values to propagate
            end
            COMPUTE_PARTIALS : begin
                // If computations for coeff dzdx and dzdy are complete
                if (next_state == FORWARDNG_3) begin
                    dzdx <= div_result_dzdx;
                    dzdy <= div_result_dzdy;
                end
            end
            FORWARDNG_3 : begin
                // one cycle delay to allow differential values to propagate
            end
            COMPUTE_Z: begin
                // If computations for z are complete
                if (next_state == PASS_ONWARD) begin
                    z_current <= z_temp[`FX_TOTAL_BITS*2+`FX_FRAC_BITS*2-1:`FX_FRAC_BITS*2];
                end
            end
            PASS_ONWARD: begin
                // if output is open, write the data to the output
                vld_o <= '1;
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

// sign extend a 16-bit fixed-point number to 32 bits
task automatic sext_f12p4_f24p8(
    input        signed [`FX_TOTAL_BITS-1:0]   in,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

out = $signed({{`FX_INT_BITS{in[`FX_TOTAL_BITS-1]}}, in, {`FX_FRAC_BITS{1'b0}}});
    
endtask

/////////////////////////////////////////////////////////////////////////////

endmodule