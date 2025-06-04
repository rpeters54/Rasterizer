module cocotb_iverilog_dump();
initial begin
    $dumpfile("sim_build/raster		.fst");
    $dumpvars(0, raster		);
end
endmodule
