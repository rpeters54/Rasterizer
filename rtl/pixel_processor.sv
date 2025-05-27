
`include "raster_defines.svh"

module pixel_processor(
    input                                                     clk_i,
    input                                                     rst_n_i,
    input                                                     rdy_out_i,
    input                                                     vld_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  abs_pos_x_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  abs_pos_y_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  delta_0_x_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  delta_0_y_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  delta_1_x_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  delta_1_y_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  delta_2_x_i,
    input        signed [`FX_TOTAL_BITS-1:0]                  delta_2_y_i,
    input        signed [`FX_TOTAL_BITS*2-1:0]                edge_0_i,
    input        signed [`FX_TOTAL_BITS*2-1:0]                edge_1_i,
    input        signed [`FX_TOTAL_BITS*2-1:0]                edge_2_i,
    input               [`COLOR_BITS-1:0]                     color_i,
    input               [`TILE_COLUMNS_BITS-1:0]              tile_x_i,
    input               [`TILE_ROWS_BITS-1:0]                 tile_y_i,  
    input        signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] dzdx_i,
    input        signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] dzdy_i,
    input        signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] z_current_i,

    output logic                                              rdy_in_o,
    output logic                                              vld_o,
    output logic        [`COLOR_BITS-1:0]                     color_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  pixel_x_o,
    output logic signed [`FX_TOTAL_BITS-1:0]                  pixel_y_o
);

////////////////////////////////////////////////////////////////////

coord_2d_t                                         prev_coord_position;
coord_2d_t                                         coord_position;
logic        [`TILE_AREA_BITS-1:0]                 addr_position;
               
coord_2d_t                                         delta_0, delta_1, delta_2;
logic signed [`FX_TOTAL_BITS*2-1:0]                edge_0, edge_1, edge_2;
metadata_t                                         metadata;
logic signed [`FX_TOTAL_BITS+`FX_TOTAL_BITS/2-1:0] dzdx, dzdy, z_current;

logic                                              dirty_bit, dffram_read_sel, dffram_write_sel;

// temps needed to get iverilog working :(
logic [(`TILE_ROWS_BITS + `TILE_COLUMNS_BITS)-1:0] current_tile_coord;
logic [(`TILE_ROWS_BITS + `TILE_COLUMNS_BITS)-1:0] new_tile_coord;
assign current_tile_coord = {metadata.tile_y, metadata.tile_x};
assign new_tile_coord = {tile_y_i, tile_x_i};

////////////////////////////////////////////////////////////////////

