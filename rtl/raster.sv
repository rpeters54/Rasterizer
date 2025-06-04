`timescale 1ns/1ps
`include "raster_defines.svh"

module raster (
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
        
    output wire                                 rdy_in_o,
    output wire                                 vld_o,
    output wire        [`COLOR_BITS-1:0]        color_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     pixel_x_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     pixel_y_o
);

logic                                 rdy_inter;
logic                                 vld_inter;
logic signed [`FX_TOTAL_BITS-1:0]     abs_pos_x_inter;
logic signed [`FX_TOTAL_BITS-1:0]     abs_pos_y_inter;
logic signed [`FX_TOTAL_BITS-1:0]     delta_0_x_inter;
logic signed [`FX_TOTAL_BITS-1:0]     delta_0_y_inter;
logic signed [`FX_TOTAL_BITS-1:0]     delta_1_x_inter;
logic signed [`FX_TOTAL_BITS-1:0]     delta_1_y_inter;
logic signed [`FX_TOTAL_BITS-1:0]     delta_2_x_inter;
logic signed [`FX_TOTAL_BITS-1:0]     delta_2_y_inter;
logic signed [`FX_TOTAL_BITS*2-1:0]   edge_0_inter;
logic signed [`FX_TOTAL_BITS*2-1:0]   edge_1_inter;
logic signed [`FX_TOTAL_BITS*2-1:0]   edge_2_inter;
logic        [`COLOR_BITS-1:0]        color_inter;
logic        [`TILE_COLUMNS_BITS-1:0] tile_x_inter;
logic        [`TILE_ROWS_BITS-1:0]    tile_y_inter;
logic signed [`FX_TOTAL_BITS*2-1:0]   dzdx_inter;
logic signed [`FX_TOTAL_BITS*2-1:0]   dzdy_inter;
logic signed [`FX_TOTAL_BITS*2-1:0]   z_inter;

tile_processor tpu (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .rdy_out_i(rdy_inter),
    .vld_i(vld_i),
    .v0_x_i(v0_x_i),
    .v0_y_i(v0_y_i),
    .v0_z_i(v0_z_i),
    .v1_x_i(v1_x_i),
    .v1_y_i(v1_y_i),
    .v1_z_i(v1_z_i),
    .v2_x_i(v2_x_i),
    .v2_y_i(v2_y_i),
    .v2_z_i(v2_z_i),
    .color_i(color_i),
    .tile_x_i(tile_x_i),
    .tile_y_i(tile_y_i),

    .rdy_in_o(rdy_in_o),
    .vld_o(vld_inter),
    .abs_pos_x_o(abs_pos_x_inter),
    .abs_pos_y_o(abs_pos_y_inter),
    .delta_0_x_o(delta_0_x_inter),
    .delta_0_y_o(delta_0_y_inter),
    .delta_1_x_o(delta_1_x_inter),
    .delta_1_y_o(delta_1_y_inter),
    .delta_2_x_o(delta_2_x_inter),
    .delta_2_y_o(delta_2_y_inter),
    .edge_0_o(edge_0_inter),
    .edge_1_o(edge_1_inter),
    .edge_2_o(edge_2_inter),
    .color_o(color_inter),
    .tile_x_o(tile_x_inter),
    .tile_y_o(tile_y_inter),
    .dzdx_o(dzdx_inter),
    .dzdy_o(dzdy_inter),
    .z_o(z_inter)
);

pixel_processor ppu (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .rdy_out_i(rdy_out_i),
    .vld_i(vld_inter),
    .abs_pos_x_i(abs_pos_x_inter),
    .abs_pos_y_i(abs_pos_y_inter),
    .delta_0_x_i(delta_0_x_inter),
    .delta_0_y_i(delta_0_y_inter),
    .delta_1_x_i(delta_1_x_inter),
    .delta_1_y_i(delta_1_y_inter),
    .delta_2_x_i(delta_2_x_inter),
    .delta_2_y_i(delta_2_y_inter),
    .edge_0_i(edge_0_inter),
    .edge_1_i(edge_1_inter),
    .edge_2_i(edge_2_inter),
    .color_i(color_inter),
    .tile_x_i(tile_x_inter),
    .tile_y_i(tile_y_inter),  
    .dzdx_i(dzdx_inter),
    .dzdy_i(dzdy_inter),
    .z_i(z_inter),

    .rdy_in_o(rdy_inter),
    .vld_o(vld_o),
    .color_o(color_o),
    .pixel_x_o(pixel_x_o),
    .pixel_y_o(pixel_y_o)
);



endmodule