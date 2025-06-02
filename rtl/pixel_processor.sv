
`timescale 1ns/1ps
`include "raster_defines.svh"

module pixel_processor(
    input  wire                                 clk_i,
    input  wire                                 rst_n_i,
    input  wire                                 rdy_out_i,
    input  wire                                 vld_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     abs_pos_x_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     abs_pos_y_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     delta_0_x_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     delta_0_y_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     delta_1_x_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     delta_1_y_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     delta_2_x_i,
    input  wire signed [`FX_TOTAL_BITS-1:0]     delta_2_y_i,
    input  wire signed [`FX_TOTAL_BITS*2-1:0]   edge_0_i,
    input  wire signed [`FX_TOTAL_BITS*2-1:0]   edge_1_i,
    input  wire signed [`FX_TOTAL_BITS*2-1:0]   edge_2_i,
    input  wire        [`COLOR_BITS-1:0]        color_i,
    input  wire        [`TILE_COLUMNS_BITS-1:0] tile_x_i,
    input  wire        [`TILE_ROWS_BITS-1:0]    tile_y_i,  
    input  wire signed [`FX_TOTAL_BITS*2-1:0]   dzdx_i,
    input  wire signed [`FX_TOTAL_BITS*2-1:0]   dzdy_i,
    input  wire signed [`FX_TOTAL_BITS*2-1:0]   z_i,

    output reg                                  rdy_in_o,
    output reg                                  vld_o,
    output wire        [`COLOR_BITS-1:0]        color_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     pixel_x_o,
    output wire signed [`FX_TOTAL_BITS-1:0]     pixel_y_o
);

////////////////////////////////////////////////////////////////////

// dffram modules for color and z buffer
logic [`FX_TOTAL_BITS*2-1:0] dffram_data_out [0:1];
logic                        dffram_en       [0:1];
logic [3:0]                  dffram_we       [0:1];
logic [`FX_TOTAL_BITS*2-1:0] dffram_data_in  [0:1];
logic [`TILE_AREA_BITS-2:0]  dffram_addr     [0:1];


DFFRAM128x32 ram0 (
    .CLK(clk_i),
    .WE0(dffram_we[0]),
    .EN0(dffram_en[0]),
    .Di0(dffram_data_in[0]),
    .Do0(dffram_data_out[0]),
    .A0(dffram_addr[0])
);

DFFRAM128x32 ram1 (
    .CLK(clk_i),
    .WE0(dffram_we[1]),
    .EN0(dffram_en[1]),
    .Di0(dffram_data_in[1]),
    .Do0(dffram_data_out[1]),
    .A0(dffram_addr[1])
);

////////////////////////////////////////////////////////////////////

coord_2d_t                                         prev_coord_position;
coord_2d_t                                         coord_position;
logic        [`TILE_AREA_BITS-1:0]                 addr_position;
logic                                              dirty_bit, dffram_read_sel, dffram_write_sel;
               
coord_2d_t                                         delta_0, delta_1, delta_2;
logic signed [`FX_TOTAL_BITS*2-1:0]                edge_0, edge_1, edge_2;
metadata_t                                         metadata;
logic signed [`FX_TOTAL_BITS*2-1:0]                dzdx, dzdy, z;

// temps needed to get iverilog working :(
logic [(`TILE_ROWS_BITS + `TILE_COLUMNS_BITS)-1:0] prev_tile_coord;
logic [(`TILE_ROWS_BITS + `TILE_COLUMNS_BITS)-1:0] new_tile_coord;
assign prev_tile_coord = {metadata.tile_y, metadata.tile_x};
assign new_tile_coord = {tile_y_i, tile_x_i};

