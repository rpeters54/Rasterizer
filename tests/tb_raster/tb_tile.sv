`include "../../rtl/raster_defines.svh"

module tb_tile;

// Declare test variables
logic                                   clk;
logic                                   rst_n;
logic                                   rdy_out;
logic                                   vld_in;
coord_3d_t                              v0;
coord_3d_t                              v1;
coord_3d_t                              v2;
metadata_t                              in_metadata;

logic                                   rdy_in;
logic                                   vld_out;
coord_3d_t                              out_abs_pos;
coord_3d_t                              out_delta_0;
coord_3d_t                              out_delta_1;
coord_3d_t                              out_delta_2;
logic signed [`FX_TOTAL_BITS*2-1:0]     out_edge_0;
logic signed [`FX_TOTAL_BITS*2-1:0]     out_edge_1;
logic signed [`FX_TOTAL_BITS*2-1:0]     out_edge_2;
metadata_t                              out_metadata;
logic        [`FX_TOTAL_BITS-1:0]       out_dzdx;
logic        [`FX_TOTAL_BITS-1:0]       out_dzdy;
logic        [`FX_TOTAL_BITS*2-1:0]     out_z_current;

// Instantiate Design 
tile_processor tile_proc (
    .clk(clk),
    .rst_n(rst_n),
    .rdy_out(rdy_out),
    .vld_in(vld_in),
    .v0(v0),
    .v1(v1),
    .v2(v2),
    .in_metadata(in_metadata),
    .rdy_in(rdy_in),
    .vld_out(vld_out),
    .out_abs_pos(out_abs_pos),
    .out_delta_0(out_delta_0),
    .out_delta_1(out_delta_1),
    .out_delta_2(out_delta_2),
    .out_edge_0(out_edge_0),
    .out_edge_1(out_edge_1),
    .out_edge_2(out_edge_2),
    .out_metadata(out_metadata),
    .out_dzdx(out_dzdx),
    .out_dzdy(out_dzdy),
    .out_z_current(out_z_current)
);

// Sample to drive clock
localparam CLK_PERIOD = 10;
always begin
    #(CLK_PERIOD/2) 
    clk<=~clk;
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
    v0          = '{default:'0};
    v1          = '{default:'0};
    v2          = '{default:'0};
    in_metadata = '{default:'0};

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
        make_meta(1, 0, 0)
    );

    // Triangle 3: skewed in y direction, expect large dzdy and small dzdx
    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(2, 1, 256),
        make_coord(1, 20, 1024),
        make_meta(1, 0, 0)
    );

    run_triangle_test(
        make_coord(1, 1, 256),
        make_coord(2, 1, 256),
        make_coord(1, 20, 1024),
        make_meta(1, 0, 0)
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
    output coord_3d_t exp_deltas [0:2],
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_edges [0:2],
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
    
    
    // Variables to detect overflow
    logic overflow_detected;
    logic signed [`FX_TOTAL_BITS*2:0] overflow_check; // Extra bit for overflow detection
    
    // Set up vertex arrays for easier calculations
    v =         '{gv0, gv1, gv2};
    rotated_v = '{gv1, gv2, gv0};
    
    // Step 1: Calculate absolute position (tile to pixel coordinates)
    exp_abs_pos.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, gmeta.tile_x, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    exp_abs_pos.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, gmeta.tile_y, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    exp_abs_pos.z = '0;
    
    // Step 2: Compute deltas between vertices (in clockwise order)
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        exp_deltas[i].x = rotated_v[i].x - v[i].x;
        exp_deltas[i].y = rotated_v[i].y - v[i].y;
        exp_deltas[i].z = rotated_v[i].z - v[i].z;
    end
    
    // Step 3: Compute edge values
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        logic signed [`FX_TOTAL_BITS-1:0] temp_x_sub, temp_y_sub;
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_x_mult, temp_y_mult;
        
        temp_x_sub = (exp_abs_pos.x - v[i].x);
        temp_y_sub = (exp_abs_pos.y - v[i].y); 
        
        // Compute multiplication
        temp_x_mult = temp_x_sub * exp_deltas[i].y;
        temp_y_mult = temp_y_sub * exp_deltas[i].x;
    
        exp_edges[i] = temp_x_mult - temp_y_mult;
    end
    
    // Step 4: Pass metadata
    exp_metadata = gmeta;
    
    // Step 5: Compute plane coefficients (A, B, C)
    // Coefficient A = y0*z2 - z0*y2
    begin
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_y0z2_mult, temp_z0y2_mult;
        
        temp_y0z2_mult = exp_deltas[0].y * exp_deltas[2].z;
        temp_z0y2_mult = exp_deltas[0].z * exp_deltas[2].y;
        exp_coeff_A = temp_y0z2_mult - temp_z0y2_mult;
    end
    
    // Coefficient B = z0*x2 - x0*z2
    begin
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_z0x2_mult, temp_x0z2_mult;
        
        temp_z0x2_mult = exp_deltas[0].z * exp_deltas[2].x;
        temp_x0z2_mult = exp_deltas[0].x * exp_deltas[2].z;
        exp_coeff_B = temp_z0x2_mult - temp_x0z2_mult;
    end
    
    // Coefficient C = x0*y2 - y0*x2
    begin
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_x0y2_mult, temp_y0x2_mult;
        
        temp_x0y2_mult = exp_deltas[0].x * exp_deltas[2].y;
        temp_y0x2_mult = exp_deltas[0].y * exp_deltas[2].x;
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
        
        delta_x = (v[0].x - exp_abs_pos.x);
        delta_y = (v[0].y - exp_abs_pos.y);

        x_component = delta_x * exp_dzdx;
        y_component = delta_y * exp_dzdy;
        
        // Z component with sign extension
        z_component = {{`FX_INT_BITS{v[0].z[`FX_TOTAL_BITS-1]}}, v[0].z, {`FX_FRAC_BITS{1'b0}}};
        exp_z_current = z_component - x_component - y_component;
    end
    
    // Special case check for flat triangles
    if (v[0].z == v[1].z && v[1].z == v[2].z) begin
        if (exp_dzdx != 0 || exp_dzdy != 0) begin
            $warning("For flat triangle, expected dzdx and dzdy to be 0, but got dzdx=%0d, dzdy=%0d", exp_dzdx, exp_dzdy);
        end
    end
endtask



// General-purpose task for driving a triangle and checking results
task automatic run_triangle_test(
    input coord_3d_t tv0,
    input coord_3d_t tv1,
    input coord_3d_t tv2,
    input metadata_t tmeta,
);
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
                 exp_abs_pos, exp_deltas, exp_edges,
                 exp_metadata, exp_dzdx, exp_dzdy, exp_z_current,
                 exp_coeff_A, exp_coeff_B, exp_coeff_C);

    
    // Wait until DUT is ready
    wait(rdy_in == 1);

    // Apply inputs
    v0 = tv0;
    v1 = tv1;
    v2 = tv2;
    in_metadata = tmeta;

    // Start transaction
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
        $display("delta_%0d: x= %0d, y=%0d, z=%0d", i, exp_deltas[i].x >>> 4, exp_deltas[i].y >>> 4, exp_deltas[i].z >>> 4);
    end
    for (int i = 0; i < 3; i++) begin
        $display("edge_%0d: %0d", i, exp_edges[i] >>> 8);
    end

    // Print out real values
    $display("--- Real Values ---");
    $display("abs_pos: x=%0d, y=%0d, z=%0d", out_abs_pos.x >>> 4, out_abs_pos.y >>> 4, out_abs_pos.z >>> 4);
    $display("dzdx: %0d, dzdy: %0d", out_dzdx >>> 4, out_dzdy >>> 4);
    $display("z_current: %0d", out_z_current >>> 8);
    $display("delta_%0d: x= %0d, y=%0d, z=%0d", 0, out_delta_0.x >>> 4, out_delta_0.y >>> 4, out_delta_0.z >>> 4);
    $display("delta_%0d: x= %0d, y=%0d, z=%0d", 1, out_delta_1.x >>> 4, out_delta_1.y >>> 4, out_delta_1.z >>> 4);
    $display("delta_%0d: x= %0d, y=%0d, z=%0d", 2, out_delta_2.x >>> 4, out_delta_2.y >>> 4, out_delta_2.z >>> 4);
    $display("edge_%0d: %0d", 0, out_edge_0  >>> 8);
    $display("edge_%0d: %0d", 1, out_edge_1 >>> 8);
    $display("edge_%0d: %0d", 2, out_edge_2 >>> 8);

    // Assertions 
    // Assertions for all outputs
    assert (out_abs_pos == exp_abs_pos)
        else $error("abs_pos mismatch: %p vs %p", out_abs_pos, exp_abs_pos);
    assert (out_delta_0.x == exp_deltas[0].x)
        else $error("delta_%0d.x mismatch: %p vs %p", 0, out_delta_0.x, exp_deltas[0].x);
    assert (out_delta_0.y == exp_deltas[0].y)
        else $error("delta_%0d.y mismatch: %p vs %p", 0, out_delta_0.y, exp_deltas[0].y);
    assert (out_delta_0.z == exp_deltas[0].z)
        else $error("delta_%0d.z mismatch: %p vs %p", 0, out_delta_0.z, exp_deltas[0].z);
    assert (out_edge_0 == exp_edges[0])
        else $error("edge_%0d mismatch: %0d vs %0d", 0, out_edge_0, exp_edges[0]);

    assert (out_delta_1.x == exp_deltas[1].x)
        else $error("delta_%0d.x mismatch: %p vs %p", 1, out_delta_1.x, exp_deltas[1].x);
    assert (out_delta_1.y == exp_deltas[1].y)
        else $error("delta_%0d.y mismatch: %p vs %p", 1, out_delta_1.y, exp_deltas[1].y);
    assert (out_delta_1.z == exp_deltas[1].z)
        else $error("delta_%0d.z mismatch: %p vs %p", 1, out_delta_1.z, exp_deltas[1].z);
    assert (out_edge_1 == exp_edges[1])
        else $error("edge_%0d mismatch: %0d vs %0d", 1, out_edge_1, exp_edges[1]);

    assert (out_delta_2.x == exp_deltas[2].x)
        else $error("delta_%0d.x mismatch: %p vs %p", 2, out_delta_2.x, exp_deltas[2].x);
    assert (out_delta_2.y == exp_deltas[2].y)
        else $error("delta_%0d.y mismatch: %p vs %p", 2, out_delta_2.y, exp_deltas[2].y);
    assert (out_delta_2.z == exp_deltas[2].z)
        else $error("delta_%0d.z mismatch: %p vs %p", 2, out_delta_2.z, exp_deltas[2].z);
    assert (out_edge_2 == exp_edges[2])
        else $error("edge_%0d mismatch: %0d vs %0d", 2, out_edge_2, exp_edges[2]);        

    assert (out_metadata == exp_metadata)
        else $error("metadata mismatch");
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

return '{x:(x_in<<`FX_FRAC_BITS), y:(y_in<<`FX_FRAC_BITS), z:(z_in<<`FX_FRAC_BITS)};

endfunction


// cleaner way to make a metadata tuple
function metadata_t make_meta(
    input signed [`COLOR_BITS-1:0]        colors_in,
    input signed [`TILE_COLUMNS_BITS-1:0] tile_x_in,
    input signed [`TILE_ROWS_BITS-1:0]    tile_y_in
);

return '{color:colors_in, tile_x:tile_x_in, tile_y:tile_y_in};

endfunction

// sign extend a 16-bit fixed-point number to 32 bits
function [`FX_TOTAL_BITS*2-1:0] sext_f16_f32(
    input [`FX_TOTAL_BITS-1:0] in,
);

return {{`FX_INT_BITS{in[`FX_TOTAL_BITS-1]}}, in, {`FX_FRAC_BITS{1'b0}}};

endfunction

task automatic check_sub_overflow(
    input signed [`FX_TOTAL_BITS-1:0] a,
    input signed [`FX_TOTAL_BITS-1:0] b,
    input signed [`FX_TOTAL_BITS-1:0] res,
    input string msg
);

if ((a < 0 && b > 0 && res > 0) ||
    (a > 0 && b < 0 && res < 0)) begin
    $warning("Potential overflow in subtraction %s", msg);
end

endtask



endmodule
