module cocotb_iverilog_dump();
initial begin
    $dumpfile("sim_build/pixel_processor		.fst");
    $dumpvars(0, pixel_processor		);
end
endmodule
