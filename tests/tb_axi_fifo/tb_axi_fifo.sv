`timescale 1ns/1ps

module tb_axi_fifo;

// Clock & reset
logic clk;
logic rst_n;

// Probe signals for three FIFOs: default, small, medium
// FIFO #1: default parameters (WIDTH=64, DEPTH=5)
logic                   rdy_out1, vld_in1;
logic [63:0]            data_in1;
logic [63:0]            data_out1;
logic                   rdy_in1,  vld_out1;

// FIFO #2: WIDTH=8, DEPTH=4
logic                   rdy_out2, vld_in2;
logic [7:0]             data_in2;
logic [7:0]             data_out2;
logic                   rdy_in2,  vld_out2;

// FIFO #3: WIDTH=16, DEPTH=8
logic                   rdy_out3, vld_in3;
logic [15:0]            data_in3;
logic [15:0]            data_out3;
logic                   rdy_in3,  vld_out3;

// Clock generator
localparam PERIOD = 10;
initial begin
clk = 0;
forever #(PERIOD/2) clk = ~clk;
end

// Necessary to create Waveform
initial begin
// Name as needed
$dumpfile("tb_axi_fifo.vcd");
$dumpvars(0);
end

// Instantiate FIFO #1: default parameters
axi_fifo #() fifo1 (
.clk      (clk),
.rst_n    (rst_n),
.rdy_out  (rdy_out1),
.vld_in   (vld_in1),
.data_in  (data_in1),
.data_out (data_out1),
.rdy_in   (rdy_in1),
.vld_out  (vld_out1)
);

// Instantiate FIFO #2: WIDTH=8, DEPTH=4
axi_fifo #( .WIDTH(8), .DEPTH(4) ) fifo2 (
.clk      (clk),
.rst_n    (rst_n),
.rdy_out  (rdy_out2),
.vld_in   (vld_in2),
.data_in  (data_in2),
.data_out (data_out2),
.rdy_in   (rdy_in2),
.vld_out  (vld_out2)
);

// Instantiate FIFO #3: WIDTH=16, DEPTH=8
axi_fifo #( .WIDTH(16), .DEPTH(8) ) fifo3 (
.clk      (clk),
.rst_n    (rst_n),
.rdy_out  (rdy_out3),
.vld_in   (vld_in3),
.data_in  (data_in3),
.data_out (data_out3),
.rdy_in   (rdy_in3),
.vld_out  (vld_out3)
);

logic [63:0] fifo_64 [$];
logic [15:0] fifo_16 [$];
logic [7:0]  fifo_8  [$];

logic [63:0] count_64;
logic [63:0] count_16;
logic [63:0] count_8;

initial begin
    count_64 = 0;
    count_16 = 0;
    count_8 = 0;
end

 

  // Task: enqueue N words into a given FIFO instance
  task automatic push_words;
    input  int          id;
    input  int          n;
    begin
        logic  [63:0] big_rand;
        int i;
        for (i=0; i<n; i++) begin
        unique case (id)
          1: begin
                // generate a pattern for FIFO1
                wait (rdy_in1); // ensure ready
                big_rand = {$urandom, $urandom};
                fifo_64 = {fifo_64, big_rand};
                @(posedge clk);
                data_in1 = fifo_64[$];
                vld_in1  = 1;
                @(posedge clk);
                vld_in1  = 0;
             end

          2: begin
                wait (rdy_in2);
                fifo_8 = {fifo_8, $urandom[7:0]};
                @(posedge clk);
                data_in2 = fifo_8[$];
                vld_in2  = 1;
                @(posedge clk);
                vld_in2  = 0;
             end

          3: begin
                wait (rdy_in3);
                fifo_16 = {fifo_16, $urandom[15:0]};
                @(posedge clk);
                data_in3 = fifo_16[$];
                vld_in3  = 1;
                @(posedge clk);
                vld_in3  = 0;
             end
        endcase
      end
    end
  endtask

  // Task: dequeue N words from a given FIFO instance and check correctness
  task automatic pop_and_check;
    input  int          id;
    input  int          n;
    begin

        int i;
        for (i=0; i<n; i++) begin
        unique case (id)
          1: begin
                // check valid and data
                assert (vld_out1) else $error("FIFO1 underflow on pop #%0d", i);
                assert (data_out1 == fifo_64[count_64])
                    else $error("FIFO1 data mismatch: got %h, expected %h", data_out1, fifo_64[count_64]);
                count_64 += 1;
                @(posedge clk);
                rdy_out1 = 1;
                @(posedge clk);
                rdy_out1 = 0;
             end

          2: begin
                // check valid and data
                assert (vld_out2) else $error("FIFO2 underflow on pop #%0d", i);
                assert (data_out2 == fifo_8[count_8])
                    else $error("FIFO2 data mismatch: got %h, expected %h", data_out2, fifo_8[count_8]);
                count_8 += 1;
                @(posedge clk);
                rdy_out2 = 1;
                @(posedge clk);
                rdy_out2 = 0;
             end

          3: begin
                // check valid and data
                assert (vld_out3) else $error("FIFO3 underflow on pop #%0d", i);
                assert (data_out3 == fifo_16[count_16])
                    else $error("FIFO3 data mismatch: got %h, expected %h", data_out3, fifo_16[count_16]);
                count_16 += 1;
                @(posedge clk);
                rdy_out3 = 1;
                @(posedge clk);
                rdy_out3 = 0;
             end
        endcase
      end
    end
  endtask



  // Main test sequence
  initial begin

    // Wait for reset deassertion
    rst_n = 0;
    @(negedge clk);
    rst_n = 1;
    @(negedge clk);

    // Test 1: Fill then drain each FIFO fully
    push_words(1, 5);     // FIFO1 depth=5
    pop_and_check(1, 5);

    push_words(2, 4);     // FIFO2 depth=4
    pop_and_check(2, 4);

    push_words(3, 8);     // FIFO3 depth=8
    pop_and_check(3, 8);

    // Test 2: Push/Pop interleaved, random counts
    push_words(1, 3);
    pop_and_check(1, 2);
    push_words(1, 4);
    pop_and_check(1, 5);

    // Test 3: Full/Empty flag checks
    // Attempt to overfill
    push_words(2, 4);
    @(posedge clk);
    vld_in2 = 1; data_in2 = 8'hFF;
    @(posedge clk);
    vld_in2 = 0;
    assert (!rdy_in2) else $error("FIFO2 allowed write when full");
    pop_and_check(2, 4);

    // Attempt to over-empty
    @(posedge clk);
    rdy_out3 = 1;
    @(posedge clk);
    rdy_out3 = 0;
    assert (!vld_out3) else $error("FIFO3 asserted valid when empty");

    $display("All tests passed.");
    $finish;
  end

endmodule