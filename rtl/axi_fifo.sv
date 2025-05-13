
module axi_fifo 
#(
    parameter WIDTH=64, 
    parameter MIN_DEPTH=4
)
(
    input                           clk,
    input                           rst_n,
    input                           rdy_out,
    input                           vld_in,
    input        [WIDTH-1:0]        data_in,
    output logic [WIDTH-1:0]        data_out,
    output logic                    rdy_in,
    output logic                    vld_out
);

parameter DEPTH = 2**$clog2(MIN_DEPTH);
parameter PTR_WIDTH = $clog2(DEPTH);

logic [WIDTH-1:0]    buffer [0:DEPTH-1];
logic [PTR_WIDTH:0]  write_ptr;
logic [PTR_WIDTH:0]  read_ptr;

initial begin
    write_ptr    = '0;
    read_ptr     = '0;
    data_out     = '0;
    for (int i = 0; i < DEPTH; i++) begin
        buffer[i] = 0;
    end

    // Display error if WIDTH is 0 or less.
    if (WIDTH <= 0) begin
        $error("%m ** Illegal condition **, you used %d WIDTH", WIDTH);
    end
    // Display error if DEPTH is 0 or less.
    if (DEPTH <= 0) begin
        $error("%m ** Illegal condition **, you used %d DEPTH", DEPTH);
    end

end


always_comb begin
    vld_out        = write_ptr != read_ptr;
    rdy_in         = !(write_ptr[PTR_WIDTH] != read_ptr[PTR_WIDTH] && write_ptr[PTR_WIDTH-1:0] == read_ptr[PTR_WIDTH-1:0]);
end

logic [PTR_WIDTH:0] next_read_ptr;

always_ff @(posedge clk) begin
    if (!rst_n) begin
        write_ptr    <= '0;
        read_ptr     <= '0;
        data_out     <= '0;
    end else begin 

        if (vld_in && rdy_in) begin
            buffer[write_ptr[PTR_WIDTH-1:0]] <= data_in;
            write_ptr <= write_ptr + 1;
            if (!vld_out) begin
                data_out  <= data_in;
            end
        end

        if (vld_out && rdy_out) begin
            next_read_ptr = read_ptr + 1;
            data_out  <= buffer[next_read_ptr[PTR_WIDTH-1:0]];
            read_ptr  <= next_read_ptr;
        end
    end
end


endmodule