// dffram modules for color and z buffer
logic [`FX_TOTAL_BITS*2-1:0] dffram_data_out [0:1];
logic                        dffram_en       [0:1];
logic [3:0]                  dffram_we       [0:1];
logic [`FX_TOTAL_BITS*2-1:0] dffram_data_in  [0:1];
logic [`TILE_AREA_BITS-2:0]  dffram_addr     [0:1];


DFFRAM256x32 ram0 (
    .CLK(clk_i),
    .WE0(dffram_we[0]),
    .EN0(dffram_en[0]),
    .Di0(dffram_data_in[0]),
    .Do0(dffram_data_out[0]),
    .A0(dffram_addr[0])
);

DFFRAM256x32 ram1 (
    .CLK(clk_i),
    .WE0(dffram_we[1]),
    .EN0(dffram_en[1]),
    .Di0(dffram_data_in[1]),
    .Do0(dffram_data_out[1]),
    .A0(dffram_addr[1])
);

////////////////////////////////////////////////////////////////////

typedef enum logic [2:0] {
    IDLE         = 2'd0,
    FORWARDING_0 = 2'd1,
    FORWARDING_1 = 2'd2,
    FLUSHING     = 2'd3,
    PROCESS      = 2'd4
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
                if (current_tile_coord >= new_tile_coord || dirty_bit) begin
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
assign temp_coord.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, in.tile_x, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
assign temp_coord.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, in.tile_y, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};


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
    sext_f16_f32(dzdx, temp_z_col_off);
end


assign dffram_write_sel = ~dffram_read_sel;
assign dffram_addr      = '{addr_position, addr_position};
assign dffram_en        = (present_state == PROCESS || present_state == FLUSHING 
    || present_state == FORWARDING_0 || present_state == FORWARDING_1);

always_comb begin
    dffram_data_in = '{0, 0};
    dffram_we      = '{0, 0};
    if (present_state == PROCESS) begin
        // edge and depth check
        if ((edge_0 >= 0) && (edge_1 >= 0) && (edge_2 >= 0) 
            && ((!dirty_bit && (z_current < dffram_data_out[dffram_read_sel][`FX_TOTAL_BITS*2-1:`COLOR_BITS])) || dirty_bit)) begin

            dffram_data_in[dffram_write_sel] = {z_current, metadata.color};
            dffram_we[dffram_write_sel]      = 1;
        end else if (dirty_bit) begin
            dffram_data_in[dffram_write_sel] = {{1'b0, {2*`FX_TOTAL_BITS-1{1'b1}}}, 0};
            dffram_we[dffram_write_sel]      = 1;
        end
    end else if (present_state == FLUSHING) begin
        dffram_data_in[dffram_write_sel] = {{1'b0, {2*`FX_TOTAL_BITS-1{1'b1}}}, 0};
        dffram_we[dffram_write_sel]      = 1;
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
        dzdx      <= 0; dzdy      <= 0; z_current <= 0;

        metadata.color   <= '0;
        metadata.tile_x  <= '0;
        metadata.tile_y  <= '0;

        dirty_bit       <= 1;
        dffram_read_sel <= 1;

        // Reset Outputs
        rdy_in_o   <= '1;
        vld_o      <= '0;
        color_o    <= '0;
        pixel_x_o  <= '0;
        pixel_y_o  <= '0;

    end else begin

        case (present_state)
            IDLE: begin
                // set signals to default state
                vld_o               <= '0;
                color_o             <= '0;
                pixel_x_o           <= '0;
                pixel_y_o           <= '0;

                // Get tile-scale data if available
                if (vld_i) begin
                    // Transitioning to a new state, no longer ready
                    rdy_in_o <= 0;

                    // Get starting position
                    coord_position.x <= abs_pos_x_i;
                    coord_position.y <= abs_pos_y_i;
                    addr_position    <= 0;

                    // archive previous starting coordinate in case we have to flush
                    prev_coord_position <= temp_coord;

                    delta_0.x <= delta_0_x_i; delta_0.y <= delta_0_y_i;
                    delta_1.x <= delta_1_x_i; delta_1.y <= delta_1_y_i;
                    delta_2.x <= delta_2_x_i; delta_2.y <= delta_2_y_i;
                    edge_0    <= edge_0_i;    edge_1    <= edge_1_i;    
                    edge_2    <= edge_2_i;

                    metadata.color  <= color_i;
                    metadata.tile_x  <= in_tile_x;
                    metadata.tile_y  <= tile_y_i;

                    dzdx          <= dzdx_i;
                    dzdy          <= dzdy_i;
                    z_current     <= z_current_i;
                    
                end else begin
                    // keep waiting for data in ready state
                    rdy_in_o <= 1;
                end
            end
            FORWARDING_0 : begin
                dffram_read_sel <= ~dffram_read_sel;
            end
            FORWARDING_1 : begin
                dffram_read_sel <= ~dffram_read_sel;
            end 
            PROCESS: begin
                vld_o     <= 0;
                color_o   <= 0;
                pixel_x_o <= 0;
                pixel_y_o <= 0;

                if ((addr_position & (`TILE_WIDTH-1)) == (`TILE_WIDTH-1)) begin
                    // Update the absolute position
                    coord_position.x <= coord_position.x - ((`TILE_WIDTH-1) << `FX_FRAC_BITS);
                    coord_position.y <= coord_position.y + (1 << `FX_FRAC_BITS);

                    // Update the z-value
                    z_current <= z_current + temp_z_row_off; 

                    // Update the edge values
                    edge_0 <= edge_0 + temp_edge_row_off[0];
                    edge_1 <= edge_1 + temp_edge_row_off[1];
                    edge_2 <= edge_2 + temp_edge_row_off[2];

                end else begin
                    // Update the absolute position
                    coord_position.x <= coord_position.x + (1 << `FX_FRAC_BITS);

                    // Update the z-value
                    z_current <= z_current + temp_z_col_off;

                    // Update the edge values
                    edge_0 <= edge_0 + temp_edge_col_off[0];
                    edge_1 <= edge_1 + temp_edge_col_off[1];
                    edge_2 <= edge_2 + temp_edge_col_off[2];
                end

                // Update the relative position
                addr_position <= addr_position + 1;
                if (next_state == IDLE) begin
                    dirty_bit <= 0;
                    rdy_in_o  <= 1;
                end else begin
                    rdy_in_o  <= 0;
                end
            end
            FLUSHING: begin
                rdy_in_o <= 0;
                
                // Flush the buffers to output
                if (rdy_out_i) begin
                    
                    // Set output signals
                    vld_o <= 1;
                    
                    // Output the color and pixel coordinates
                    color_o   <= dffram_data_out[dffram_read_sel][`COLOR_BITS-1:0];
                    pixel_x_o <= prev_coord_position.x;
                    pixel_y_o <= prev_coord_position.y;
                                    
                    // Update the absolute position
                    if ((addr_position & (`TILE_WIDTH-1)) == (`TILE_WIDTH-1)) begin
                        prev_coord_position.x <= prev_coord_position.x - ((`TILE_WIDTH-1) << `FX_FRAC_BITS);
                        prev_coord_position.y <= prev_coord_position.y + (1 << `FX_FRAC_BITS);
                    end else begin
                        prev_coord_position.x <= prev_coord_position.x + (1 << `FX_FRAC_BITS);
                    end

                    // Update the relative position
                    addr_position <= addr_position + 1;
                    if (next_state == PROCESS) begin
                        addr_position <= 0;
                    end

                end else begin
                    // Deassert valid output signal
                    color_o       <= '0;
                    pixel_x_o     <= '0;
                    pixel_y_o     <= '0;
                    vld_o         <= '0; 
                end
            end
            default : begin
            end
        endcase
    end
end

////////////////////////////////////////////////////////////////////

// sign extend a 16-bit fixed-point number to 32 bits
task automatic sext_f16_f32(
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

sext_f16_f32(delta_i.y, s_dy);
sext_f16_f32(delta_i.x, s_dx);

out = -((s_dy << `TILE_WIDTH_BITS) - s_dy + s_dx);

