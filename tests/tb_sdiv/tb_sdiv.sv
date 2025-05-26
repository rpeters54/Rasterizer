module tb_sdiv;

`define DATA_WIDTH 32
`define FRAC_BITS   8

// Declare test variables
logic                          clk_i;
logic                          rst_n_i;
logic                          vld_i;
logic signed [`DATA_WIDTH-1:0] numer_i;
logic signed [`DATA_WIDTH-1:0] denom_i;

logic                          rdy_in_o;
logic                          vld_o;
logic signed [`DATA_WIDTH-1:0] quot_o;

lp_div #(.DATA_WIDTH(`DATA_WIDTH), .FRAC_BITS(`FRAC_BITS), .SIGNED(1)) div_unit (
    .clk_i(clk_i),
    .rst_n_i(rst_n_i),
    .vld_i(vld_i),
    .numer_i(numer_i),
    .denom_i(denom_i),

    .rdy_in_o(rdy_in_o),
    .vld_o(vld_o),
    .quot_o(quot_o)
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
    $dumpfile("tb_sdiv.vcd");
    $dumpvars(0);
end

initial begin
    reset();

    $display("Testing Divisions");
    for (int i = 0; i < 100; i++) begin
	    test_sdiv();
    end

    $finish();
end

// task to ensure the device is in the reset state
task reset();
    rst_n_i = 0; vld_i = 0; 
    clk_i = 0; numer_i = 0; denom_i = 0;
    for (int i = 0; i < 5; i++) begin
        @(negedge clk_i);	    
    end
    rst_n_i = 1;
    @(negedge clk_i);	   
endtask

// test computation of arbitrary fibonacci number
task test_sdiv();

    logic [`DATA_WIDTH-1:0] expected;

    // generate a new input
    numer_i = $urandom(); 
    denom_i = $urandom();
    vld_i = 1;

    // archive the expected result
    expected = fixed_point_div_signed(numer_i, denom_i);

    $display("Testing %d / %d == %d", numer_i, denom_i, expected);

    // check the default state
    assert (rdy_in_o == 1) else $error("rdy_in not set by default");

    // lock in the input
    @(negedge clk_i);

    // clear the input
    numer_i = 0; 
    denom_i = 0;
    vld_i = 0;

    // clock until the output should be valid
    for (int i = 0; i < `DATA_WIDTH + `FRAC_BITS; i++) begin
        @(negedge clk_i);
    end

    // check the output
    assert (vld_o == 1'b1) else $error("division should complete in %d cycles", `DATA_WIDTH + `FRAC_BITS);
    assert (quot_o == expected) else $error("Inaccurate division result \nExpected: %d, Received %d", expected, quot_o);
    assert (rdy_in_o == 1) else $error("device should return to ready after output becomes valid");
    @(negedge clk_i);

endtask

function [`DATA_WIDTH-1:0] fixed_point_div_signed(
    input [`DATA_WIDTH-1:0] numer_i,
    input [`DATA_WIDTH-1:0] denom_i
);
    // Extended width to hold intermediate result
    logic [`DATA_WIDTH+`FRAC_BITS-1:0] shifted_numer, shifted_denom, shifted_result;
    
    // Sign handling
    logic numer_sign, denom_sign, result_sign;
    logic [`DATA_WIDTH-1:0] abs_numer, abs_denom;
    logic [`DATA_WIDTH-1:0] abs_result;

    // Extract signs
    numer_sign = numer_i[`DATA_WIDTH-1];
    denom_sign = denom_i[`DATA_WIDTH-1];
    result_sign = numer_sign ^ denom_sign;

    // Get absolute values using two's complement
    abs_numer = numer_sign ? (~numer_i + 1'b1) : numer_i;
    abs_denom = denom_sign ? (~denom_i + 1'b1) : denom_i;

    // Perform fixed-point division with shifted numerator
    shifted_numer  = {abs_numer, {`FRAC_BITS{1'b0}}};
    shifted_denom  = {{`FRAC_BITS{1'b0}}, abs_denom};
    shifted_result = shifted_numer / shifted_denom;

    // Take bottom DATA_WIDTH bits
    abs_result = shifted_result[`DATA_WIDTH-1:0];

    // Apply sign
    return result_sign ? (~abs_result + 1'b1) : abs_result;
endfunction


endmodule