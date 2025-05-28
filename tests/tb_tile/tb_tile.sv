`include "../../rtl/raster_defines.svh"
module tb_tile;

`define WITHIN_TOL(a, b, tol) (((a) > (b)) ? ((a) - (b)) <= (tol) : ((b) - (a)) <= (tol))
`define FX_TOLERANCE        4    // 0.25 in fixed-point (4 fractional bits)
`define DOUBLE_FX_TOLERANCE 16   // 1.0 in double-precision fixed-point (8 fractional bits)


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
logic signed [`FX_TOTAL_BITS-1:0]     abs_pos_x_o;
logic signed [`FX_TOTAL_BITS-1:0]     abs_pos_y_o;
logic signed [`FX_TOTAL_BITS-1:0]     delta_0_x_o;
logic signed [`FX_TOTAL_BITS-1:0]     delta_0_y_o;
logic signed [`FX_TOTAL_BITS-1:0]     delta_1_x_o;
logic signed [`FX_TOTAL_BITS-1:0]     delta_1_y_o;
logic signed [`FX_TOTAL_BITS-1:0]     delta_2_x_o;
logic signed [`FX_TOTAL_BITS-1:0]     delta_2_y_o;
logic signed [`FX_TOTAL_BITS*2-1:0]   edge_0_o;
logic signed [`FX_TOTAL_BITS*2-1:0]   edge_1_o;
logic signed [`FX_TOTAL_BITS*2-1:0]   edge_2_o;
logic        [`COLOR_BITS-1:0]        color_o;
logic        [`TILE_COLUMNS_BITS-1:0] tile_x_o;
logic        [`TILE_ROWS_BITS-1:0]    tile_y_o; 
logic signed [`FX_TOTAL_BITS*2-1:0]   dzdx_o;
logic signed [`FX_TOTAL_BITS*2-1:0]   dzdy_o;
logic signed [`FX_TOTAL_BITS*2-1:0]   z_current_o;


// DUT instantiation
tile_processor u_tile_processor (
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
    $dumpfile("tb_tile.vcd");
    $dumpvars(0);
end

  // Reset and stimulus
  initial begin
    // Initialize signals
    rst_n_i       = 0;
    rdy_out_i     = 0;
    vld_i      = 0;
    v0_x_i        = 0;
    v0_y_i        = 0;
    v0_z_i        = 0;
    v1_x_i        = 0;
    v1_y_i        = 0;
    v1_z_i        = 0;
    v2_x_i        = 0;
    v2_y_i        = 0;
    v2_z_i        = 0;
    color_i   = 0;
    tile_x_i  = 0;
    tile_y_i  = 0;

    // Release reset after a few cycles
    repeat (2) @(posedge clk_i);
    rst_n_i = 1;

    // Wait for DUT ready
    wait (rdy_in_o == 1);

    // Triangle 1: flat plane, expect zero gradients
    run_triangle_test(
        make_coord(1, 14, 512),
        make_coord(12, 15, 512),
        make_coord(7, 2, 512),
        make_meta(1, 0, 0)
    );

    // Triangle 2: skewed in x direction, expect large dzdx and small dzdy
    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(1, 2, 256),
        make_coord(20, 1, 1024),
        make_meta(2, 0, 0)
    );

    // Triangle 3: skewed in y direction, expect large dzdy and small dzdx
    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(1, 20, 1024),
        make_coord(2, 1, 256),
        make_meta(3, 0, 0)
    );

    // try to flush them all

    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(1, 20, 1024),
        make_coord(2, 1, 256),
        make_meta(4, 2, 0)
    );

    for (int i = 0; i < 100; i++) begin
        logic [`FX_TOTAL_BITS-1:0]  v1_x, v1_y, v1_z,
                                    v2_x, v2_y, v2_z,
                                    v3_x, v3_y, v3_z;
        logic [`COLOR_BITS-1:0] color;
        logic [`TILE_COLUMNS_BITS-1:0] tile_col;
        logic [`TILE_ROWS_BITS-1:0] tile_row;

        // Create temporary variables for each vertex
        // Use explicit casting to avoid width truncation warnings
        // Vertex 1
        v1_x = `FX_TOTAL_BITS'($urandom_range((640 << `FX_FRAC_BITS) - 1));
        v1_y = `FX_TOTAL_BITS'($urandom_range((480 << `FX_FRAC_BITS) - 1));
        v1_z = `FX_TOTAL_BITS'($urandom_range((1024 << `FX_FRAC_BITS) - 1));
        
        // Vertex 2
        v2_x = `FX_TOTAL_BITS'($urandom_range((640 << `FX_FRAC_BITS) - 1));
        v2_y = `FX_TOTAL_BITS'($urandom_range((480 << `FX_FRAC_BITS) - 1));
        v2_z = `FX_TOTAL_BITS'($urandom_range((1024 << `FX_FRAC_BITS) - 1));
        
        // Vertex 3
        v3_x = `FX_TOTAL_BITS'($urandom_range((640 << `FX_FRAC_BITS) - 1));
        v3_y = `FX_TOTAL_BITS'($urandom_range((480 << `FX_FRAC_BITS) - 1));
        v3_z = `FX_TOTAL_BITS'($urandom_range((1024 << `FX_FRAC_BITS) - 1));
        
        // Color and Tile information
        // Generate a random number that fits within the specified bit width.
        // (1 << `COLOR_BITS`) - 1 gives the maximum value for `COLOR_BITS` bits (e.g., 2^16 - 1 for 16 bits).
        color = `COLOR_BITS'($urandom_range((1 << `COLOR_BITS) - 1));
        tile_col = `TILE_COLUMNS_BITS'($urandom_range((1 << `TILE_COLUMNS_BITS) - 1));
        tile_row = `TILE_ROWS_BITS'($urandom_range((1 << `TILE_ROWS_BITS) - 1));
        
        run_triangle_test(
            '{v1_x, v1_y, v1_z},
            '{v2_x, v2_y, v2_z},
            '{v3_x, v3_y, v3_z},
            '{color, tile_col, tile_row}
        );

    end
    $finish();