endtask


// compute the edge row offset
task automatic edge_column_offset(
    input coord_2d_t delta_i,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

sext_f16_f32(delta_i.y, out);

endtask

// compute the z row offset
task automatic z_row_offset(
    input signed [`FX_TOTAL_BITS-1:0] dzdx,
    input signed [`FX_TOTAL_BITS-1:0] dzdy,
    output logic signed [`FX_TOTAL_BITS*2-1:0] out
);

logic signed [`FX_TOTAL_BITS*2-1:0] dzdx_ext;
logic signed [`FX_TOTAL_BITS*2-1:0] dzdy_ext;

sext_f16_f32(dzdx, dzdx_ext);
sext_f16_f32(dzdy, dzdy_ext);

out = (dzdy_ext - (dzdx_ext << `TILE_WIDTH_BITS)) + dzdx_ext;

endtask

task automatic tile_to_coord(
    input metadata_t in,
    output coord_2d_t out
    );

    out.x = {{(`FX_INT_BITS - `TILE_COLUMNS_BITS - `TILE_WIDTH_BITS){1'b0}}, in.tile_x, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};
    out.y = {{(`FX_INT_BITS - `TILE_ROWS_BITS    - `TILE_WIDTH_BITS){1'b0}}, in.tile_y, {`TILE_WIDTH_BITS{1'b0}}, {`FX_FRAC_BITS{1'b0}}};

endtask

endmodule