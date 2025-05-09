`include "../../rtl/raster_defines.svh"

module tb_raster;

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
tile_processor tile_proc (.*);

// Sample to drive clock
localparam CLK_PERIOD = 10;
always begin
    #(CLK_PERIOD/2) 
    clk<=~clk;
end

// Necessary to create Waveform
initial begin
    // Name as needed
    $dumpfile("tb_raster.vcd");
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

    // Example triangle: flat plane, expect zero gradients
    run_triangle_test(
        make_coord(1, 14, 512),
        make_coord(7, 2, 512),
        make_coord(12, 15, 512),
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
    output logic signed [`FX_TOTAL_BITS*2-1:0] exp_z_current
);
    coord_3d_t tmp_deltas [0:2];
    logic signed [`FX_TOTAL_BITS*2-1:0] det;
    logic signed [`FX_TOTAL_BITS*2-1:0] dzx_udiv, dzy_udiv;
    coord_3d_t start;

    // tile-to-coord
    start = tile_processor.tile_to_coord(gmeta);
    exp_abs_pos = start;

    // deltas
    tile_processor.compute_deltas('{gv1, gv2, gv0}, '{gv0, gv1, gv2}, tmp_deltas);
    exp_deltas = tmp_deltas;

    // edges
    for (int i = 0; i < 3; i++) begin
        exp_edges[i] = tile_processor.compute_edge(start, (i==0?gv0:(i==1?gv1:gv2)), tmp_deltas[i]);
    end
    exp_metadata = gmeta;

    // determinant and unscaled dz
    det      = tile_processor.compute_det(tmp_deltas);
    dzx_udiv = tile_processor.compute_dzdx_undiv(tmp_deltas, '{gv0,gv1,gv2});
    dzy_udiv = tile_processor.compute_dzdy_undiv(tmp_deltas, '{gv0,gv1,gv2});

    // scaled dz
    exp_dzdx = tile_processor.scale_dz(dzx_udiv, det);
    exp_dzdy = tile_processor.scale_dz(dzy_udiv, det);

    // z current
    exp_z_current = tile_processor.compute_z(gv0, start, exp_dzdx, exp_dzdy);
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
    wait (rdy_in == 1);

    // Apply inputs
    v0 = tv0;
    v1 = tv1;
    v2 = tv2;
    in_metadata = tmeta;

    // Start transaction
    vld_in = 1;
    @(negedge clk);
    vld_in = 0;
    wait (vld_out == 1);

    // Assertions 
    // Assertions for all outputs
    assert (out_abs_pos == exp_abs_pos)
      else $error("abs_pos mismatch: %p vs %p", out_abs_pos, exp_abs_pos);
    for (int i = 0; i < 3; i++) begin
      assert (out_delta_[i] == exp_deltas[i])
        else $error("delta_%0d mismatch: %p vs %p", i, out_delta_[i], exp_deltas[i]);
      assert (out_edge_[i] == exp_edges[i])
        else $error("edge_%0d mismatch: %0d vs %0d", i, out_edge_[i], exp_edges[i]);
    end
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
    @(negedge clk);
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

return '{colors:colors_in, tile_x:tile_x_in, tile_y:tile_y_in};

endfunction



endmodule
