`include "../../rtl/raster_defines.svh"

module tb_all;

// Declare test variables
logic                                   clk;
logic                                   rst_n;
logic                                   rdy_out;
logic                                   vld_in;
coord_3d_t                              v0;
coord_3d_t                              v1;
coord_3d_t                              v2;
metadata_t                              metadata;

logic                                   rdy_in;
logic                                   vld_out;
logic [`COLOR_BITS-1:0]                 color_out;
coord_2d_t                              pixel_out;

// Instantiate Design 
raster rastafarian (
    .*
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
    // Initialize signals
    rst_n       = 0;
    rdy_out     = 0;
    vld_in      = 0;
    v0.x        = 0;
    v0.y        = 0;
    v0.z        = 0;
    v1.x        = 0;
    v1.y        = 0;
    v1.z        = 0;
    v2.x        = 0;
    v2.y        = 0;
    v2.z        = 0;
    metadata.color   = 0;
    metadata.tile_x  = 0;
    metadata.tile_y  = 0;

    // Release reset after a few cycles
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Wait for DUT ready
    wait (rdy_in == 1);

    // Triangle 1: flat plane, expect zero gradients
    run_triangle_test(
        make_coord(1, 14, 512),
        make_coord(7, 2, 512),
        make_coord(12, 15, 512),
        make_meta(1, 0, 0)
    );

    // Triangle 2: skewed in x direction, expect large dzdx and small dzdy
    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(20, 1, 1024),
        make_coord(1, 2, 256),
        make_meta(2, 0, 0)
    );

    // Triangle 3: skewed in y direction, expect large dzdy and small dzdx
    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(2, 1, 256),
        make_coord(1, 20, 1024),
        make_meta(3, 0, 0)
    );

    // try to flush them all

    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(2, 1, 256),
        make_coord(1, 20, 1024),
        make_meta(4, 2, 0)
    );

    rdy_out = 1;
    @(negedge vld_out);

    $finish;
  end


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
    v0 = tv0;
    v1 = tv1;
    v2 = tv2;
    metadata = tmeta;

    // Start transaction
    @(negedge clk);
    vld_in = 1;
    @(negedge clk);
    vld_in = 0;
    @(negedge clk);
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
