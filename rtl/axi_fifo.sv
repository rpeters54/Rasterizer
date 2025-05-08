
module axi_fifo 
#(parameter DATA_WIDTH=64, parameter STAGES=1)
(
    input                           clk,
    input                           rst_n,
    input                           rdy_out,
    input                           vld_in,
    input        [DATA_WIDTH-1:0]   data_in,
    output logic [DATA_WIDTH-1:0]   data_out,
    output                          rdy_in,
    output                          vld_out
);

logic [DATA_WIDTH-1:0]      buffer [0:STAGES-1];
logic [$clog2(STAGES)-1:0]  write_ptr;
logic [$clog2(STAGES)-1:0]  read_ptr;

logic [$clog2(STAGES):0]  count;


always_comb begin
    vld_out        = !(count == 0);
    rdy_in         =  (count < STAGES);
end

always_ff @(posedge clk) begin
    if (!rst_n) begin
        write_ptr    <= '0;
        read_ptr     <= '0;
        count        <= '0;
        data_out     <= buffer[0];
    end else begin 
        if (vld_in && rdy_in) begin
            buffer[write_ptr] <= data_in;
            write_ptr         <= next_ptr_index(write_ptr);
        end
        if (rdy_out) begin
            data_out  <= buffer[read_ptr];
            read_ptr  <= next_ptr_index(read_ptr);
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

function [$clog2(STAGES)-1:0] next_ptr_index(
    input [$clog2(STAGES)-1:0] ptr
);

if (ptr >= (STAGES-1)) begin
    return '0;
end else begin
    return ptr + '1;
end

endfunction


endmodule