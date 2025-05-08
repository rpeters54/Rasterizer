`include "../../rtl/raster_defines.svh"

module tb_fib;

// Declare test variables
logic                                   clk,
logic                                   rst_n,
logic                                   rdy_out,
logic                                   vld_in,
coord_3d_t                              v0,
coord_3d_t                              v1,
coord_3d_t                              v2,
metadata_t                              in_metadata,

logic                                   rdy_in,
logic                                   vld_out,
coord_3d_t                              out_abs_pos;
coord_3d_t                              out_delta_0;
coord_3d_t                              out_delta_1;
coord_3d_t                              out_delta_2;
logic signed [`FX_TOTAL_BITS*2-1:0]     out_edge_0;
logic signed [`FX_TOTAL_BITS*2-1:0]     out_edge_1;
logic signed [`FX_TOTAL_BITS*2-1:0]     out_edge_2;
logic        [3:0]                      out_color;
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

initial begin

    clk=0;
    rst_n=0;
    rdy_out=0;
    vld_in=0;

    v0='{ default: '0 };
    v1='{ default: '0 };
    v2='{ default: '0 };
    in_metadata='{ default: '0 };
    
    #CLK_PERIOD
    v0.x = (1 << `FX_FRAC_BITS);
    v0.y = (14 << `FX_FRAC_BITS);
    v0.z = (512 << `FX_FRAC_BITS);

    v1.x = (7 << `FX_FRAC_BITS);
    v1.y = (2 << `FX_FRAC_BITS);
    v1.z = (512 << `FX_FRAC_BITS);

    v2.x = (12 << `FX_FRAC_BITS);
    v2.y = (15 << `FX_FRAC_BITS);
    v2.z = (512 << `FX_FRAC_BITS);

    in_metadata.color = 1;
    in_metadata.tile_y = 0;
    in_metadata.tile_x = 0;

    #CLK_PERIOD rst_n = 1;
    wait(rdy_in == 1)
    $finish();
end

endmodule
