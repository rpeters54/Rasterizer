module tb_fib;

// Declare test variables
logic clk, rst_n, vld_in, rdy_out, rdy_in, vld_out;
logic [7:0] fib_in;
logic [31:0] fib_out;

// Instantiate Design 
fib Fib (
	.clk(clk),
	.rst_n(rst_n),
	.fib_in(fib_in),
	.vld_in(vld_in),
	.rdy_out(rdy_out),
	.rdy_in(rdy_in),
	.fib_out(fib_out),
	.vld_out(vld_out)
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
    $dumpfile("tb_fib.vcd");
    $dumpvars(0);
end

initial begin
    // Test Goes Here
    rst_n = 1; vld_in = 0; rdy_out = 0;
    fib_in = 0; clk = 0;
    
    $display("Testing Base Case...");
    test_base();
    $display("SUCCESS");
    // Make sure to call finish so test exits
    $finish();
end

// task to ensure the device is in the reset state
task reset();
    rst_n = 0;
    for (int i = 0; i < 5; i++) begin
        @(posedge clk);	    
    end
    rst_n = 1;
endtask

task test_base();
    reset();
    assert (rdy_in == 1) else $error("rdy_in not set by default");
    assert (fib_out == 0) else $error("fib_out not zero by default");
    assert (vld_out == 0) else $error("vld_out not zero by default");
endtask

endmodule