// Output the color and pixel coordinates
assign color_o   = vld_o ? dffram_data_out[dffram_read_sel][`COLOR_BITS-1:0] : 0;
assign pixel_x_o = vld_o ? prev_coord_position.x                             : 0;
assign pixel_y_o = vld_o ? prev_coord_position.y                             : 0;

////////////////////////////////////////////////////////////////////

typedef enum logic [2:0] {
    IDLE         = 3'd0,
    FORWARDING_0 = 3'd1,
    FORWARDING_1 = 3'd2,
    FLUSHING     = 3'd3,
    PROCESS      = 3'd4
} pixel_state_t;

pixel_state_t present_state, next_state;

// State machine
always_ff @(posedge clk_i) begin
    if (!rst_n_i) begin
        present_state <= IDLE;
    end else begin
        present_state <= next_state;
    end
end

always_comb begin
    case (present_state)
        IDLE: begin
            if (vld_i) begin
                if (prev_tile_coord == new_tile_coord || dirty_bit) begin
                    next_state = FORWARDING_0;
                end else begin
                    next_state = FORWARDING_1;
                end
            end else begin
                next_state = IDLE;
            end
        end
        FORWARDING_0 : begin
            next_state = PROCESS;
        end
        FORWARDING_1 : begin
            next_state = FLUSHING;
        end       
        FLUSHING : begin
            if (addr_position < `TILE_AREA-1) begin
                next_state = FLUSHING;
            end else begin
                next_state = FORWARDING_0;
            end
        end
        PROCESS: begin
            if (addr_position < `TILE_AREA-1) begin
                next_state = PROCESS;
            end else begin
                next_state = IDLE;
            end
        end
        default: begin
            next_state = IDLE;
        end
    endcase
end

////////////////////////////////////////////////////////////////////

// temp coord used to determine what coord the previous tile started at
coord_2d_t temp_coord;
assign temp_coord.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, metadata.tile_x, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
assign temp_coord.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, metadata.tile_y, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};


// compute edge offset
logic signed [`FX_TOTAL_BITS*2-1:0] temp_edge_row_off [0:`NUM_VERTICES-1];
logic signed [`FX_TOTAL_BITS*2-1:0] temp_edge_col_off [0:`NUM_VERTICES-1];

always_comb begin
    edge_row_offset(delta_0, temp_edge_row_off[0]);
    edge_row_offset(delta_1, temp_edge_row_off[1]);
    edge_row_offset(delta_2, temp_edge_row_off[2]);
    edge_column_offset(delta_0, temp_edge_col_off[0]);
    edge_column_offset(delta_1, temp_edge_col_off[1]);
    edge_column_offset(delta_2, temp_edge_col_off[2]);
end

// compute z change per pixel
logic signed [`FX_TOTAL_BITS*2-1:0] temp_z_row_off;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_z_col_off;

always_comb begin
    z_row_offset(dzdx, dzdy, temp_z_row_off);
    temp_z_col_off = dzdx;
end

