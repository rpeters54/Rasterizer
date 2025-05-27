
module raster (
    input                                                     tile_clk_i,
    input                                                     pixel_clk_i,
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
    output logic        [`COLOR_BITS-1:0]                     color_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  pixel_x_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  pixel_y_o
);

// 315 bits wide
logic                                              rdy_in_inter    [0:1];
logic                                              tile_to_fifo_valid;
logic                                              fifo_to_pixel_valid;
logic                                              fifo_to_tile_received;
logic                                              pixel_to_fifo_ready;
logic                                              fifo_full, fifo_empty;


logic signed [`FX_TOTAL_BITS-1:0]                  abs_pos_x_inter [0:1];
logic signed [`FX_TOTAL_BITS-1:0]                  abs_pos_y_inter [0:1];
logic signed [`FX_TOTAL_BITS-1:0]                  delta_0_x_inter [0:1];
logic signed [`FX_TOTAL_BITS-1:0]                  delta_0_y_inter [0:1];
logic signed [`FX_TOTAL_BITS-1:0]                  delta_1_x_inter [0:1];
logic signed [`FX_TOTAL_BITS-1:0]                  delta_1_y_inter [0:1];
logic signed [`FX_TOTAL_BITS-1:0]                  delta_2_x_inter [0:1];
logic signed [`FX_TOTAL_BITS-1:0]                  delta_2_y_inter [0:1];
logic signed [`FX_TOTAL_BITS*2-1:0]                edge_0_inter    [0:1];
logic signed [`FX_TOTAL_BITS*2-1:0]                edge_1_inter    [0:1];
logic signed [`FX_TOTAL_BITS*2-1:0]                edge_2_inter    [0:1];
logic        [`COLOR_BITS-1:0]                     color_inter     [0:1];
logic        [`TILE_COLUMNS_BITS-1:0]              tile_x_inter    [0:1];
logic        [`TILE_ROWS_BITS-1:0]                 tile_y_inter    [0:1];
logic signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] dzdx_inter      [0:1];
logic signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] dzdy_inter      [0:1];
logic signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] z_current_inter [0:1];

assign fifo_to_tile_received = tile_to_fifo_valid && !fifo_full;
assign fifo_to_pixel_valid   = !fifo_empty;

tile_processor tpu (
    .clk_i(tile_clk_i),
    .rst_n_i(rst_n_i),
    .rdy_out_i(fifo_to_tile_received),
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
    .vld_o(tile_to_fifo_valid),
    .abs_pos_x_o(abs_pos_x_inter[0]),
    .abs_pos_y_o(abs_pos_y_inter[0]),
    .delta_0_x_o(delta_0_x_inter[0]),
    .delta_0_y_o(delta_0_y_inter[0]),
    .delta_1_x_o(delta_1_x_inter[0]),
    .delta_1_y_o(delta_1_y_inter[0]),
    .delta_2_x_o(delta_2_x_inter[0]),
    .delta_2_y_o(delta_2_y_inter[0]),
    .edge_0_o(edge_0_inter[0]),
    .edge_1_o(edge_1_inter[0]),
    .edge_2_o(edge_2_inter[0]),
    .color_o(color_inter[0]),
    .tile_x_o(tile_x_inter[0]),
    .tile_y_o(tile_y_inter[0]),
    .dzdx_o(dzdx_inter[0]),
    .dzdy_o(dzdy_inter[0]),
    .z_current_o(z_current_inter[0])
);

async_fifo #(.DATA_SIZE(32), .ADDRESS_SIZE(2)) fifo (
    .wclk_i(tile_clk_i),
    .wrst_n_i(rst_n_i),
    .wr_i(tile_to_fifo_valid), 
    .wdata_i({
        abs_pos_x_inter[0],
        abs_pos_y_inter[0],
        delta_0_x_inter[0],
        delta_0_y_inter[0],
        delta_1_x_inter[0],
        delta_1_y_inter[0],
        delta_2_x_inter[0],
        delta_2_y_inter[0],
        edge_0_inter[0],
        edge_1_inter[0],
        edge_2_inter[0],
        color_inter[0],
        tile_x_inter[0],
        tile_y_inter[0],
        dzdx_inter[0],
        dzdy_inter[0],
        z_current_inter[0]        
    }),
    .wfull_o(fifo_full),

    .rclk_i(pixel_clk_i),
    .rrst_n_i(rst_n_i),
    .rd_i(pixel_to_fifo_ready), 
    .rdata_o({
        abs_pos_x_inter[1],
        abs_pos_y_inter[1],
        delta_0_x_inter[1],
        delta_0_y_inter[1],
        delta_1_x_inter[1],
        delta_1_y_inter[1],
        delta_2_x_inter[1],
        delta_2_y_inter[1],
        edge_0_inter[1],
        edge_1_inter[1],
        edge_2_inter[1],
        color_inter[1],
        tile_x_inter[1],
        tile_y_inter[1],
        dzdx_inter[1],
        dzdy_inter[1],
        z_current_inter[1]
    })
    .rempty_o(fifo_empty)
);

pixel_processor ppu (
    .clk_i(pixel_clk_i),
    .rst_n_i(rst_n_i),
    .rdy_out_i(rdy_out_i),
    .vld_i(fifo_to_pixel_valid),
    .abs_pos_x_i(abs_pos_x_inter[1]),
    .abs_pos_y_i(abs_pos_y_inter[1]),
    .delta_0_x_i(delta_0_x_inter[1]),
    .delta_0_y_i(delta_0_y_inter[1]),
    .delta_1_x_i(delta_1_x_inter[1]),
    .delta_1_y_i(delta_1_y_inter[1]),
    .delta_2_x_i(delta_2_x_inter[1]),
    .delta_2_y_i(delta_2_y_inter[1]),
    .edge_0_i(edge_0_inter[1]),
    .edge_1_i(edge_1_inter[1]),
    .edge_2_i(edge_2_inter[1]),
    .color_i(color_inter[1]),
    .tile_x_i(tile_x_inter[1]),
    .tile_y_i(tile_y_inter[1]),  
    .dzdx_i(dzdx_inter[1]),
    .dzdy_i(dzdy_inter[1]),
    .z_current_i(z_current_inter[1]),

    .rdy_in_o(pixel_to_fifo_ready),
    .vld_o(vld_o),
    .color_o(color_o),
    .pixel_x_o(pixel_x_o),
    .pixel_y_o(pixel_y_o)
);



endmodule