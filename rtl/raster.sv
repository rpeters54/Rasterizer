
`include "raster_defines.svh"

module raster(
    input             clk,
    input             rst_n,
    input             rdy_out,
    input             vld_in,
    input  coord_3d_t v0,
    input  coord_3d_t v1,
    input  coord_3d_t v2,
    input  metadata_t metadata,

    output logic        rdy_in,
    output logic        vld_out,
    output logic [`COLOR_BITS-1:0]  color_out,
    output coord_2d_t   pixel_out
);


coord_3d_t                          inter_abs_pos_0;
coord_3d_t                          inter_deltas_0  [0:`NUM_VERTICES-1];
logic signed [`FX_TOTAL_BITS*2-1:0] inter_edges_0   [0:`NUM_VERTICES-1];
metadata_t                          inter_metadata_0;
logic        [`FX_TOTAL_BITS-1:0]   inter_dzdx_0, inter_dzdy_0;
logic        [`FX_TOTAL_BITS*2-1:0] inter_z_current_0;
logic                               inter_vld_0, inter_rdy_0;

coord_3d_t                          inter_abs_pos_1;
coord_3d_t                          inter_deltas_1  [0:`NUM_VERTICES-1];
logic signed [`FX_TOTAL_BITS*2-1:0] inter_edges_1   [0:`NUM_VERTICES-1];
metadata_t                          inter_metadata_1;
logic        [`FX_TOTAL_BITS-1:0]   inter_dzdx_1, inter_dzdy_1;
logic        [`FX_TOTAL_BITS*2-1:0] inter_z_current_1;
logic                               inter_vld_1, inter_rdy_1;


tile_processor tile_proc (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(inter_rdy_0),
    .vld_in(vld_in),
    .v0(v0),
    .v1(v1),
    .v2(v2),
    .in_metadata(metadata),

    .rdy_in(rdy_in),
    .vld_out(inter_vld_0),
    .out_abs_pos(inter_abs_pos_0),
    .out_delta_0(inter_deltas_0[0]),
    .out_delta_1(inter_deltas_0[1]),
    .out_delta_2(inter_deltas_0[2]),
    .out_edge_0(inter_edges_0[0]),
    .out_edge_1(inter_edges_0[1]),
    .out_edge_2(inter_edges_0[2]),
    .out_metadata(inter_metadata_0),
    .out_dzdx(inter_dzdx_0),
    .out_dzdy(inter_dzdy_0),
    .out_z_current(inter_z_current_0)
);



axi_fifo #( .WIDTH(371), .DEPTH(4) ) axel_f (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(inter_rdy_1),
    .vld_in(inter_vld_0),
    .data_in({
        inter_abs_pos_0,
        inter_deltas_0[0],
        inter_deltas_0[1],
        inter_deltas_0[2],
        inter_edges_0[0],
        inter_edges_0[1],
        inter_edges_0[2],
        inter_metadata_0,
        inter_dzdx_0,
        inter_dzdy_0,
        inter_z_current_0
    }),
    .data_out({
        inter_abs_pos_1,
        inter_deltas_1[0],
        inter_deltas_1[1],
        inter_deltas_1[2],
        inter_edges_1[0],
        inter_edges_1[1],
        inter_edges_1[2],
        inter_metadata_1,
        inter_dzdx_1,
        inter_dzdy_1,
        inter_z_current_1
    }),
    .rdy_in(inter_rdy_0),
    .vld_out(inter_vld_1)
);

pixel_processor pixel_proc (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(rdy_out),
    .vld_in(inter_vld_1),

    .in_abs_pos(inter_abs_pos_1),
    .in_delta_0(inter_deltas_1[0]),
    .in_delta_1(inter_deltas_1[1]),
    .in_delta_2(inter_deltas_1[2]),
    .in_edge_0(inter_edges_1[0]),
    .in_edge_1(inter_edges_1[1]),
    .in_edge_2(inter_edges_1[2]),
    .in_metadata(inter_metadata_1),
    .in_dzdx(inter_dzdx_1),
    .in_dzdy(inter_dzdy_1),
    .in_z_current(inter_z_current_1),

    .rdy_in(inter_rdy_1),
    .vld_out(vld_out),
    .color_out(color_out),
    .pixel_out(pixel_out)
);

endmodule
