`timescale 1ns/1ps
`include "raster_defines.svh"

module tb_pixel;

logic                                 clk_i;
logic                                 rst_n_i;
logic                                 rdy_out_i;
logic                                 vld_i;
logic signed [`FX_TOTAL_BITS-1:0]     abs_pos_x_i;
logic signed [`FX_TOTAL_BITS-1:0]     abs_pos_y_i;
logic signed [`FX_TOTAL_BITS-1:0]     delta_0_x_i;
logic signed [`FX_TOTAL_BITS-1:0]     delta_0_y_i;
logic signed [`FX_TOTAL_BITS-1:0]     delta_1_x_i;
logic signed [`FX_TOTAL_BITS-1:0]     delta_1_y_i;
logic signed [`FX_TOTAL_BITS-1:0]     delta_2_x_i;
logic signed [`FX_TOTAL_BITS-1:0]     delta_2_y_i;
logic signed [`FX_TOTAL_BITS*2-1:0]   edge_0_i;
logic signed [`FX_TOTAL_BITS*2-1:0]   edge_1_i;
logic signed [`FX_TOTAL_BITS*2-1:0]   edge_2_i;
logic        [`COLOR_BITS-1:0]        color_i;
logic        [`TILE_COLUMNS_BITS-1:0] tile_x_i;
logic        [`TILE_ROWS_BITS-1:0]    tile_y_i;  
logic signed [`FX_TOTAL_BITS*2-1:0]   dzdx_i;
logic signed [`FX_TOTAL_BITS*2-1:0]   dzdy_i;
logic signed [`FX_TOTAL_BITS*2-1:0]   z_i;

logic                                 rdy_in_o;
logic                                 vld_o;
logic        [`COLOR_BITS-1:0]        color_o;
logic signed [`FX_TOTAL_BITS-1:0]     pixel_x_o;
logic signed [`FX_TOTAL_BITS-1:0]     pixel_y_o;


