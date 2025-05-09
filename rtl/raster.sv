
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


coord_3d_t                          inter_abs_pos;
coord_3d_t                          inter_deltas  [0:`NUM_VERTICES-1];
logic signed [`FX_TOTAL_BITS*2-1:0] inter_edges   [0:`NUM_VERTICES-1];
metadata_t                          inter_metadata;
logic        [`FX_TOTAL_BITS-1:0]   inter_dzdx, inter_dzdy;
logic        [`FX_TOTAL_BITS*2-1:0] inter_z_current;
logic                               inter_vld, inter_rdy;


tile_processor tile_proc (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(inter_rdy),
    .vld_in(vld_in),
    .v0(v0),
    .v1(v1),
    .v2(v2),
    .in_metadata(metadata),

    .rdy_in(rdy_in),
    .vld_out(inter_vld),
    .out_abs_pos(inter_abs_pos),
    .out_delta_0(inter_deltas[0]),
    .out_delta_1(inter_deltas[1]),
    .out_delta_2(inter_deltas[2]),
    .out_edge_0(inter_edges[0]),
    .out_edge_1(inter_edges[1]),
    .out_edge_2(inter_edges[2]),
    .out_metadata(inter_metadata),
    .out_dzdx(inter_dzdx),
    .out_dzdy(inter_dzdy),
    .out_z_current(inter_z_current)
);

pixel_processor pixel_proc (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(rdy_out),
    .vld_in(inter_vld),

    .in_abs_pos(inter_abs_pos),
    .in_delta_0(inter_deltas[0]),
    .in_delta_1(inter_deltas[1]),
    .in_delta_2(inter_deltas[2]),
    .in_edge_0(inter_edges[0]),
    .in_edge_1(inter_edges[1]),
    .in_edge_2(inter_edges[2]),
    .in_metadata(inter_metadata),
    .in_dzdx(inter_dzdx),
    .in_dzdy(inter_dzdy),
    .in_z_current(inter_z_current),

    .rdy_in(inter_rdy),
    .vld_out(vld_out),
    .color_out(color_out),
    .pixel_out(pixel_out)
);

endmodule
