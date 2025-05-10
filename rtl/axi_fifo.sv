
module axi_fifo 
#(
    parameter WIDTH=64, 
    parameter DEPTH=5,
    parameter PTR_WIDTH = $clog2(DEPTH)
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

parameter COUNT_WIDTH = ($clog2(DEPTH)-1 > 3) ? $clog2(DEPTH)-1 : 3;

logic [WIDTH-1:0]    buffer [0:DEPTH-1];
logic [PTR_WIDTH:0]  write_ptr;
logic [PTR_WIDTH:0]  read_ptr;

logic [COUNT_WIDTH:0]  count;

initial begin
    write_ptr    = '0;
    read_ptr     = '0;
    count        = '0;
    data_out     = buffer[0];

    // Display error if WIDTH is 0 or less.
    if (WIDTH <= 0) begin
        $error("%m ** Illegal condition **, you used %d WIDTH", WIDTH);
    end
    // Display error if DEPTH is 0 or less.
    if (DEPTH <= 0) begin
        $error("%m ** Illegal condition **, you used %d DEPTH", DEPTH);
    end

end // end initial


always_comb begin
    vld_out        = !(count == 0);
    rdy_in         =  (count < DEPTH);
end

logic [PTR_WIDTH:0] next_read_ptr;

always_ff @(posedge clk) begin
    if (!rst_n) begin
        write_ptr    <= '0;
        read_ptr     <= '0;
        count        <= '0;
        data_out     <= buffer[0];
    end else begin 
        if (vld_in && rdy_in) begin
            buffer[write_ptr[PTR_WIDTH-1:0]] <= data_in;
            if (count == 0) begin
                data_out <= data_in;
            end
            if (write_ptr >= (DEPTH-1)) begin
                write_ptr <= 0;
            end else begin
                write_ptr <= write_ptr + 1;
            end
        end
        if (vld_out && rdy_out) begin
            if (read_ptr >= (DEPTH-1)) begin
                next_read_ptr = 0;
            end else begin
                next_read_ptr = read_ptr + 1;
            end
            data_out  <= buffer[next_read_ptr[PTR_WIDTH-1:0]];
            read_ptr  <= next_read_ptr;
        end
        if (vld_in && rdy_in && vld_out && rdy_out) begin
            count <= count; 
        end else if (vld_in && rdy_in) begin
            count <= count + 1; 
        end else if (vld_out && rdy_out) begin
            count <= count - 1;
        end
    end
end


endmodule