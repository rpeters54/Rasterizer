module async_fifo
#(
    parameter DATA_SIZE = 32,
    parameter ADDRESS_SIZE = 4
)
(
    input                           wclk_i,
    input                           wrst_n_i,
    input                           wr_i, 
    input        [DATA_SIZE-1:0]    wdata_i,
    output logic                    wfull_o,
    
    input                           rclk_i,
    input                           rrst_n_i,
    input                           rd_i, 
    output logic [DATA_SIZE-1:0]    rdata_o, 
    output logic                    rempty_o
);
	localparam	DW = DATA_SIZE, AW = ADDRESS_SIZE;

    wire            wfull_next;
	wire [AW-1:0]   waddr;
    wire [AW:0]	    wgraynext, wbinnext;
	reg	 [AW:0]     wgray, wbin, wq2_rgray, wq1_rgray;
	
    wire            rempty_next;
    wire [AW-1:0]   raddr;
	wire [AW:0]     rgraynext, rbinnext;
    reg	 [AW:0]     rgray, rbin, rq2_wgray, rq1_wgray;

	reg	 [DW-1:0]   mem [0:((1<<AW)-1)];

    // Memory read and write address
    assign waddr = wbin[AW-1:0];
	assign raddr = rbin[AW-1:0];

    // Calculate the next write read and write binary counters
	assign wbinnext = wbin + { {(AW){1'b0}}, ((wr_i)&&(!wfull_o)) };
	assign rbinnext = rbin + { {(AW){1'b0}}, ((rd_i)&&(!rempty_o)) };

    // Get next value for read and write gray encoded counter
    assign wgraynext = (wbinnext >> 1) ^ wbinnext;
    assign rgraynext = (rbinnext >> 1) ^ rbinnext;

    // Calculate the next full and empty signals
    assign wfull_next  = (wgraynext == { ~wq2_rgray[AW:AW-1], wq2_rgray[AW-2:0] });
	assign rempty_next = (rgraynext == rq2_wgray);

	// Write to the FIFO on a clock
	always_ff @(posedge wclk_i) begin
        if ((wr_i)&&(!wfull_o)) begin
            mem[waddr] <= wdata_i;
        end
    end

    // Read from the memory
	assign	rdata_o = mem[raddr];

    initial begin
        { wq2_rgray,  wq1_rgray } = 0;
        { wbin, wgray }           = 0;
        wfull_o                   = 0;
    end
	always_ff @(posedge wclk_i or negedge wrst_n_i) begin
        if (!wrst_n_i) begin
            { wq2_rgray, wq1_rgray } <= 0;
            { wbin, wgray }          <= 0;
            wfull_o                  <= 0;
        end else begin
            // Write clock crossing domains
            { wq2_rgray, wq1_rgray } <= { wq1_rgray, rgray };
            // Register the write gray code pointers
            { wbin, wgray }          <= { wbinnext, wgraynext };
            // Update current fullness
            wfull_o                  <= wfull_next;
        end
    end

    initial begin
        { rq2_wgray,  rq1_wgray } = 0;
        { rbin, rgray } = 0;
        rempty_o = 1;
    end
	always_ff @(posedge rclk_i or negedge rrst_n_i) begin
        if (!rrst_n_i) begin
            { rq2_wgray, rq1_wgray } <= 0;
            { rbin, rgray }          <= 0;
            rempty_o                 <= 1;
        end else begin
            // Read clock crossing domains
            { rq2_wgray, rq1_wgray } <= { rq1_wgray, wgray };
            // Register the read gray code pointers
            { rbin, rgray }          <= { rbinnext, rgraynext };
            // Update current emptiness
            rempty_o                 <= rempty_next;
        end
    end

endmodule