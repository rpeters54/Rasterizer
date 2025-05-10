`include "../../rtl/raster_defines.svh"
`include "../../rtl/struct_defines.svh"


module tb_all;

// Clock and Reset
logic clk;
logic rst_n;

// Handshake signals
logic vld_in;
logic rdy_out;
logic rdy_in;
logic vld_out;

// Vertex inputs
logic signed [`FX_TOTAL_BITS-1:0] v0_x, v0_y, v0_z;
logic signed [`FX_TOTAL_BITS-1:0] v1_x, v1_y, v1_z;
logic signed [`FX_TOTAL_BITS-1:0] v2_x, v2_y, v2_z;

// Tile info and color
logic [`COLOR_BITS-1:0] color;
logic [`TILE_COLUMNS_BITS-1:0] tile_x;
logic [`TILE_ROWS_BITS-1:0] tile_y;

logic signed [`FX_TOTAL_BITS*2-1:0] out_edge_0, out_edge_1, out_edge_2;
logic [`COLOR_BITS-1:0] color_out;
logic signed [`FX_TOTAL_BITS-1:0] pixel_out_x, pixel_out_y;

// DUT instantiation
raster rastafarian (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(rdy_out),
    .vld_in(vld_in),
    .v0_x(v0_x),
    .v0_y(v0_y),
    .v0_z(v0_z),
    .v1_x(v1_x),
    .v1_y(v1_y),
    .v1_z(v1_z),
    .v2_x(v2_x),
    .v2_y(v2_y),
    .v2_z(v2_z),
    .color(color),
    .tile_x(tile_x),
    .tile_y(tile_y),

    .rdy_in(rdy_in),
    .vld_out(vld_out),
    .color_out(color_out),
    .pixel_out_x(pixel_out_x),
    .pixel_out_y(pixel_out_y)
);

// Sample to drive clock
localparam PERIOD = 10;
initial begin
clk = 0;
forever #(PERIOD/2) clk = ~clk;
end

// Necessary to create Waveform
initial begin
    // Name as needed
    $dumpfile("tb_all.vcd");
    $dumpvars(0);
end

// Reset and stimulus
initial begin

    reset();
    test_simple_triangle();
    reset();
    test_multi_tile();
    reset();
    test_nested();
    reset();
    test_nested_backwards();
    reset();
    cross_tile_triangle();
    reset();
    star_of_david();
    reset();

    $finish;
end

// test visualizing a single triangle
task automatic test_simple_triangle();

    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(1, 5, 256),
        make_coord(5, 1, 256),
        make_meta(4, 0, 0)
    );

    flush(5,5);

endtask


// test triangles over multiple tiles
task automatic test_multi_tile();

    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(1, 5, 256),
        make_coord(5, 1, 256),
        make_meta(4, 0, 0)
    );

    run_triangle_test(
        make_coord(17, 1, 256),
        make_coord(17, 5, 1024),
        make_coord(22, 1, 256),
        make_meta(4, 1, 0)
    );

    rdy_out = 1;
    @(negedge vld_out);

    run_triangle_test(
        make_coord(1, 17, 256),
        make_coord(1, 22, 1024),
        make_coord(5, 17, 256),
        make_meta(4, 0, 1)
    );

    rdy_out = 1;
    @(negedge vld_out);

    flush(5,5);

endtask


// test nested triangles
task automatic test_nested();

    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(1, 15, 256),
        make_coord(15, 1, 256),
        make_meta(4, 0, 0)
    );

    run_triangle_test(
        make_coord(2, 2, 128),
        make_coord(2, 8, 128),
        make_coord(8, 2, 128),
        make_meta(3, 0, 0)
    );

    flush(5,5);

endtask

// test nested triangles, make sure doesnt overwrite
task automatic test_nested_backwards();

    run_triangle_test(
        make_coord(2, 2, 128),
        make_coord(2, 8, 128),
        make_coord(8, 2, 128),
        make_meta(3, 0, 0)
    );

    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(1, 15, 256),
        make_coord(15, 1, 256),
        make_meta(4, 0, 0)
    );

    flush(5,5);

endtask

// test nested triangles, make sure doesnt overwrite
task automatic cross_tile_triangle();

    run_triangle_test(
        make_coord(0, 0, 256),
        make_coord(0, 31, 256),
        make_coord(31, 0, 256),
        make_meta(1, 0, 0)
    );

    run_triangle_test(
        make_coord(0, 0, 256),
        make_coord(0, 31, 256),
        make_coord(31, 0, 256),
        make_meta(2, 1, 0)
    );

    rdy_out = 1;
    @(negedge vld_out);

    run_triangle_test(
        make_coord(0, 0, 256),
        make_coord(0, 31, 256),
        make_coord(31, 0, 256),
        make_meta(3, 0, 1)
    );

    rdy_out = 1;
    @(negedge vld_out);

    run_triangle_test(
        make_coord(0, 0, 256),
        make_coord(0, 31, 256),
        make_coord(31, 0, 256),
        make_meta(4, 1, 1)
    );

    flush(5,5);

endtask


// test two interlaced triangles
task automatic star_of_david();

    run_triangle_test(
        make_coord(0, 0, 256),
        make_coord(0, 15, 256),
        make_coord(15, 7, 0),
        make_meta(1, 0, 0)
    );

    run_triangle_test(
        make_coord(15, 0, 256),
        make_coord(0, 7, 0),
        make_coord(15, 15, 256),
        make_meta(2, 0, 0)
    );

    flush(5,5);

endtask


// General-purpose task for driving a triangle and checking results
task automatic run_triangle_test(
    input coord_3d_t tv0,
    input coord_3d_t tv1,
    input coord_3d_t tv2,
    input metadata_t tmeta
);
    // Wait until DUT is ready
    wait(rdy_in == 1);

    // Apply inputs
    v0_x = tv0.x; v0_y = tv0.y; v0_z = tv0.z;
    v1_x = tv1.x; v1_y = tv1.y; v1_z = tv1.z;
    v2_x = tv2.x; v2_y = tv2.y; v2_z = tv2.z;
    color = tmeta.color; tile_x = tmeta.tile_x; tile_y = tmeta.tile_y;

    // Start transaction
    @(negedge clk);
    vld_in = 1;
    @(negedge clk);
    vld_in = 0;
    @(negedge clk);
endtask

task automatic flush(
    int i,
    int j
    ); 

    run_triangle_test(
        make_coord(0, 0, 128),
        make_coord(0, 1, 128),
        make_coord(1, 0, 128),
        make_meta(0, i[5:0], j[4:0])
    );

    rdy_out = 1;
    @(negedge vld_out);

endtask


task automatic reset();

    // Initialize signals
    rst_n       = 0;
    rdy_out     = 0;
    vld_in      = 0;
    v0_x        = 0;
    v0_y        = 0;
    v0_z        = 0;
    v1_x        = 0;
    v1_y        = 0;
    v1_z        = 0;
    v2_x        = 0;
    v2_y        = 0;
    v2_z        = 0;
    color   = 0;
    tile_x  = 0;
    tile_y  = 0;

    // Release reset after a few cycles
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Wait for DUT ready
    wait (rdy_in == 1);

endtask


// cleaner way to make a coord
function coord_3d_t make_coord(
    input signed [`FX_TOTAL_BITS-1:0] x_in,
    input signed [`FX_TOTAL_BITS-1:0] y_in,
    input signed [`FX_TOTAL_BITS-1:0] z_in
);

