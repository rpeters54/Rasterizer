module tb_smul;

`define DATA_WIDTH 32

// Declare test variables
logic                            clk_i;
logic                            rst_n_i;
logic                            vld_i;
logic signed [`DATA_WIDTH-1:0]   left_i;
logic signed [`DATA_WIDTH-1:0]   right_i;

logic                            rdy_in_o;
logic                            vld_o;
logic signed [`DATA_WIDTH*2-1:0] product_o;

lp_mul #(.DATA_WIDTH(`DATA_WIDTH), .SIGNED(1)) mul_unit (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(vld_i),
    .left_i(left_i),
    .right_i(right_i),

    .rdy_in_o(rdy_in_o),
    .vld_o(vld_o),
    .product_o(product_o)
);

// Sample to drive clock
localparam CLK_PERIOD = 10;
always begin
    #(CLK_PERIOD/2) 
    clk_i<=~clk_i;
end

// Necessary to create Waveform
initial begin
    // Name as needed
    $dumpfile("tb_smul.vcd");
    $dumpvars(0);
end

initial begin
    reset();

    $display("Testing Multiplications");
    for (int i = 0; i < 1000; i++) begin
	    test_smul();
    end

    $finish();
end

// task to ensure the device is in the reset state
task reset();
    rst_n_i = 0; vld_i = 0; 
    clk_i = 0; left_i = 0; right_i = 0;
    for (int i = 0; i < 5; i++) begin
        @(negedge clk_i);	    
    end
    rst_n_i = 1;
    @(negedge clk_i);	   
endtask

// test computation of arbitrary fibonacci number
task test_smul();

    logic signed [`DATA_WIDTH*2-1:0] expected;

    // generate a new input
    left_i = $urandom(); 
    right_i = $urandom();
    vld_i = 1;

    // archive the expected result
    expected = left_i * right_i;

    $display("Testing %d * %d == %d", left_i, right_i, expected);

    // check the default state
    assert (rdy_in_o == 1) else $error("rdy_in not set by default");

    // lock in the input
    @(negedge clk_i);

    // clear the input
    left_i = 0; 
    right_i = 0;
    vld_i = 0;

    // clock until the output should be valid
    for (int i = 0; (i < `DATA_WIDTH || !vld_o); i++) begin
        @(negedge clk_i);
    end

    // check the output
    assert (vld_o == 1'b1) else $error("multiplication should complete in at most %d cycles", `DATA_WIDTH);
    assert (product_o == expected) else $error("Inaccurate multiplication result \nExpected: %d, Received %d", expected, product_o);
    assert (rdy_in_o == 1) else $error("device should return to ready after output becomes valid");
    @(negedge clk_i);

endtask


endmodule