// Set up read and write addresses for pipelining
always_comb begin
    logic [`TILE_AREA_BITS-1:0] addr_position_plus_1;
    addr_position_plus_1 = addr_position + 1;

    dffram_read_sel               = addr_position[0];
    dffram_write_sel              = ~dffram_read_sel;
    dffram_addr[dffram_read_sel]  = addr_position_plus_1[`TILE_AREA_BITS-1:1];
    dffram_addr[dffram_write_sel] = addr_position[`TILE_AREA_BITS-1:1];
    dffram_en[dffram_read_sel]    = (present_state == PROCESS || present_state == FLUSHING || present_state == FORWARDING_0 || present_state == FORWARDING_1);
    dffram_en[dffram_write_sel]   = (present_state == PROCESS || present_state == FLUSHING);
    dffram_we[dffram_read_sel]    = 4'd0;
    dffram_we[dffram_write_sel]   = {4{present_state == PROCESS || present_state == FLUSHING}};
end

// z/color buffer writes
always_comb begin
    logic [`FX_TOTAL_BITS*2-1:0]                  mem_z;
    logic [`FX_TOTAL_BITS*2-`FX_TOTAL_BITS/2-1:0] compacted_z;

    extract_expand_z(dffram_data_out[dffram_read_sel], mem_z);
    compact_z(z, compacted_z);

    dffram_data_in = '{0, 0};

    if (present_state == PROCESS) begin

        // edge and depth check
        // check if inside the polygon
        if ((edge_0 >= 0) && (edge_1 >= 0) && (edge_2 >= 0)) begin
            // write the value if it is the lowest seen z, or memory is still dirty
            if ((z < mem_z || dirty_bit)) begin
                dffram_data_in[dffram_write_sel] = {compacted_z, metadata.color};
            end else begin
                dffram_data_in[dffram_write_sel] = dffram_data_out[dffram_read_sel];
            end 
        end else begin
            // write the base value if the memory is still dirty
            if (dirty_bit) begin
                dffram_data_in[dffram_write_sel] = {{1'b0, {2*`FX_TOTAL_BITS-`FX_TOTAL_BITS/2-1{1'b1}}}, {`COLOR_BITS{1'b0}}};
            end else begin
                dffram_data_in[dffram_write_sel] = dffram_data_out[dffram_read_sel];
            end
        end
    end else if (present_state == FLUSHING) begin
        // reset the values in the ram
        dffram_data_in[dffram_write_sel] = {{1'b0, {2*`FX_TOTAL_BITS-`FX_TOTAL_BITS/2-1{1'b1}}}, {`COLOR_BITS{1'b0}}};
    end
end

////////////////////////////////////////////////////////////////////

// Process each pixel in the tile
always_ff @(posedge clk_i) begin

    if (!rst_n_i) begin
        // Reset Internal Registers
        coord_position.x      <= 0; coord_position.y      <= 0;
        prev_coord_position.x <= 0; prev_coord_position.y <= 0;
        addr_position         <= 0;

        edge_0    <= 0; edge_1    <= 0; edge_2    <= 0;
        delta_0.x <= 0; delta_0.y <= 0;
        delta_1.x <= 0; delta_1.y <= 0;
        delta_2.x <= 0; delta_2.y <= 0;
        dzdx      <= 0; dzdy      <= 0; z         <= 0;

        metadata.color   <= '0;
        metadata.tile_x  <= '0;
        metadata.tile_y  <= '0;

        dirty_bit       <= 1;

        // Reset Outputs
        rdy_in_o   <= '1;
        vld_o      <= '0;

    end else begin

        case (present_state)
            IDLE: begin
                if (next_state == IDLE) begin
                    // keep waiting for data in ready state
                    rdy_in_o <= 1;
                end else begin
                    // Transitioning to a new state, no longer ready
                    rdy_in_o <= 0;

                    // Get starting position
                    coord_position.x <= abs_pos_x_i;
                    coord_position.y <= abs_pos_y_i;
                    addr_position    <= -1;

                    // archive previous starting coordinate in case we have to flush
                    prev_coord_position <= temp_coord;

                    delta_0.x <= delta_0_x_i; delta_0.y <= delta_0_y_i;
                    delta_1.x <= delta_1_x_i; delta_1.y <= delta_1_y_i;
                    delta_2.x <= delta_2_x_i; delta_2.y <= delta_2_y_i;
                    edge_0    <= edge_0_i;    edge_1    <= edge_1_i;    
                    edge_2    <= edge_2_i;

                    metadata.color  <= color_i;
                    metadata.tile_x  <= tile_x_i;
                    metadata.tile_y  <= tile_y_i;

                    dzdx <= dzdx_i;
                    dzdy <= dzdy_i;
                    z    <= z_i;
                end
            end
            FORWARDING_0 : begin
                // delay to allow pipeline mem read
                addr_position <= 0;
            end
            FORWARDING_1 : begin
                // delay to allow pipeline mem read
                addr_position <= 0;
            end 
            PROCESS: begin

                if ((addr_position & (`TILE_WIDTH-1)) == (`TILE_WIDTH-1)) begin
                    // Update the absolute position
                    coord_position.x <= coord_position.x - ((`TILE_WIDTH-1) << `FX_FRAC_BITS);
                    coord_position.y <= coord_position.y + (1 << `FX_FRAC_BITS);

                    // Update the z-value
                    z <= z + temp_z_row_off; 

                    // Update the edge values
                    edge_0 <= edge_0 + temp_edge_row_off[0];
                    edge_1 <= edge_1 + temp_edge_row_off[1];
                    edge_2 <= edge_2 + temp_edge_row_off[2];

                end else begin
                    // Update the absolute position
                    coord_position.x <= coord_position.x + (1 << `FX_FRAC_BITS);

                    // Update the z-value
                    z <= z + temp_z_col_off;

                    // Update the edge values
                    edge_0 <= edge_0 + temp_edge_col_off[0];
                    edge_1 <= edge_1 + temp_edge_col_off[1];
                    edge_2 <= edge_2 + temp_edge_col_off[2];
                end

                // Update the relative position
                addr_position <= addr_position + 1;
                if (next_state == PROCESS) begin
                    rdy_in_o  <= 0;
                end else begin
                    addr_position <= -1;
                    dirty_bit <= 0;
                    rdy_in_o  <= 1;                    
                end
            end
            FLUSHING: begin
                // Flush the buffers to output
                if (rdy_out_i) begin

                    // Update the absolute position
                    if ((addr_position & (`TILE_WIDTH-1)) == (`TILE_WIDTH-1)) begin
                        prev_coord_position.x <= prev_coord_position.x - ((`TILE_WIDTH-1) << `FX_FRAC_BITS);
                        prev_coord_position.y <= prev_coord_position.y + (1 << `FX_FRAC_BITS);
                    end else begin
                        prev_coord_position.x <= prev_coord_position.x + (1 << `FX_FRAC_BITS);
                    end

                    // Update the relative position
                    addr_position <= addr_position + 1;
                    if (next_state == FLUSHING) begin
                        vld_o         <= 1;
                    end else begin
                        addr_position <= -1;
                        vld_o         <= 0; 
                    end
                end 
            end
            default : begin
            end
        endcase
    end
end

////////////////////////////////////////////////////////////////////

// sign extend a 16-bit fixed-point number to 32 bits
task automatic sext_f12p4_f24p8(
    input [`FX_TOTAL_BITS-1:0] in,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

out = {{`FX_INT_BITS{in[`FX_TOTAL_BITS-1]}}, in, {`FX_FRAC_BITS{1'b0}}};
    
endtask

// compute the edge row offset
task automatic edge_row_offset(
    input coord_2d_t delta_i,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

logic [`FX_TOTAL_BITS*2-1:0] s_dy, s_dx;

sext_f12p4_f24p8(delta_i.y, s_dy);
sext_f12p4_f24p8(delta_i.x, s_dx);

out = -((s_dy << `TILE_WIDTH_BITS) - s_dy + s_dx);

endtask


// compute the edge row offset
task automatic edge_column_offset(
    input coord_2d_t delta_i,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

sext_f12p4_f24p8(delta_i.y, out);

endtask

// compute the z row offset
task automatic z_row_offset(
    input signed [`FX_TOTAL_BITS*2-1:0] dzdx,
    input signed [`FX_TOTAL_BITS*2-1:0] dzdy,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

out = (dzdy - (dzdx << `TILE_WIDTH_BITS)) + dzdx;

endtask

task automatic tile_to_coord(
    input metadata_t in,
    output coord_2d_t out
);

    out.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, in.tile_x, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    out.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, in.tile_y, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};

endtask

// extract and expand the z value from a memory chunk
task automatic extract_expand_z(
    input         [`FX_TOTAL_BITS*2-1:0] dffram_write_out,
    output signed [`FX_TOTAL_BITS*2-1:0] expanded_z
);

    logic [`FX_TOTAL_BITS*2-`FX_TOTAL_BITS/2-1:0] extracted_z;
    
    extracted_z = dffram_write_out[`FX_TOTAL_BITS*2-1:`COLOR_BITS];
    expanded_z  = {{(`FX_INT_BITS/2){extracted_z[`FX_TOTAL_BITS*2-`FX_TOTAL_BITS/2-1]}}, extracted_z, {`FX_FRAC_BITS/2{1'b0}}};
endtask

// compact the z value so it can fit in a 24-bit chunk of memory
task automatic compact_z(
    input         [`FX_TOTAL_BITS*2-1:0]                expanded_z,
    output signed [`FX_TOTAL_BITS*2-`FX_TOTAL_BITS/2-1:0] compacted_z
);    
    compacted_z  = expanded_z[`FX_TOTAL_BITS*2-`FX_TOTAL_BITS/2+`FX_FRAC_BITS/2-1:`FX_FRAC_BITS/2];
endtask

endmodule