pixel_processor ppu (
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
    $dumpfile("tb_pixel.vcd");
    $dumpvars(0);
end

initial begin
    repeat (20000) @(posedge clk_i);
    $error("Timeout");
    $finish();
end

task automatic reset();
    // Initialize signals
    rst_n_i     = 0;
    rdy_out_i   = 0;
    vld_i       = 0;
    abs_pos_x_i = 0; 
    abs_pos_y_i = 0;
    delta_0_x_i = 0;
    delta_0_y_i = 0;
    delta_1_x_i = 0;
    delta_1_y_i = 0;
    delta_2_x_i = 0;
    delta_2_y_i = 0;
    edge_0_i    = 0;
    edge_1_i    = 0;
    edge_2_i    = 0;
    color_i     = 0;
    tile_x_i    = 0;
    tile_y_i    = 0;
    dzdx_i      = 0;
    dzdy_i      = 0;
    z_i         = 0;

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

    // for (int i = 0; i < 5; i++) begin
    //     logic [`FX_TOTAL_BITS-1:0]  v1_x, v1_y, v1_z,
    //                                 v2_x, v2_y, v2_z,
    //                                 v3_x, v3_y, v3_z;
    //     logic [`COLOR_BITS-1:0] color;
    //     logic [`TILE_COLUMNS_BITS-1:0] tile_col;
    //     logic [`TILE_ROWS_BITS-1:0] tile_row;
        
    //     // Variables for bounding box calculation
    //     logic [`FX_TOTAL_BITS-1:0] min_x, max_x, min_y, max_y;
    //     logic [`TILE_COLUMNS_BITS-1:0] min_tile_col, max_tile_col;
    //     logic [`TILE_ROWS_BITS-1:0] min_tile_row, max_tile_row;
        
    //     // Tile size constants for 16x16 pixel tiles
    //     localparam TILE_WIDTH_FX = 16;   // 16 pixel tile width
    //     localparam TILE_HEIGHT_FX = 16;  // 16 pixel tile height

    //     // Create temporary variables for each vertex
    //     // Use explicit casting to avoid width truncation warnings
    //     // Vertex 1
    //     v1_x = `FX_TOTAL_BITS'($urandom_range((640 << `FX_FRAC_BITS) - 1));
    //     v1_y = `FX_TOTAL_BITS'($urandom_range((480 << `FX_FRAC_BITS) - 1));
    //     v1_z = `FX_TOTAL_BITS'($urandom_range((1024 << `FX_FRAC_BITS) - 1));
        
    //     // Vertex 2
    //     v2_x = `FX_TOTAL_BITS'($urandom_range((640 << `FX_FRAC_BITS) - 1));
    //     v2_y = `FX_TOTAL_BITS'($urandom_range((480 << `FX_FRAC_BITS) - 1));
    //     v2_z = `FX_TOTAL_BITS'($urandom_range((1024 << `FX_FRAC_BITS) - 1));
        
    //     // Vertex 3
    //     v3_x = `FX_TOTAL_BITS'($urandom_range((640 << `FX_FRAC_BITS) - 1));
    //     v3_y = `FX_TOTAL_BITS'($urandom_range((480 << `FX_FRAC_BITS) - 1));
    //     v3_z = `FX_TOTAL_BITS'($urandom_range((1024 << `FX_FRAC_BITS) - 1));
        
    //     // Calculate bounding box of the triangle
    //     min_x = (v1_x < v2_x) ? ((v1_x < v3_x) ? v1_x : v3_x) : ((v2_x < v3_x) ? v2_x : v3_x);
    //     max_x = (v1_x > v2_x) ? ((v1_x > v3_x) ? v1_x : v3_x) : ((v2_x > v3_x) ? v2_x : v3_x);
    //     min_y = (v1_y < v2_y) ? ((v1_y < v3_y) ? v1_y : v3_y) : ((v2_y < v3_y) ? v2_y : v3_y);
    //     max_y = (v1_y > v2_y) ? ((v1_y > v3_y) ? v1_y : v3_y) : ((v2_y > v3_y) ? v2_y : v3_y);
        
    //     // Convert bounding box to tile coordinates
    //     min_tile_col = `TILE_COLUMNS_BITS'((min_x[`FX_TOTAL_BITS-1:`FX_FRAC_BITS]) / TILE_WIDTH_FX);
    //     max_tile_col = `TILE_COLUMNS_BITS'((max_x[`FX_TOTAL_BITS-1:`FX_FRAC_BITS]) / TILE_WIDTH_FX);
    //     min_tile_row = `TILE_ROWS_BITS'((min_y[`FX_TOTAL_BITS-1:`FX_FRAC_BITS]) / TILE_HEIGHT_FX);
    //     max_tile_row = `TILE_ROWS_BITS'((max_y[`FX_TOTAL_BITS-1:`FX_FRAC_BITS]) / TILE_HEIGHT_FX);
        
    //     // Ensure we don't exceed tile array bounds
    //     max_tile_col = (max_tile_col >= `TILE_COLUMNS_BITS'(40)) ? `TILE_COLUMNS_BITS'(39) : max_tile_col;
    //     max_tile_row = (max_tile_row >= `TILE_ROWS_BITS'(30)) ? `TILE_ROWS_BITS'(29) : max_tile_row;
        
    //     // Select a random tile within the triangle's bounding box
    //     if (min_tile_col <= max_tile_col && min_tile_row <= max_tile_row) begin
    //         tile_col = `TILE_COLUMNS_BITS'($urandom_range(max_tile_col, min_tile_col));
    //         tile_row = `TILE_ROWS_BITS'($urandom_range(max_tile_row, min_tile_row));
    //     end else begin
    //         // Fallback to completely random if bounding box calculation fails
    //         tile_col = `TILE_COLUMNS_BITS'($urandom_range((1 << `TILE_COLUMNS_BITS) - 1));
    //         tile_row = `TILE_ROWS_BITS'($urandom_range((1 << `TILE_ROWS_BITS) - 1));
    //     end
        
    //     // Color generation remains the same
    //     color = `COLOR_BITS'($urandom_range((1 << `COLOR_BITS) - 1));
        
    //     $display("Test %0d: Triangle bbox: (%0d,%0d) to (%0d,%0d), Selected tile: (%0d,%0d)", 
    //              i, min_x >> `FX_FRAC_BITS, min_y >> `FX_FRAC_BITS, 
    //              max_x >> `FX_FRAC_BITS, max_y >> `FX_FRAC_BITS, tile_col, tile_row);
        
    //     run_triangle_test(
    //         '{v1_x, v1_y, v1_z},
    //         '{v2_x, v2_y, v2_z},
    //         '{v3_x, v3_y, v3_z},
    //         '{color, tile_col, tile_row}
    //     );
    // end
    $finish();
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

endtask

task automatic run_triangle_test(
    input coord_3d_t tv0,
    input coord_3d_t tv1,
    input coord_3d_t tv2,
    input metadata_t tmeta
);
    coord_3d_t temp_delta;
    coord_3d_t exp_abs_pos;
    coord_3d_t exp_deltas [0:2];
    logic signed [`FX_TOTAL_BITS*2-1:0] exp_edges [0:2];
    metadata_t exp_metadata;
    logic signed [`FX_TOTAL_BITS*2-1:0] exp_dzdx;
    logic signed [`FX_TOTAL_BITS*2-1:0] exp_dzdy;
    logic signed [`FX_TOTAL_BITS*2-1:0] exp_z_current;
    logic signed [`FX_TOTAL_BITS*2-1:0] exp_coeff_A, exp_coeff_B, exp_coeff_C;

    $display("-----------------Testing Points-----------------");
    $display("v0: x= %0d, y=%0d, z=%0d", tv0.x >>> 4, tv0.y >>> 4, tv0.z >>> 4);
    $display("v1: x= %0d, y=%0d, z=%0d", tv1.x >>> 4, tv1.y >>> 4, tv1.z >>> 4);
    $display("v2: x= %0d, y=%0d, z=%0d", tv2.x >>> 4, tv2.y >>> 4, tv2.z >>> 4);
    $display("metadata: color= %0d, tile_x=%0d, tile_y=%0d", tmeta.color, tmeta.tile_x, tmeta.tile_y);
    $display("------------------------------------------------");

    // Compute expected outputs
    simulate_expected_output(tv0, tv1, tv2, tmeta,
                 exp_abs_pos, exp_deltas[0], exp_deltas[1], exp_deltas[2],
                 exp_edges[0], exp_edges[1], exp_edges[2],
                 exp_metadata, exp_dzdx, exp_dzdy, exp_z_current,
                 exp_coeff_A, exp_coeff_B, exp_coeff_C);

    // Wait until DUT is ready
    wait(rdy_in_o == 1);

    abs_pos_x_i = exp_abs_pos.x; 
    abs_pos_y_i = exp_abs_pos.y;
    delta_0_x_i = exp_deltas[0].x;
    delta_0_y_i = exp_deltas[0].y;
    delta_1_x_i = exp_deltas[1].x;
    delta_1_y_i = exp_deltas[1].y;
    delta_2_x_i = exp_deltas[2].x;
    delta_2_y_i = exp_deltas[2].y;
    edge_0_i    = exp_edges[0];
    edge_1_i    = exp_edges[1];
    edge_2_i    = exp_edges[2];
    color_i     = exp_metadata.color;
    tile_x_i    = exp_metadata.tile_x;
    tile_y_i    = exp_metadata.tile_y;
    dzdx_i      = exp_dzdx;
    dzdy_i      = exp_dzdy;
    z_i         = exp_z_current;

    // Start transaction
    @(negedge clk_i);
    vld_i = 1;
    rdy_out_i = 1;
    @(negedge clk_i);
    vld_i = 0;
    @(negedge clk_i);

    @(posedge rdy_in_o);

    if (vld_o) begin
        @(negedge vld_o);
    end 
    rdy_out_i = 0;
    repeat (5) @(posedge clk_i);

endtask


typedef struct packed {
    longint x;
    longint y;
    longint z;
} long_coord_3d_t;

// Compute all expected outputs for a triangle
task automatic simulate_expected_output(
    input coord_3d_t gv0,
    input coord_3d_t gv1,
    input coord_3d_t gv2,
    input metadata_t gmeta,
    output coord_3d_t exp_abs_pos,
    output coord_3d_t exp_delta_0,
    output coord_3d_t exp_delta_1,
    output coord_3d_t exp_delta_2,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_edge_0,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_edge_1,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_edge_2,
    output metadata_t exp_metadata,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_dzdx,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_dzdy,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_z_current,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_coeff_A,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_coeff_B,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_coeff_C
);

    long_coord_3d_t v[0:2];
    long_coord_3d_t rotated_v[0:2];
    longint edges [0:2];
    long_coord_3d_t deltas [0:2];
    long_coord_3d_t abs_pos;
    longint coeff_A, coeff_B, coeff_C;
    longint div_result_dzdx, div_result_dzdy;

    long_coord_3d_t temp_delta0, temp_delta1, temp_delta2;

    long_coord_3d_t v0, v1, v2;
    v0 = coord3d_to_long_coords(gv0);
    v1 = coord3d_to_long_coords(gv1);
    v2 = coord3d_to_long_coords(gv2);

    // Set up vertex arrays for easier calculations
    v =         '{v0, v1, v2};
    rotated_v = '{v1, v2, v0};

    // Step 1: Calculate absolute position (tile to pixel coordinates)
    exp_abs_pos.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, gmeta.tile_x, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    exp_abs_pos.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, gmeta.tile_y, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    exp_abs_pos.z = '0;

    abs_pos.x = {{`FX_TOTAL_BITS*3{1'b0}}, exp_abs_pos.x};
    abs_pos.y = {{`FX_TOTAL_BITS*3{1'b0}}, exp_abs_pos.y};
    abs_pos.z = {{`FX_TOTAL_BITS*3{1'b0}}, exp_abs_pos.z};

    // Step 2: Compute deltas between vertices (in clockwise order)
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        long_coord_3d_t temp_delta, temp_v, temp_rv;
        temp_v = v[i];
        temp_rv = rotated_v[i];

        temp_delta.x = temp_rv.x - temp_v.x;
        temp_delta.y = temp_rv.y - temp_v.y;
        temp_delta.z = temp_rv.z - temp_v.z;
        deltas[i] = temp_delta;
    end
    
    temp_delta0 = deltas[0];
    temp_delta1 = deltas[1];
    temp_delta2 = deltas[2];

    exp_delta_0.x = temp_delta0.x[`FX_TOTAL_BITS-1:0];
    exp_delta_0.y = temp_delta0.y[`FX_TOTAL_BITS-1:0];
    exp_delta_0.z = temp_delta0.z[`FX_TOTAL_BITS-1:0];
    exp_delta_1.x = temp_delta1.x[`FX_TOTAL_BITS-1:0];
    exp_delta_1.y = temp_delta1.y[`FX_TOTAL_BITS-1:0];
    exp_delta_1.z = temp_delta1.z[`FX_TOTAL_BITS-1:0];
    exp_delta_2.x = temp_delta2.x[`FX_TOTAL_BITS-1:0];
    exp_delta_2.y = temp_delta2.y[`FX_TOTAL_BITS-1:0];
    exp_delta_2.z = temp_delta2.z[`FX_TOTAL_BITS-1:0];

    // Step 3: Compute edge values
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        longint temp_x_sub, temp_y_sub;
        longint temp_x_mult, temp_y_mult;
        long_coord_3d_t temp_delta, temp_v;

        temp_delta = deltas[i];
        temp_v = v[i];

        temp_x_sub = (abs_pos.x - temp_v.x);
        temp_y_sub = (abs_pos.y - temp_v.y); 
        
        // Compute multiplication
        temp_x_mult = temp_x_sub * temp_delta.y;
        temp_y_mult = temp_y_sub * temp_delta.x;
    
        edges[i] = temp_x_mult - temp_y_mult;
    end    
    
    exp_edge_0 = edges[0][`FX_TOTAL_BITS*2-1:0];
    exp_edge_1 = edges[1][`FX_TOTAL_BITS*2-1:0];
    exp_edge_2 = edges[2][`FX_TOTAL_BITS*2-1:0];


    // Step 4: Pass metadata
    exp_metadata = gmeta;


    // Step 5: Compute plane coefficients (A, B, C)
    // Coefficient A = y0*z2 - z0*y2
    begin
        longint temp_y0z2_mult, temp_z0y2_mult;
        
        temp_y0z2_mult = temp_delta0.y * temp_delta2.z;
        temp_z0y2_mult = temp_delta0.z * temp_delta2.y;
        coeff_A = temp_y0z2_mult - temp_z0y2_mult;
    end

    // Coefficient B = z0*x2 - x0*z2
    begin
        longint temp_z0x2_mult, temp_x0z2_mult;

        temp_z0x2_mult = temp_delta0.z * temp_delta2.x;
        temp_x0z2_mult = temp_delta0.x * temp_delta2.z;
        coeff_B = temp_z0x2_mult - temp_x0z2_mult;
    end
    
    // Coefficient C = x0*y2 - y0*x2
    begin
        longint temp_x0y2_mult, temp_y0x2_mult;
        
        temp_x0y2_mult = temp_delta0.x * temp_delta2.y;
        temp_y0x2_mult = temp_delta0.y * temp_delta2.x;
        coeff_C = temp_x0y2_mult - temp_y0x2_mult;
    end

    exp_coeff_A = coeff_A[`FX_TOTAL_BITS*2-1:0];
    exp_coeff_B = coeff_B[`FX_TOTAL_BITS*2-1:0];
    exp_coeff_C = coeff_C[`FX_TOTAL_BITS*2-1:0];

    begin
        // Calculate dz/dx and dz/dy
        
        div_result_dzdx = -((coeff_A << `FX_FRAC_BITS*2) / coeff_C);
        div_result_dzdy = -((coeff_B << `FX_FRAC_BITS*2) / coeff_C);
        
        exp_dzdx = div_result_dzdx[`FX_TOTAL_BITS*2-1:0];
        exp_dzdy = div_result_dzdy[`FX_TOTAL_BITS*2-1:0];
    end
    
    // Step 7: Compute initial z value for top-left pixel
    begin
        longint delta_x, delta_y;
        longint x_component, y_component, z_component, temp_z;
        long_coord_3d_t temp_v0;

        temp_v0 = v[0];

        delta_x = (temp_v0.x - abs_pos.x);
        delta_y = (temp_v0.y - abs_pos.y);
        
        $display("delta_x_abs_to_v0: %0d, delta_y_abs_to_v0: %0d", delta_x >>> 4, delta_y >>> 4);
        $display("exp_dzdx: %0d, exp_dzdy: %0d", div_result_dzdx >>> 8, div_result_dzdy >>> 8);

        x_component = (delta_x << `FX_FRAC_BITS) * div_result_dzdx;
        y_component = (delta_y << `FX_FRAC_BITS) * div_result_dzdy;
        
        $display("x_component: %0d, y_component: %0d", x_component >>> 16, y_component >>> 16);

        // Z component with sign extension
        z_component = temp_v0.z << `FX_FRAC_BITS*3;

        $display("z_component: %0d", z_component >>> 16);

        temp_z = z_component - x_component - y_component;

        exp_z_current = temp_z[`FX_TOTAL_BITS*2+`FX_FRAC_BITS*2-1:`FX_FRAC_BITS*2];
    end
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



function long_coord_3d_t coord3d_to_long_coords(
    input coord_3d_t in
);
    long_coord_3d_t out;

    out.x = {{`FX_TOTAL_BITS*3{in.x[`FX_TOTAL_BITS-1]}},in.x};
    out.y = {{`FX_TOTAL_BITS*3{in.y[`FX_TOTAL_BITS-1]}},in.y};
    out.z = {{`FX_TOTAL_BITS*3{in.z[`FX_TOTAL_BITS-1]}},in.z};

    return out;
endfunction

endmodule