coord_3d_t point;
point.x = (x_in<<`FX_FRAC_BITS);
point.y = (y_in<<`FX_FRAC_BITS);
point.z = (z_in<<`FX_FRAC_BITS);

return point;

endfunction


// cleaner way to make a metadata tuple
function metadata_t make_meta(
    input signed [`COLOR_BITS-1:0]        colors_in,
    input signed [`TILE_COLUMNS_BITS-1:0] tile_x_in,
    input signed [`TILE_ROWS_BITS-1:0]    tile_y_in
);

metadata_t meta;
meta.color  = colors_in;
meta.tile_x = tile_x_in;
meta.tile_y = tile_y_in;

return meta;

endfunction

// typedef struct packed {
//     int x;
//     int y;
//     int z;
// } pixel_coords;

// function coord_3d_t simulate_tile_render(
//     input pixel_coords triangle [0:2],
//     input metadata_t metadata,

//     output real  z_buffer     [0:`TILE_AREA-1],
//     output int   color_buffer [0:`TILE_AREA-1]
// );

// pixel_coords cur_abs_pos;
// int deltas[0:`NUM_VERTICES-1];
// int edge_functions[0:`NUM_VERTICES-1];

// real coeff_A, coeff_B, coeff_C;
// real dzdx,dzdy, cur_z;

// cur_abs_pos.x = metadata.tile_x * `TILE_WIDTH;
// cur_abs_pos.y = metadata.tile_y * `TILE_WIDTH;

// for (int i = 0; i < `NUM_VERTICES; i++) begin
//     deltas[i].x = triangle[(i+1)%`NUM_VERTICES].x - triangle[i].x;
//     deltas[i].y = triangle[(i+1)%`NUM_VERTICES].y - triangle[i].y;
//     deltas[i].z = triangle[(i+1)%`NUM_VERTICES].z - triangle[i].z;
// end

// for (int i = 0; i < `NUM_VERTICES; i++) begin
//     edge_functions[i] = (cur_abs_pos.x - triangle[i].x) * deltas[i].y - (cur_abs_pos.y - triangle[i].y) * deltas[i].x;
// end

// coeff_A = deltas[0].z * deltas[2].y - deltas[0].y * deltas[2].z;
// coeff_B = deltas[0].x * deltas[2].z - deltas[0].z * deltas[2].x;
// coeff_C = deltas[0].y * deltas[2].x - deltas[0].x * deltas[2].y;

// dzdx = -coeff_A/coeff_C;
// dzdy = -coeff_B/coeff_C;
// cur_z = triangle[0].z - (triangle[0].x - cur_abs_pos.x) * dzdx - (triangle[0].y - cur_abs_pos.y) * dzdy;

// for (int i = 0; i < `TILE_AREA; i++) begin
//     if (edge_functions[0] >= 0 && edge_functions[1] >= 0 && edge_functions[2] >= 0 && cuz_z < z_buffer[i]) begin
//         z_buffer[i] = cuz_z;
//         color_buffer[i] = meta.color;
//     end

//     if (i % (`TILE_WIDTH-1) == 0 && i > 0) begin
//         cur_abs_pos.x = cur_abs_pos.x - (`TILE_WIDTH-1);
//         cur_abs_pos.y = cur_abs_pos.y + 1;

//         cuz_z = cuz_z - (`TILE_WIDTH-1) * dzdx + dzdy;

//         for (int i = 0; i < `NUM_VERTICES; i++) begin
//             edges[i] = edges[i] - deltas[i].y * 15 - deltas[i].x;
//         end
//     end else begin
//         cur_abs_pos.x = cur_abs_pos.x + 1;

//         cuz_z = cuz_z + dzdx;

//         for (int i = 0; i < `NUM_VERTICES; i++) begin
//             edges[i] = edges[i] + deltas[i].y;
//         end
//     end
// end


// endfunction


endmodule