end

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

// General-purpose task for driving a triangle and checking results
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

    // Apply inputs
    v0_x_i = tv0.x; v0_y_i = tv0.y; v0_z_i = tv0.z;
    v1_x_i = tv1.x; v1_y_i = tv1.y; v1_z_i = tv1.z;
    v2_x_i = tv2.x; v2_y_i = tv2.y; v2_z_i = tv2.z;
    color_i   = tmeta.color; tile_x_i   = tmeta.tile_x; tile_y_i   = tmeta.tile_y;

    // Start transaction
    @(negedge clk_i);
    vld_i = 1;
    @(negedge clk_i);
    vld_i = 0;
    @(negedge clk_i);

    @(posedge vld_o);
    repeat (5) @(posedge clk_i);

    // Print out key calculated values for debugging
    $display("--- Expected Values ---");
    $display("abs_pos: x=%0d, y=%0d", exp_abs_pos.x >>> 4, exp_abs_pos.y >>> 4);
    $display("dzdx: %0d, dzdy: %0d", exp_dzdx >>> 8, exp_dzdy >>> 8);
    $display("z_current: %0d", exp_z_current >>> 8);

    for (int i = 0; i < 3; i++) begin
        temp_delta = exp_deltas[i];
        $display("delta_%0d: x= %0d, y=%0d, z=%0d", i, temp_delta.x >>> 4, temp_delta.y >>> 4, temp_delta.z >>> 4);
    end
    for (int i = 0; i < 3; i++) begin
        $display("edge_%0d: %0d", i, exp_edges[i] >>> 8);
    end
    $display("coeff_A: %0d", exp_coeff_A >>> 8);
    $display("coeff_B: %0d", exp_coeff_B >>> 8);
    $display("coeff_C: %0d", exp_coeff_C >>> 8);


    // Print out real values
    $display("--- Real Values ---");
    $display("abs_pos: x=%0d, y=%0d", abs_pos_x_o >>> 4, abs_pos_y_o >>> 4);
    $display("dzdx: %0d, dzdy: %0d", dzdx_o >>> 8, dzdy_o >>> 8);
    $display("z_current: %0d", z_current_o >>> 8);
    $display("delta_%0d: x= %0d, y=%0d", 0, delta_0_x_o >>> 4, delta_0_y_o >>> 4);
    $display("delta_%0d: x= %0d, y=%0d", 1, delta_1_x_o >>> 4, delta_1_y_o >>> 4);
    $display("delta_%0d: x= %0d, y=%0d", 2, delta_2_x_o >>> 4, delta_2_y_o >>> 4);
    $display("edge_%0d: %0d", 0, edge_0_o  >>> 8);
    $display("edge_%0d: %0d", 1, edge_1_o >>> 8);
    $display("edge_%0d: %0d", 2, edge_2_o >>> 8);

    // Assertions 
    // Assertions for all outputs
    // Assertions with tolerance for fixed-point values
    temp_delta = exp_deltas[0];
    assert (`WITHIN_TOL(abs_pos_x_o, exp_abs_pos.x, `FX_TOLERANCE))
        else $error("abs_pos_x mismatch: %p vs %p (diff: %0d)", abs_pos_x_o, exp_abs_pos.x, abs_pos_x_o - exp_abs_pos.x);
    assert (`WITHIN_TOL(abs_pos_y_o, exp_abs_pos.y, `FX_TOLERANCE))
        else $error("abs_pos_y mismatch: %p vs %p (diff: %0d)", abs_pos_y_o, exp_abs_pos.y, abs_pos_y_o - exp_abs_pos.y);
    assert (`WITHIN_TOL(delta_0_x_o, temp_delta.x, `FX_TOLERANCE))
        else $error("delta_%0d.x mismatch: %p vs %p (diff: %0d)", 0, delta_0_x_o, temp_delta.x, delta_0_x_o - temp_delta.x);
    assert (`WITHIN_TOL(delta_0_y_o, temp_delta.y, `FX_TOLERANCE))
        else $error("delta_%0d.y mismatch: %p vs %p (diff: %0d)", 0, delta_0_y_o, temp_delta.y, delta_0_y_o - temp_delta.y);
    assert (`WITHIN_TOL(edge_0_o, exp_edges[0], `DOUBLE_FX_TOLERANCE))
        else $error("edge_%0d mismatch: %0d vs %0d (diff: %0d)", 0, edge_0_o, exp_edges[0], edge_0_o - exp_edges[0]);

    temp_delta = exp_deltas[1];
    assert (`WITHIN_TOL(delta_1_x_o, temp_delta.x, `FX_TOLERANCE))
        else $error("delta_%0d.x mismatch: %p vs %p (diff: %0d)", 1, delta_1_x_o, temp_delta.x, delta_1_x_o - temp_delta.x);
    assert (`WITHIN_TOL(delta_1_y_o, temp_delta.y, `FX_TOLERANCE))
        else $error("delta_%0d.y mismatch: %p vs %p (diff: %0d)", 1, delta_1_y_o, temp_delta.y, delta_1_y_o - temp_delta.y);
    assert (`WITHIN_TOL(edge_1_o, exp_edges[1], `DOUBLE_FX_TOLERANCE))
        else $error("edge_%0d mismatch: %0d vs %0d (diff: %0d)", 1, edge_1_o, exp_edges[1], edge_1_o - exp_edges[1]);

    temp_delta = exp_deltas[2];
    assert (`WITHIN_TOL(delta_2_x_o, temp_delta.x, `FX_TOLERANCE))
        else $error("delta_%0d.x mismatch: %p vs %p (diff: %0d)", 2, delta_2_x_o, temp_delta.x, delta_2_x_o - temp_delta.x);
    assert (`WITHIN_TOL(delta_2_y_o, temp_delta.y, `FX_TOLERANCE))
        else $error("delta_%0d.y mismatch: %p vs %p (diff: %0d)", 2, delta_2_y_o, temp_delta.y, delta_2_y_o - temp_delta.y);
    assert (`WITHIN_TOL(edge_2_o, exp_edges[2], `DOUBLE_FX_TOLERANCE))
        else $error("edge_%0d mismatch: %0d vs %0d (diff: %0d)", 2, edge_2_o, exp_edges[2], edge_2_o - exp_edges[2]);        

    // Exact equality for metadata (integer values)
    assert (color_o == exp_metadata.color)
        else $error("color mismatch");
    assert (tile_x_o == exp_metadata.tile_x)
        else $error("tile_x mismatch");
    assert (tile_y_o == exp_metadata.tile_y)
        else $error("tile_y mismatch");
        
    // Tolerance for derivative calculations (double precision fixed-point)
    assert (`WITHIN_TOL(dzdx_o, exp_dzdx, `DOUBLE_FX_TOLERANCE))
        else $error("dzdx mismatch: %0d vs %0d (diff: %0d)", dzdx_o, exp_dzdx, dzdx_o - exp_dzdx);
    assert (`WITHIN_TOL(dzdy_o, exp_dzdy, `DOUBLE_FX_TOLERANCE))
        else $error("dzdy mismatch: %0d vs %0d (diff: %0d)", dzdy_o, exp_dzdy, dzdy_o - exp_dzdy);
    assert (`WITHIN_TOL(z_current_o, exp_z_current, `DOUBLE_FX_TOLERANCE))
        else $error("z_current mismatch: %0d vs %0d (diff: %0d)", z_current_o, exp_z_current, z_current_o - exp_z_current);

    // Handshake to clear output
    rdy_out_i = 1;
    @(negedge vld_o);
    rdy_out_i = 0;
    @(negedge clk_i);
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
