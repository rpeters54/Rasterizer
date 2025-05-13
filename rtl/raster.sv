
`include "raster_defines.svh"

module raster(
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
    input        [`COLOR_BITS-1:0]      color,
    input        [`TILE_COLUMNS_BITS-1:0] tile_x,
    input        [`TILE_ROWS_BITS-1:0]    tile_y, 

    input        signed [`FX_TOTAL_BITS*2-1:0]  z_buffer_data_in, 
    output logic                                z_buffer_write_en,
    output logic signed [`FX_TOTAL_BITS*2-1:0]  z_buffer_data_out, 
    output logic signed [`TILE_AREA_BITS-1:0]   z_buffer_read_addr, 
    output logic signed [`TILE_AREA_BITS-1:0]   z_buffer_write_addr, 

    input        [`COLOR_BITS-1:0]      color_buffer_data_in,
    output logic                        color_buffer_write_en,
    output logic [`COLOR_BITS-1:0]      color_buffer_data_out,
    output logic [`TILE_AREA_BITS-1:0]  color_buffer_read_addr,
    output logic [`TILE_AREA_BITS-1:0]  color_buffer_write_addr,

    output logic                                rdy_in,
    output logic                                vld_out,
    output logic        [`COLOR_BITS-1:0]       color_out,
    output logic signed [`FX_TOTAL_BITS-1:0]    pixel_out_x,
    output logic signed [`FX_TOTAL_BITS-1:0]    pixel_out_y
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


// Tile Processor Outputs -> FIFO Inputs
logic inter_vld_0, inter_rdy_0;
logic signed [`FX_TOTAL_BITS-1:0] inter_abs_pos_0_x, inter_abs_pos_0_y;

logic signed [`FX_TOTAL_BITS-1:0] inter_deltas_0_0_x, inter_deltas_0_0_y;
logic signed [`FX_TOTAL_BITS-1:0] inter_deltas_0_1_x, inter_deltas_0_1_y;
logic signed [`FX_TOTAL_BITS-1:0] inter_deltas_0_2_x, inter_deltas_0_2_y;

logic signed [`FX_TOTAL_BITS*2-1:0] inter_edges_0_0;
logic signed [`FX_TOTAL_BITS*2-1:0] inter_edges_0_1;
logic signed [`FX_TOTAL_BITS*2-1:0] inter_edges_0_2;

logic [`COLOR_BITS-1:0]        inter_color_0;
logic [`TILE_COLUMNS_BITS-1:0] inter_tile_x_0;
logic [`TILE_ROWS_BITS-1:0]    inter_tile_y_0;

logic signed [`FX_TOTAL_BITS-1:0] inter_dzdx_0;
logic signed [`FX_TOTAL_BITS-1:0] inter_dzdy_0;
logic signed [`FX_TOTAL_BITS*2-1:0] inter_z_current_0;

// FIFO Outputs -> Pixel Processor Inputs
logic inter_vld_1, inter_rdy_1;
logic signed [`FX_TOTAL_BITS-1:0] inter_abs_pos_1_x, inter_abs_pos_1_y;

logic signed [`FX_TOTAL_BITS-1:0] inter_deltas_1_0_x, inter_deltas_1_0_y;
logic signed [`FX_TOTAL_BITS-1:0] inter_deltas_1_1_x, inter_deltas_1_1_y;
logic signed [`FX_TOTAL_BITS-1:0] inter_deltas_1_2_x, inter_deltas_1_2_y;

logic signed [`FX_TOTAL_BITS*2-1:0] inter_edges_1_0;
logic signed [`FX_TOTAL_BITS*2-1:0] inter_edges_1_1;
logic signed [`FX_TOTAL_BITS*2-1:0] inter_edges_1_2;

logic [`COLOR_BITS-1:0] inter_color_1;
logic [`TILE_COLUMNS_BITS-1:0] inter_tile_x_1;
logic [`TILE_ROWS_BITS-1:0]    inter_tile_y_1;

