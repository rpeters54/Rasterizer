`include "../../rtl/raster_defines.svh"
`include "../../rtl/struct_defines.svh"

module tb_tile;

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
  logic [`COLOR_BITS-1:0] in_color;
  logic [`TILE_COLUMNS_BITS-1:0] in_tile_x;
  logic [`TILE_ROWS_BITS-1:0] in_tile_y;

  // Outputs from tile_processor
  logic signed [`FX_TOTAL_BITS-1:0] out_abs_pos_x, out_abs_pos_y, out_abs_pos_z;
  logic signed [`FX_TOTAL_BITS-1:0] out_delta_0_x, out_delta_0_y, out_delta_0_z;
  logic signed [`FX_TOTAL_BITS-1:0] out_delta_1_x, out_delta_1_y, out_delta_1_z;
  logic signed [`FX_TOTAL_BITS-1:0] out_delta_2_x, out_delta_2_y, out_delta_2_z;
  logic signed [`FX_TOTAL_BITS*2-1:0] out_edge_0, out_edge_1, out_edge_2;
  logic [`COLOR_BITS-1:0] out_color;
  logic [`TILE_COLUMNS_BITS-1:0] out_tile_x;
  logic [`TILE_ROWS_BITS-1:0] out_tile_y;
  logic signed [`FX_TOTAL_BITS-1:0] out_dzdx, out_dzdy;
  logic signed [`FX_TOTAL_BITS*2-1:0] out_z_current;


  // DUT instantiation
  tile_processor u_tile_processor (
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
    .in_color(in_color),
    .in_tile_x(in_tile_x),
    .in_tile_y(in_tile_y),
    .rdy_in(rdy_in),
    .vld_out(vld_out),
    .out_abs_pos_x(out_abs_pos_x),
    .out_abs_pos_y(out_abs_pos_y),
    .out_abs_pos_z(out_abs_pos_z),
    .out_delta_0_x(out_delta_0_x),
    .out_delta_0_y(out_delta_0_y),
    .out_delta_0_z(out_delta_0_z),
    .out_delta_1_x(out_delta_1_x),
    .out_delta_1_y(out_delta_1_y),
    .out_delta_1_z(out_delta_1_z),
    .out_delta_2_x(out_delta_2_x),
    .out_delta_2_y(out_delta_2_y),
    .out_delta_2_z(out_delta_2_z),
    .out_edge_0(out_edge_0),
    .out_edge_1(out_edge_1),
    .out_edge_2(out_edge_2),
    .out_color(out_color),
    .out_tile_x(out_tile_x),
    .out_tile_y(out_tile_y),
    .out_dzdx(out_dzdx),
    .out_dzdy(out_dzdy),
    .out_z_current(out_z_current)
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
    $dumpfile("tb_tile.vcd");
    $dumpvars(0);
end

  // Reset and stimulus
  initial begin
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
    in_color   = 0;
    in_tile_x  = 0;
    in_tile_y  = 0;

    // Release reset after a few cycles
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Wait for DUT ready
    wait (rdy_in == 1);

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

    $finish;
  end


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
    output logic signed [`FX_TOTAL_BITS-1:0] exp_dzdx,
    output logic signed [`FX_TOTAL_BITS-1:0] exp_dzdy,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_z_current,
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_coeff_A, 
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_coeff_B, 
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_coeff_C
);
    // Intermediate variables for calculations
    coord_3d_t v[0:2];
    coord_3d_t rotated_v[0:2];

    coord_3d_t temp_delta, temp_rv, temp_v, temp_d0, temp_d2;
    
    
    // Variables to detect overflow
    logic overflow_detected;
    logic signed [`FX_TOTAL_BITS*2:0] overflow_check; // Extra bit for overflow detection
    logic signed [`FX_TOTAL_BITS*2-1:0] exp_edges [0:2];
    coord_3d_t exp_deltas [0:2];
    
    // Set up vertex arrays for easier calculations
    v =         '{gv0, gv1, gv2};
    rotated_v = '{gv1, gv2, gv0};
    
    // Step 1: Calculate absolute position (tile to pixel coordinates)
    exp_abs_pos.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, gmeta.tile_x, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    exp_abs_pos.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, gmeta.tile_y, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    exp_abs_pos.z = '0;
    
    // Step 2: Compute deltas between vertices (in clockwise order)
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        temp_delta = exp_deltas[i];
        temp_rv = rotated_v[i];
        temp_v = v[i];
        temp_delta.x = temp_rv.x - temp_v.x;
        temp_delta.y = temp_rv.y - temp_v.y;
        temp_delta.z = temp_rv.z - temp_v.z;

        exp_deltas[i] = temp_delta;
    end

    exp_delta_0 = exp_deltas[0];
    exp_delta_1 = exp_deltas[1];
    exp_delta_2 = exp_deltas[2];

    // Step 3: Compute edge values
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        logic signed [`FX_TOTAL_BITS-1:0] temp_x_sub, temp_y_sub;
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_x_mult, temp_y_mult;
        
        temp_delta = exp_deltas[i];
        temp_v = v[i];

        temp_x_sub = (exp_abs_pos.x - temp_v.x);
        temp_y_sub = (exp_abs_pos.y - temp_v.y); 
        
        // Compute multiplication
        temp_x_mult = temp_x_sub * temp_delta.y;
        temp_y_mult = temp_y_sub * temp_delta.x;
    
        exp_edges[i] = temp_x_mult - temp_y_mult;
    end
    
    exp_edge_0 = exp_edges[0];
    exp_edge_1 = exp_edges[1];
    exp_edge_2 = exp_edges[2];

    // Step 4: Pass metadata
    exp_metadata = gmeta;
    
    temp_d2 = exp_deltas[2];
    temp_d0 = exp_deltas[0];
    // Step 5: Compute plane coefficients (A, B, C)
    // Coefficient A = y0*z2 - z0*y2
    begin
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_y0z2_mult, temp_z0y2_mult;
        
        temp_y0z2_mult = temp_d0.y * temp_d2.z;
        temp_z0y2_mult = temp_d0.z * temp_d2.y;
        exp_coeff_A = temp_y0z2_mult - temp_z0y2_mult;
    end
    
    // Coefficient B = z0*x2 - x0*z2
    begin
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_z0x2_mult, temp_x0z2_mult;
        
        temp_z0x2_mult = temp_d0.z * temp_d2.x;
        temp_x0z2_mult = temp_d0.x * temp_d2.z;
        exp_coeff_B = temp_z0x2_mult - temp_x0z2_mult;
    end
    
    // Coefficient C = x0*y2 - y0*x2
    begin
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_x0y2_mult, temp_y0x2_mult;
        
        temp_x0y2_mult = temp_d0.x * temp_d2.y;
        temp_y0x2_mult = temp_d0.y * temp_d2.x;
        exp_coeff_C = temp_x0y2_mult - temp_y0x2_mult;
    end
    
    // Step 6: Check for division by zero in dz calculations
    if (exp_coeff_C == 0) begin
        $error("Division by zero detected in dz calculations - coefficient C is zero!");
        exp_dzdx = '0;
        exp_dzdy = '0;
    end else begin
        // Calculate dz/dx and dz/dy
        logic signed [`FX_TOTAL_BITS*2-1:0] div_result_dzdx, div_result_dzdy;
        
        div_result_dzdx = -((exp_coeff_A << `FX_FRAC_BITS*2)/ exp_coeff_C);
        div_result_dzdy = -((exp_coeff_B << `FX_FRAC_BITS*2) / exp_coeff_C);
        

        // Extract middle 16 bits for the 12_4 fixed point result
        exp_dzdx = div_result_dzdx[(`FX_TOTAL_BITS-1+`FX_FRAC_BITS):`FX_FRAC_BITS];
        exp_dzdy = div_result_dzdy[(`FX_TOTAL_BITS-1+`FX_FRAC_BITS):`FX_FRAC_BITS];
    end
    
    // Step 7: Compute initial z value for top-left pixel
    begin
        logic signed [`FX_TOTAL_BITS-1:0] delta_x, delta_y;
        logic signed [`FX_TOTAL_BITS*2-1:0] x_component, y_component, z_component;

        temp_v = v[0];
        
        delta_x = (temp_v.x - exp_abs_pos.x);
        delta_y = (temp_v.y - exp_abs_pos.y);

        x_component = delta_x * exp_dzdx;
        y_component = delta_y * exp_dzdy;
        
        // Z component with sign extension
        z_component = {{`FX_INT_BITS{temp_v.z[`FX_TOTAL_BITS-1]}}, temp_v.z, {`FX_FRAC_BITS{1'b0}}};
        exp_z_current = z_component - x_component - y_component;
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
    logic signed [`FX_TOTAL_BITS-1:0] exp_dzdx;
    logic signed [`FX_TOTAL_BITS-1:0] exp_dzdy;
    logic signed [`FX_TOTAL_BITS*2-1:0] exp_z_current;
    logic signed [`FX_TOTAL_BITS*2-1:0] exp_coeff_A, exp_coeff_B, exp_coeff_C;


    // Compute expected outputs
    simulate_expected_output(tv0, tv1, tv2, tmeta,
                 exp_abs_pos, exp_deltas[0], exp_deltas[1], exp_deltas[2],
                 exp_edges[0], exp_edges[1], exp_edges[2],
                 exp_metadata, exp_dzdx, exp_dzdy, exp_z_current,
                 exp_coeff_A, exp_coeff_B, exp_coeff_C);

    
    // Wait until DUT is ready
    wait(rdy_in == 1);

    // Apply inputs
    v0_x = tv0.x; v0_y = tv0.y; v0_z = tv0.z;
    v1_x = tv1.x; v1_y = tv1.y; v1_z = tv1.z;
    v2_x = tv2.x; v2_y = tv2.y; v2_z = tv2.z;
    in_color   = tmeta.color; in_tile_x   = tmeta.tile_x; in_tile_y   = tmeta.tile_y;

    // Start transaction
    @(negedge clk);
    vld_in = 1;
    @(negedge clk);
    vld_in = 0;
    @(negedge clk);
    @(posedge vld_out);

    // Print out key calculated values for debugging
    $display("--- Expected Values ---");
    $display("abs_pos: x=%0d, y=%0d, z=%0d", exp_abs_pos.x >>> 4, exp_abs_pos.y >>> 4, exp_abs_pos.z >>> 4);
    $display("dzdx: %0d, dzdy: %0d", exp_dzdx >>> 4, exp_dzdy >>> 4);
    $display("z_current: %0d", exp_z_current >>> 8);
    $display("coeff_A: %0d", exp_coeff_A >>> 8);
    $display("coeff_B: %0d", exp_coeff_B >>> 8);
    $display("coeff_C: %0d", exp_coeff_C >>> 8);

    for (int i = 0; i < 3; i++) begin
        temp_delta = exp_deltas[i];
        $display("delta_%0d: x= %0d, y=%0d, z=%0d", i, temp_delta.x >>> 4, temp_delta.y >>> 4, temp_delta.z >>> 4);
    end
    for (int i = 0; i < 3; i++) begin
        $display("edge_%0d: %0d", i, exp_edges[i] >>> 8);
    end

    // Print out real values
    $display("--- Real Values ---");
    $display("abs_pos: x=%0d, y=%0d, z=%0d", out_abs_pos_x >>> 4, out_abs_pos_y >>> 4, out_abs_pos_z >>> 4);
    $display("dzdx: %0d, dzdy: %0d", out_dzdx >>> 4, out_dzdy >>> 4);
    $display("z_current: %0d", out_z_current >>> 8);
    $display("delta_%0d: x= %0d, y=%0d, z=%0d", 0, out_delta_0_x >>> 4, out_delta_0_y >>> 4, out_delta_0_z >>> 4);
    $display("delta_%0d: x= %0d, y=%0d, z=%0d", 1, out_delta_1_x >>> 4, out_delta_1_y >>> 4, out_delta_1_z >>> 4);
    $display("delta_%0d: x= %0d, y=%0d, z=%0d", 2, out_delta_2_x >>> 4, out_delta_2_y >>> 4, out_delta_2_z >>> 4);
    $display("edge_%0d: %0d", 0, out_edge_0  >>> 8);
    $display("edge_%0d: %0d", 1, out_edge_1 >>> 8);
    $display("edge_%0d: %0d", 2, out_edge_2 >>> 8);

    // Assertions 
    // Assertions for all outputs

    temp_delta = exp_deltas[0];
    assert (out_abs_pos_x == exp_abs_pos.x)
        else $error("abs_pos mismatch: %p vs %p", out_abs_pos_x, exp_abs_pos.x);
    assert (out_abs_pos_y == exp_abs_pos.y)
        else $error("abs_pos mismatch: %p vs %p", out_abs_pos_y, exp_abs_pos.y);
    assert (out_abs_pos_z == exp_abs_pos.z)
        else $error("abs_pos mismatch: %p vs %p", out_abs_pos_z, exp_abs_pos.z);
    assert (out_delta_0_x == temp_delta.x)
        else $error("delta_%0d.x mismatch: %p vs %p", 0, out_delta_0_x, temp_delta.x);
    assert (out_delta_0_y == temp_delta.y)
        else $error("delta_%0d.y mismatch: %p vs %p", 0, out_delta_0_y, temp_delta.y);
    assert (out_delta_0_z == temp_delta.z)
        else $error("delta_%0d.z mismatch: %p vs %p", 0, out_delta_0_z, temp_delta.z);
    assert (out_edge_0 == exp_edges[0])
        else $error("edge_%0d mismatch: %0d vs %0d", 0, out_edge_0, temp_delta);

    temp_delta = exp_deltas[1];
    assert (out_delta_1_x == temp_delta.x)
        else $error("delta_%0d.x mismatch: %p vs %p", 1, out_delta_1_x, temp_delta.x);
    assert (out_delta_1_y == temp_delta.y)
        else $error("delta_%0d.y mismatch: %p vs %p", 1, out_delta_1_y, temp_delta.y);
    assert (out_delta_1_z == temp_delta.z)
        else $error("delta_%0d.z mismatch: %p vs %p", 1, out_delta_1_z, temp_delta.z);
    assert (out_edge_1 == exp_edges[1])
        else $error("edge_%0d mismatch: %0d vs %0d", 1, out_edge_1, exp_edges[1]);

    temp_delta = exp_deltas[2];
    assert (out_delta_2_x == temp_delta.x)
        else $error("delta_%0d.x mismatch: %p vs %p", 2, out_delta_2_x, temp_delta.x);
    assert (out_delta_2_y == temp_delta.y)
        else $error("delta_%0d.y mismatch: %p vs %p", 2, out_delta_2_y, temp_delta.y);
    assert (out_delta_2_z == temp_delta.z)
        else $error("delta_%0d.z mismatch: %p vs %p", 2, out_delta_2_z, temp_delta.z);
    assert (out_edge_2 == exp_edges[2])
        else $error("edge_%0d mismatch: %0d vs %0d", 2, out_edge_2, exp_edges[2]);        

    assert (out_color == exp_metadata.color)
        else $error("color mismatch");
    assert (out_tile_x == exp_metadata.tile_x)
        else $error("tile_x mismatch");
    assert (out_tile_y == exp_metadata.tile_y)
        else $error("tile_y mismatch");
    assert (out_dzdx == exp_dzdx)
        else $error("dzdx mismatch: %0d vs %0d", out_dzdx, exp_dzdx);
    assert (out_dzdy == exp_dzdy)
        else $error("dzdy mismatch: %0d vs %0d", out_dzdy, exp_dzdy);
    assert (out_z_current == exp_z_current)
        else $error("z_current mismatch: %0d vs %0d", out_z_current, exp_z_current);

    // Handshake to clear output
    rdy_out = 1;
    @(negedge vld_out);
    rdy_out = 0;
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
