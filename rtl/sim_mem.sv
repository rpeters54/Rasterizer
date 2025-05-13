
module sim_mem
#(
    parameter ADDR_SIZE     = 8,
    parameter DATA_SIZE     = 8,
    parameter INITIAL_VALUE = 0
)
(
    input                           clk,
    input                           rst_n,
    input        [ADDR_SIZE-1:0]    read_addr,
    input        [ADDR_SIZE-1:0]    write_addr,
    input                           write_en,
    input        [DATA_SIZE-1:0]    data_in,  
    output logic [DATA_SIZE-1:0]    data_out
);

logic [DATA_SIZE-1:0] buffer [0:2**ADDR_SIZE-1];

initial begin
    int i;
    for (i = 0; i < 2**ADDR_SIZE; i++) begin
        buffer[i] = INITIAL_VALUE;
    end
end

assign data_out = buffer[read_addr];

always_ff @(posedge clk) begin
    if (!rst_n) begin
        for (int i = 0; i < 2**ADDR_SIZE; i++) begin
            buffer[i] <= INITIAL_VALUE;
        end
    end else if (write_en) begin
        buffer[write_addr] <= data_in;
    end
end

endmodule