logic signed [`FX_TOTAL_BITS-1:0] inter_dzdx_1;
logic signed [`FX_TOTAL_BITS-1:0] inter_dzdy_1;
logic signed [`FX_TOTAL_BITS*2-1:0] inter_z_current_1;

// TILE PROCESSOR
tile_processor tile_proc (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(inter_rdy_0),
    .vld_in(vld_in),

    // Vertex inputs (split from v0, v1, v2)
    .v0_x(v0_x), .v0_y(v0_y), .v0_z(v0_z),
    .v1_x(v1_x), .v1_y(v1_y), .v1_z(v1_z),
    .v2_x(v2_x), .v2_y(v2_y), .v2_z(v2_z),

    // Metadata inputs (split)
    .in_color(color),
    .in_tile_x(tile_x),
    .in_tile_y(tile_y),

    .rdy_in(rdy_in),
    .vld_out(inter_vld_0),

    // Output position
    .out_abs_pos_x(inter_abs_pos_0_x),
    .out_abs_pos_y(inter_abs_pos_0_y),

    // Output deltas
    .out_delta_0_x(inter_deltas_0_0_x), .out_delta_0_y(inter_deltas_0_0_y),
    .out_delta_1_x(inter_deltas_0_1_x), .out_delta_1_y(inter_deltas_0_1_y),
    .out_delta_2_x(inter_deltas_0_2_x), .out_delta_2_y(inter_deltas_0_2_y),

    // Output edges
    .out_edge_0(inter_edges_0_0),
    .out_edge_1(inter_edges_0_1),
    .out_edge_2(inter_edges_0_2),

    // Output metadata
    .out_color(inter_color_0),
    .out_tile_x(inter_tile_x_0),
    .out_tile_y(inter_tile_y_0),

    .out_dzdx(inter_dzdx_0),
    .out_dzdy(inter_dzdy_0),
    .out_z_current(inter_z_current_0)
);

axi_fifo #(.WIDTH(307), .MIN_DEPTH(4)) axel_f (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(inter_rdy_1),
    .vld_in(inter_vld_0),
    .data_in({
        inter_abs_pos_0_x,
        inter_abs_pos_0_y,

        inter_deltas_0_0_x, inter_deltas_0_0_y,
        inter_deltas_0_1_x, inter_deltas_0_1_y,
        inter_deltas_0_2_x, inter_deltas_0_2_y,

        inter_edges_0_0,
        inter_edges_0_1,
        inter_edges_0_2,

        inter_color_0,
        inter_tile_x_0,
        inter_tile_y_0,

        inter_dzdx_0,
        inter_dzdy_0,
        inter_z_current_0
    }),
    .data_out({
        inter_abs_pos_1_x,
        inter_abs_pos_1_y,

        inter_deltas_1_0_x, inter_deltas_1_0_y,
        inter_deltas_1_1_x, inter_deltas_1_1_y,
        inter_deltas_1_2_x, inter_deltas_1_2_y,

        inter_edges_1_0,
        inter_edges_1_1,
        inter_edges_1_2,

        inter_color_1,
        inter_tile_x_1,
        inter_tile_y_1,

        inter_dzdx_1,
        inter_dzdy_1,
        inter_z_current_1
    }),
    .rdy_in(inter_rdy_0),
    .vld_out(inter_vld_1)
);

//openlane config.json -T openroad.staprepnr --flow Classic

pixel_processor pixel_proc (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(rdy_out),
    .vld_in(inter_vld_1),

    .in_abs_pos_x(inter_abs_pos_1_x),
    .in_abs_pos_y(inter_abs_pos_1_y),

    .in_delta_0_x(inter_deltas_1_0_x), .in_delta_0_y(inter_deltas_1_0_y),
    .in_delta_1_x(inter_deltas_1_1_x), .in_delta_1_y(inter_deltas_1_1_y),
    .in_delta_2_x(inter_deltas_1_2_x), .in_delta_2_y(inter_deltas_1_2_y),

    .in_edge_0(inter_edges_1_0),
    .in_edge_1(inter_edges_1_1),
    .in_edge_2(inter_edges_1_2),

    .in_color(inter_color_1),
    .in_tile_x(inter_tile_x_1),
    .in_tile_y(inter_tile_y_1),

    .in_dzdx(inter_dzdx_1),
    .in_dzdy(inter_dzdy_1),
    .in_z_current(inter_z_current_1),

    .color_buffer_data_in(color_buffer_data_in),
    .color_buffer_write_en(color_buffer_write_en),
    .color_buffer_data_out(color_buffer_data_out),
    .color_buffer_read_addr(color_buffer_read_addr),
    .color_buffer_write_addr(color_buffer_write_addr),

    .z_buffer_data_in(z_buffer_data_in), 
    .z_buffer_write_en(z_buffer_write_en),
    .z_buffer_data_out(z_buffer_data_out), 
    .z_buffer_read_addr(z_buffer_read_addr), 
    .z_buffer_write_addr(z_buffer_write_addr), 

    .rdy_in(inter_rdy_1),
    .vld_out(vld_out),
    .color_out(color_out),
    .pixel_out_x(pixel_out_x),
    .pixel_out_y(pixel_out_y)
);



endmodule
