`include "../../rtl/raster_defines.svh"

module tb_pixel;

logic                                 clk;
logic                                 rst_n;
logic                                 rdy_out;
logic                                 vld_in;

coord_3d_t                            in_abs_pos;
coord_3d_t                            in_delta_0;
coord_3d_t                            in_delta_1;
coord_3d_t                            in_delta_2;
logic signed [`FX_TOTAL_BITS*2-1:0]   in_edge_0;
logic signed [`FX_TOTAL_BITS*2-1:0]   in_edge_1;
logic signed [`FX_TOTAL_BITS*2-1:0]   in_edge_2;
metadata_t                            in_metadata;
logic        [`FX_TOTAL_BITS-1:0]     in_dzdx;
logic        [`FX_TOTAL_BITS-1:0]     in_dzdy;
logic        [`FX_TOTAL_BITS*2-1:0]   in_z_current;

logic                                 rdy_in;
logic                                 vld_out;
logic [`COLOR_BITS-1:0]               color_out;
coord_2d_t                            pixel_out;

// Instantiate Design 
pixel_processor pixel_proc (.*);

// Sample to drive clock
localparam CLK_PERIOD = 10;
always begin
    #(CLK_PERIOD/2) 
    clk<=~clk;
end

// Necessary to create Waveform
initial begin
    // Name as needed
    $dumpfile("tb_pixel.vcd");
    $dumpvars(0);
