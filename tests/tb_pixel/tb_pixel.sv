`include "../../rtl/raster_defines.svh"
`include "../../rtl/struct_defines.svh"

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

    // in_abs_pos =    '{default:'0};
    // in_delta_0 =    '{default:'0};
    // in_delta_1 =    '{default:'0};
    // in_delta_2 =    '{default:'0};
    // in_edge_0 =     '{default:'0};
    // in_edge_1 =     '{default:'0};
    // in_edge_2 =     '{default:'0};
    // in_metadata =   '{default:'0};
    // in_dzdx =       '{default:'0};
    // in_dzdy =       '{default:'0};
    // in_z_current =  '{default:'0};

    // Release reset after a few cycles
    repeat (2) @(posedge clk);
    rst_n = 1;

    // Wait for DUT ready
    wait (rdy_in == 1);

    

    $finish;
  end

endmodule