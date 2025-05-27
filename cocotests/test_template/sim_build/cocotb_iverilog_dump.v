module cocotb_iverilog_dump();
initial begin
    $dumpfile("sim_build/async_fifo		.fst");
    $dumpvars(0, async_fifo		);
end
endmodule