end

  // Reset and stimulus
  initial begin
    // Initialize signals
    clk = 0;
    rst_n = 0;
    rdy_out = 0;
    vld_in = 0;

    in_abs_pos =    '{default:'0};
    in_delta_0 =    '{default:'0};
    in_delta_1 =    '{default:'0};
    in_delta_2 =    '{default:'0};
    in_edge_0 =     '{default:'0};
    in_edge_1 =     '{default:'0};
    in_edge_2 =     '{default:'0};
    in_metadata =   '{default:'0};
    in_dzdx =       '{default:'0};
    in_dzdy =       '{default:'0};
    in_z_current =  '{default:'0};

    // Release reset after a few cycles
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Wait for DUT ready
    wait (rdy_in == 1);

    

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
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_z_current
);
    // Intermediate variables for calculations
    coord_3d_t v[0:2];
    coord_3d_t rotated_v[0:2];
    logic signed [`FX_TOTAL_BITS*2-1:0] coeff_A, coeff_B, coeff_C;
    
    // Variables to detect overflow
    logic overflow_detected;
    logic signed [`FX_TOTAL_BITS*2:0] overflow_check; // Extra bit for overflow detection
    
    // Set up vertex arrays for easier calculations
    v =         '{gv0, gv1, gv2};
    rotated_v = '{gv1, gv2, gv0};
    
    // Step 1: Calculate absolute position (tile to pixel coordinates)
    exp_abs_pos.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, gmeta.tile_x, `TILE_WIDTH_BITS'b0, {`FX_FRAC_BITS{1'b0}}};
    exp_abs_pos.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, gmeta.tile_y, `TILE_WIDTH_BITS'b0, {`FX_FRAC_BITS{1'b0}}};
    exp_abs_pos.z = '0;
    
    // Step 2: Compute deltas between vertices (in clockwise order)
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        exp_deltas[i].x = rotated_v[i].x - v[i].x;
        exp_deltas[i].y = rotated_v[i].y - v[i].y;
        exp_deltas[i].z = rotated_v[i].z - v[i].z;

        // Check for potential subtraction overflow
        check_sub_overflow(rotated_v[i].x, v[i].x, exp_deltas[i].x, "triangle edge x");
        check_sub_overflow(rotated_v[i].y, v[i].y, exp_deltas[i].y, "triangle edge y");
        check_sub_overflow(rotated_v[i].z, v[i].z, exp_deltas[i].z, "triangle edge z");

        // if ((rotated_v[i].x < 0 && v[i].x > 0 && exp_deltas[i].x > 0) ||
        //     (rotated_v[i].x > 0 && v[i].x < 0 && exp_deltas[i].x < 0)) begin
        //     $warning("Potential overflow in triangle edge x subtraction for vertex %0d", i);
        // end
        
        // if ((rotated_v[i].y < 0 && v[i].y > 0 && exp_deltas[i].y > 0) ||
        //     (rotated_v[i].y > 0 && v[i].y < 0 && exp_deltas[i].y < 0)) begin
        //     $warning("Potential overflow in triangle edge y subtraction for vertex %0d", i);
        // end
        
        // if ((rotated_v[i].z < 0 && v[i].z > 0 && exp_deltas[i].z > 0) ||
        //     (rotated_v[i].z > 0 && v[i].z < 0 && exp_deltas[i].z < 0)) begin
        //     $warning("Potential overflow in triangle edge y subtraction for vertex %0d", i);
        // end

        // Check for out-of-bounds
        if (((exp_deltas[i].x >> `FX_FRAC_BITS) >  (`SCREEN_WIDTH - 1)) ||
            ((exp_deltas[i].x >> `FX_FRAC_BITS) < -(`SCREEN_WIDTH - 1))) begin
            $warning("Potential out-of-bounds in edge x subtraction for vertex %0d", i);
        end
        // Check for potential subtraction overflow
        if (((exp_deltas[i].y >> `FX_FRAC_BITS) >  (`SCREEN_HEIGHT - 1)) ||
            ((exp_deltas[i].y >> `FX_FRAC_BITS) < -(`SCREEN_HEIGHT - 1))) begin
            $warning("Potential out-of-bounds in edge y subtraction for vertex %0d", i);
        end
    end
    
    // Step 3: Compute edge values
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        logic signed [`FX_TOTAL_BITS-1:0] temp_x_sub, temp_y_sub;
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_x_mult, temp_y_mult;
        
        temp_x_sub = (exp_abs_pos.x - v[i].x);
        temp_y_sub = (exp_abs_pos.y - v[i].y); 
        
        // Check for potential subtraction overflow
        check_sub_overflow(exp_abs_pos.x, v[i].x, temp_x_sub, "edge function x");
        check_sub_overflow(exp_abs_pos.y, v[i].y, temp_y_sub, "edge function y");

        // if ((exp_abs_pos.x < 0 && v[i].x > 0 && temp_x_sub > 0) ||
        //     (exp_abs_pos.x > 0 && v[i].x < 0 && temp_x_sub < 0)) begin
        //     $warning("Potential overflow in edge x subtraction for vertex %0d", i);
        // end
        
        // if ((exp_abs_pos.y < 0 && v[i].y > 0 && temp_y_sub > 0) ||
        //     (exp_abs_pos.y > 0 && v[i].y < 0 && temp_y_sub < 0)) begin
        //     $warning("Potential overflow in edge y subtraction for vertex %0d", i);
        // end
        
        // Compute multiplication
        temp_x_mult = temp_x_sub * exp_deltas[i].y;
        temp_y_mult = temp_y_sub * exp_deltas[i].x;
        
        // Check for potential multiplication overflow by examining bit patterns
        if (temp_x_sub != 0 && exp_deltas[i].y != 0 && 
            (temp_x_mult / sext_f16_f32(exp_deltas[i].y)) != sext_f16_f32(temp_x_sub)) begin
            $warning("Potential overflow in edge x multiplication for vertex %0d", i);
        end
        
        if (temp_y_sub != 0 && exp_deltas[i].x != 0 &&
            (temp_y_mult / sext_f16_f32(exp_deltas[i].x)) != sext_f16_f32(temp_y_sub)) begin
            $warning("Potential overflow in edge y multiplication for vertex %0d", i);
        end
        
        // Calculate edge value with careful overflow checking
        overflow_check = {temp_x_mult[`FX_TOTAL_BITS*2-1], temp_x_mult} - {temp_y_mult[`FX_TOTAL_BITS*2-1], temp_y_mult};
        overflow_detected = (overflow_check[`FX_TOTAL_BITS*2:0] != {overflow_check[`FX_TOTAL_BITS*2], overflow_check[`FX_TOTAL_BITS*2-1:0]});
        
        if (overflow_detected) begin
            $warning("Potential overflow in edge calculation for vertex %0d", i);
        end
        
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
        
        // Check for multiplication overflow
        if (exp_deltas[0].y != 0 && exp_deltas[2].z != 0 && 
            (temp_y0z2_mult / sext_f16_f32(exp_deltas[2].z)) != sext_f16_f32(exp_deltas[0].y)) begin
            $warning("Potential overflow in coefficient A (y0*z2) calculation");
        end
        
        if (exp_deltas[0].z != 0 && exp_deltas[2].y != 0 && 
            (temp_z0y2_mult / sext_f16_f32(exp_deltas[2].y)) != sext_f16_f32(exp_deltas[0].z)) begin
            $warning("Potential overflow in coefficient A (z0*y2) calculation");
        end
        
        // Check for subtraction overflow
        overflow_check = {temp_y0z2_mult[`FX_TOTAL_BITS*2-1], temp_y0z2_mult} - {temp_z0y2_mult[`FX_TOTAL_BITS*2-1], temp_z0y2_mult};
        overflow_detected = (overflow_check[`FX_TOTAL_BITS*2:0] != {overflow_check[`FX_TOTAL_BITS*2], overflow_check[`FX_TOTAL_BITS*2-1:0]});
        
        if (overflow_detected) begin
            $warning("Potential overflow in coefficient A calculation");
        end
        
        coeff_A = temp_y0z2_mult - temp_z0y2_mult;
    end
    
    // Coefficient B = z0*x2 - x0*z2
    begin
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_z0x2_mult, temp_x0z2_mult;
        
        temp_z0x2_mult = exp_deltas[0].z * exp_deltas[2].x;
        temp_x0z2_mult = exp_deltas[0].x * exp_deltas[2].z;
        
        // Check for multiplication overflow
        if (exp_deltas[0].z != 0 && exp_deltas[2].x != 0 && 
            (temp_z0x2_mult / sext_f16_f32(exp_deltas[2].x)) != sext_f16_f32(exp_deltas[0].z)) begin
            $warning("Potential overflow in coefficient B (z0*x2) calculation");
        end
        
        if (exp_deltas[0].x != 0 && exp_deltas[2].z != 0 && 
            (temp_x0z2_mult / sext_f16_f32(exp_deltas[2].z)) != sext_f16_f32(exp_deltas[0].x)) begin
            $warning("Potential overflow in coefficient B (x0*z2) calculation");
        end
        
        // Check for subtraction overflow
        overflow_check = {temp_z0x2_mult[`FX_TOTAL_BITS*2-1], temp_z0x2_mult} - {temp_x0z2_mult[`FX_TOTAL_BITS*2-1], temp_x0z2_mult};
        overflow_detected = (overflow_check[`FX_TOTAL_BITS*2:0] != {overflow_check[`FX_TOTAL_BITS*2], overflow_check[`FX_TOTAL_BITS*2-1:0]});
        
        if (overflow_detected) begin
            $warning("Potential overflow in coefficient B calculation");
        end
        
        coeff_B = temp_z0x2_mult - temp_x0z2_mult;
    end
    
    // Coefficient C = x0*y2 - y0*x2
    begin
        logic signed [`FX_TOTAL_BITS*2-1:0] temp_x0y2_mult, temp_y0x2_mult;
        
        temp_x0y2_mult = exp_deltas[0].x * exp_deltas[2].y;
        temp_y0x2_mult = exp_deltas[0].y * exp_deltas[2].x;
        
        // Check for multiplication overflow
        if (exp_deltas[0].x != 0 && exp_deltas[2].y != 0 && 
            (temp_x0y2_mult / sext_f16_f32(exp_deltas[2].y)) != sext_f16_f32(exp_deltas[0].x)) begin
            $warning("Potential overflow in coefficient C (x0*y2) calculation");
        end
        
        if (exp_deltas[0].y != 0 && exp_deltas[2].x != 0 && 
            (temp_y0x2_mult / sext_f16_f32(exp_deltas[2].x)) != sext_f16_f32(exp_deltas[0].y)) begin
            $warning("Potential overflow in coefficient C (y0*x2) calculation");
        end
        
        // Check for subtraction overflow
        overflow_check = {temp_x0y2_mult[`FX_TOTAL_BITS*2-1], temp_x0y2_mult} - {temp_y0x2_mult[`FX_TOTAL_BITS*2-1], temp_y0x2_mult};
        overflow_detected = (overflow_check[`FX_TOTAL_BITS*2:0] != {overflow_check[`FX_TOTAL_BITS*2], overflow_check[`FX_TOTAL_BITS*2-1:0]});
        
        if (overflow_detected) begin
            $warning("Potential overflow in coefficient C calculation");
        end
        
        coeff_C = temp_x0y2_mult - temp_y0x2_mult;
    end
    
    // Step 6: Check for division by zero in dz calculations
    if (coeff_C == 0) begin
        $error("Division by zero detected in dz calculations - coefficient C is zero!");
        exp_dzdx = '0;
        exp_dzdy = '0;
    end else begin
        // Calculate dz/dx and dz/dy
        logic signed [`FX_TOTAL_BITS*2-1:0] div_result_dzdx, div_result_dzdy;
        
        div_result_dzdx = -(coeff_A / coeff_C);
        div_result_dzdy = -(coeff_B / coeff_C);
        
        // Check for potential overflow in division result
        if (coeff_A != 0 && ((-coeff_A) / coeff_C) * coeff_C != (-coeff_A)) begin
            $warning("Non-exact division in dzdx calculation - potential precision loss");
        end
        
        if (coeff_B != 0 && ((-coeff_B) / coeff_C) * coeff_C != (-coeff_B)) begin
            $warning("Non-exact division in dzdy calculation - potential precision loss");
        end
        
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
        
        // Check for subtraction overflow
        check_sub_overflow(v[0].x, exp_abs_pos.x, delta_x, "z delta_x");
        check_sub_overflow(v[0].y, exp_abs_pos.y, delta_y, "z delta_y");

        // if ((v[0].x < 0 && exp_abs_pos.x > 0 && delta_x > 0) ||
        //     (v[0].x > 0 && exp_abs_pos.x < 0 && delta_x < 0)) begin
        //     $warning("Potential overflow in z delta_x calculation");
        // end
        
        // if ((v[0].y < 0 && exp_abs_pos.y > 0 && delta_y > 0) ||
        //     (v[0].y > 0 && exp_abs_pos.y < 0 && delta_y < 0)) begin
        //     $warning("Potential overflow in z delta_y calculation");
        // end
        
        x_component = delta_x * exp_dzdx;
        y_component = delta_y * exp_dzdy;
        
        // Check for multiplication overflow
        if (delta_x != 0 && exp_dzdx != 0 && 
            (x_component / sext_f16_f32(exp_dzdx)) != sext_f16_f32(delta_x)) begin
            $warning("Potential overflow in z x_component calculation");
        end
        
        if (delta_y != 0 && exp_dzdy != 0 && 
            (y_component / sext_f16_f32(exp_dzdy)) != sext_f16_f32(delta_y)) begin
            $warning("Potential overflow in z y_component calculation");
        end
        
        // Z component with sign extension
        z_component = {{`FX_INT_BITS{v[0].z[`FX_TOTAL_BITS-1]}}, v[0].z, {`FX_FRAC_BITS{1'b0}}};
        
        // Check for addition overflow in final z calculation
        overflow_check = {x_component[`FX_TOTAL_BITS*2-1], x_component} + {y_component[`FX_TOTAL_BITS*2-1], y_component};
        if (overflow_check[`FX_TOTAL_BITS*2:0] != {overflow_check[`FX_TOTAL_BITS*2], overflow_check[`FX_TOTAL_BITS*2-1:0]}) begin
            $warning("Potential overflow in z calculation (x+y components)");
        end
        
        overflow_check = {overflow_check[`FX_TOTAL_BITS*2-1:0], 1'b0} + {z_component[`FX_TOTAL_BITS*2-1], z_component};
        if (overflow_check[`FX_TOTAL_BITS*2:0] != {overflow_check[`FX_TOTAL_BITS*2], overflow_check[`FX_TOTAL_BITS*2-1:0]}) begin
            $warning("Potential overflow in final z calculation");
        end
        
        exp_z_current = x_component + y_component + z_component;
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


    // Compute expected outputs
    simulate_expected_output(tv0, tv1, tv2, tmeta,
                 exp_abs_pos, exp_deltas, exp_edges,
                 exp_metadata, exp_dzdx, exp_dzdy, exp_z_current);

    
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
    $display("abs_pos: x=%0d, y=%0d, z=%0d", exp_abs_pos.x, exp_abs_pos.y, exp_abs_pos.z);
    $display("dzdx: %0d, dzdy: %0d", exp_dzdx, exp_dzdy);
    $display("z_current: %0d", exp_z_current);
    for (int i = 0; i < 3; i++) begin
        $display("delta_%0d: x= %0d, y=%0d, z=%0d", i, exp_deltas[i].x, exp_deltas[i].y, exp_deltas[i].z);
        $display("edge_%0d: %0d", i, exp_edges[i]);
    end

    // Print out real values
    $display("--- Real Values ---");
    $display("abs_pos: x=%0d, y=%0d, z=%0d", out_abs_pos.x, out_abs_pos.y, out_abs_pos.z);
    $display("dzdx: %0d, dzdy: %0d", out_dzdx, out_dzdy);
    $display("z_current: %0d", out_z_current);
    $display("delta_%0d: x= %0d, y=%0d, z=%0d", 0, out_delta_0.x, out_delta_0.y, out_delta_0.z);
    $display("delta_%0d: x= %0d, y=%0d, z=%0d", 1, out_delta_1.x, out_delta_1.y, out_delta_1.z);
    $display("delta_%0d: x= %0d, y=%0d, z=%0d", 2, out_delta_2.x, out_delta_2.y, out_delta_2.z);
    $display("edge_%0d: %0d", 0, out_edge_0);
    $display("edge_%0d: %0d", 1, out_edge_1);
    $display("edge_%0d: %0d", 2, out_edge_2);

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
