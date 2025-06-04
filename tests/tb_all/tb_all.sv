`include "../../rtl/raster_defines.svh"

module tb_all;

logic                                 clk_i;
logic                                 rst_n_i;
logic                                 rdy_out_i;
logic                                 vld_i;
logic signed [`FX_TOTAL_BITS-1:0]     v0_x_i;
logic signed [`FX_TOTAL_BITS-1:0]     v0_y_i;
logic signed [`FX_TOTAL_BITS-1:0]     v0_z_i;
logic signed [`FX_TOTAL_BITS-1:0]     v1_x_i;
logic signed [`FX_TOTAL_BITS-1:0]     v1_y_i;
logic signed [`FX_TOTAL_BITS-1:0]     v1_z_i;
logic signed [`FX_TOTAL_BITS-1:0]     v2_x_i;
logic signed [`FX_TOTAL_BITS-1:0]     v2_y_i;
logic signed [`FX_TOTAL_BITS-1:0]     v2_z_i;
logic        [`COLOR_BITS-1:0]        color_i;
logic        [`TILE_COLUMNS_BITS-1:0] tile_x_i;
logic        [`TILE_ROWS_BITS-1:0]    tile_y_i;

logic                                 rdy_in_o;
logic                                 vld_o;
logic        [`COLOR_BITS-1:0]        color_o;
logic signed [`FX_TOTAL_BITS-1:0]     pixel_x_o;
logic signed [`FX_TOTAL_BITS-1:0]     pixel_y_o;

// DUT instantiation
raster ru (
    .*
);


// Sample to drive clock
localparam PERIOD = 10;
initial begin
clk_i = 0;
forever #(PERIOD/2) clk_i = ~clk_i;
end


// Necessary to create Waveform
initial begin
    // Name as needed
    $dumpfile("tb_all.vcd");
    $dumpvars(0);
end


initial begin
    repeat (20000) @(posedge clk_i);
    $error("Timeout");
    $finish();
end


task automatic reset();

    // Initialize signals
    clk_i     = 0;
    rst_n_i   = 0;
    rdy_out_i = 0;
    vld_i     = 0;
    v0_x_i    = 0;
    v0_y_i    = 0;
    v0_z_i    = 0;
    v1_x_i    = 0;
    v1_y_i    = 0;
    v1_z_i    = 0;
    v2_x_i    = 0;
    v2_y_i    = 0;
    v2_z_i    = 0;
    color_i   = 0;
    tile_x_i  = 0;
    tile_y_i  = 0;

    // Release reset after a few cycles
    repeat (2) @(posedge clk_i);
    rst_n_i = 1;

    // Wait for DUT ready
    wait (rdy_in_o == 1);

endtask


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

    run_triangle_test(
        make_coord(1, 17, 256),
        make_coord(1, 22, 1024),
        make_coord(5, 17, 256),
        make_meta(4, 0, 1)
    );

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

    run_triangle_test(
        make_coord(0, 0, 256),
        make_coord(0, 31, 256),
        make_coord(31, 0, 256),
        make_meta(3, 0, 1)
    );

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

    rdy_out_i = 1;
    wait(rdy_in_o && ru.rdy_inter && !vld_o);

    repeat (5) @(posedge clk_i);

endtask

task automatic run_triangle_test(
    input coord_3d_t tv0,
    input coord_3d_t tv1,
    input coord_3d_t tv2,
    input metadata_t tmeta
);


    $display("-----------------Testing Points-----------------");
    $display("v0: x= %0d, y=%0d, z=%0d", tv0.x >>> 4, tv0.y >>> 4, tv0.z >>> 4);
    $display("v1: x= %0d, y=%0d, z=%0d", tv1.x >>> 4, tv1.y >>> 4, tv1.z >>> 4);
    $display("v2: x= %0d, y=%0d, z=%0d", tv2.x >>> 4, tv2.y >>> 4, tv2.z >>> 4);
    $display("metadata: color= %0d, tile_x=%0d, tile_y=%0d", tmeta.color, tmeta.tile_x, tmeta.tile_y);
    $display("------------------------------------------------");

    // Wait until DUT is ready
    wait(rdy_in_o == 1);

    // Apply inputs
    v0_x_i = tv0.x; v0_y_i = tv0.y; v0_z_i = tv0.z;
    v1_x_i = tv1.x; v1_y_i = tv1.y; v1_z_i = tv1.z;
    v2_x_i = tv2.x; v2_y_i = tv2.y; v2_z_i = tv2.z;
    color_i = tmeta.color; tile_x_i = tmeta.tile_x; tile_y_i = tmeta.tile_y;

    // Start transaction
    @(negedge clk_i);
    vld_i = 1;
    rdy_out_i = 1;
    @(negedge clk_i);
    vld_i = 0;
    @(negedge clk_i);

    repeat (5) @(posedge clk_i);

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

endmodule
