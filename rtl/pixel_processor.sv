
`include "raster_defines.svh"

module pixel_processor(
    input             clk,
    input             rst_n,
    input             rdy_out,
    input             vld_in,

    input signed [`FX_TOTAL_BITS-1:0]   in_abs_pos_x,
    input signed [`FX_TOTAL_BITS-1:0]   in_abs_pos_y,
    input signed [`FX_TOTAL_BITS-1:0]   in_delta_0_x,
    input signed [`FX_TOTAL_BITS-1:0]   in_delta_0_y,
    input signed [`FX_TOTAL_BITS-1:0]   in_delta_1_x,
    input signed [`FX_TOTAL_BITS-1:0]   in_delta_1_y,
    input signed [`FX_TOTAL_BITS-1:0]   in_delta_2_x,
    input signed [`FX_TOTAL_BITS-1:0]   in_delta_2_y,
    input signed [`FX_TOTAL_BITS*2-1:0] in_edge_0,
    input signed [`FX_TOTAL_BITS*2-1:0] in_edge_1,
    input signed [`FX_TOTAL_BITS*2-1:0] in_edge_2,
    input        [`COLOR_BITS-1:0]      in_color,
    input        [`TILE_COLUMNS_BITS-1:0] in_tile_x,
    input        [`TILE_ROWS_BITS-1:0]    in_tile_y,  
    input signed [`FX_TOTAL_BITS-1:0]   in_dzdx,
    input signed [`FX_TOTAL_BITS-1:0]   in_dzdy,
    input signed [`FX_TOTAL_BITS*2-1:0] in_z_current,

    input        signed [`FX_TOTAL_BITS*2-1:0]  z_buffer_data_in, 
    output logic                                z_buffer_write_en,
    output logic signed [`FX_TOTAL_BITS*2-1:0]  z_buffer_data_out, 
    output logic signed [`TILE_AREA_BITS-1:0]   z_buffer_read_addr, 
    output logic signed [`TILE_AREA_BITS-1:0]   z_buffer_write_addr, 

    input        [`COLOR_BITS-1:0]      color_buffer_data_in,
    output logic                        color_buffer_write_en,
    output logic [`COLOR_BITS-1:0]      color_buffer_data_out,
    output logic [`TILE_AREA_BITS-1:0]  color_buffer_read_addr,
    output logic [`TILE_AREA_BITS-1:0]  color_buffer_write_addr,

    output logic                               rdy_in,
    output logic                               vld_out,
    output logic [`COLOR_BITS-1:0]             color_out,
    output logic signed [`FX_TOTAL_BITS-1:0]   pixel_out_x,
    output logic signed [`FX_TOTAL_BITS-1:0]   pixel_out_y
);

typedef struct packed {
    logic signed [`FX_TOTAL_BITS-1:0] x;
    logic signed [`FX_TOTAL_BITS-1:0] y;
    logic signed [`FX_TOTAL_BITS-1:0] z;
} coord_3d_t;

typedef struct packed {
    logic signed [`FX_TOTAL_BITS-1:0] x;
    logic signed [`FX_TOTAL_BITS-1:0] y;
} coord_2d_t;

typedef struct packed {
    logic [`COLOR_BITS-1:0]         color;
    logic [`TILE_COLUMNS_BITS-1:0]  tile_x;
    logic [`TILE_ROWS_BITS-1:0]     tile_y;  
} metadata_t;

typedef enum logic [1:0] {
    IDLE      = 2'd0,
    FLUSHING  = 2'd1,
    PROCESS   = 2'd2
} pixel_state_t;


pixel_state_t present_state, next_state;

coord_2d_t                          prev_coord_position;
coord_2d_t                          coord_position;
logic        [`TILE_AREA_BITS-1:0]  addr_position;

coord_2d_t                          delta_0, delta_1, delta_2;
logic signed [`FX_TOTAL_BITS*2-1:0] edge_0, edge_1, edge_2;
metadata_t                          metadata;
logic signed [`FX_TOTAL_BITS-1:0]   dzdx, dzdy;
logic signed [`FX_TOTAL_BITS*2-1:0] z_current;

// temps needed to get iverilog working :(
logic [(`TILE_ROWS_BITS + `TILE_COLUMNS_BITS)-1:0] current_tile_coord;
logic [(`TILE_ROWS_BITS + `TILE_COLUMNS_BITS)-1:0] new_tile_coord;

assign color_buffer_read_addr = addr_position;
assign z_buffer_read_addr     = addr_position;

assign current_tile_coord = {metadata.tile_y, metadata.tile_x};
assign new_tile_coord = {in_tile_y, in_tile_x};

// temporaries
coord_2d_t temp_coord;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_z_row_off;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_edge_row_off;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_z_col_off;
logic signed [`FX_TOTAL_BITS*2-1:0] temp_edge_col_off;

always_comb begin
    case (present_state)
        IDLE: begin
            if (vld_in) begin
                if (current_tile_coord >= new_tile_coord) begin
                    next_state = PROCESS;
                end else begin
                    next_state = FLUSHING;
                end
            end else begin
                next_state = IDLE;
            end
        end
        FLUSHING : begin
            if (addr_position < `TILE_AREA-1) begin
                next_state = FLUSHING;
            end else begin
                next_state = PROCESS;
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

// Process each pixel in the tile
always_ff @(posedge clk) begin

    if (!rst_n) begin
        // Reset logic
        coord_position.x <= '0;
        coord_position.y <= '0;

        prev_coord_position.x <= '0;
        prev_coord_position.y <= '0;

        addr_position <= '0;

        edge_0  <= '0;
        edge_1  <= '0;
        edge_2  <= '0;

        delta_0.x <= 0; delta_0.y <= 0;
        delta_1.x <= 0; delta_1.y <= 0;
        delta_2.x <= 0; delta_2.y <= 0;

        metadata.color   <= '0;
        metadata.tile_x  <= '0;
        metadata.tile_y  <= '0;

        dzdx         <= '0;
        dzdy         <= '0;
        z_current    <= '0;
        rdy_in       <= '1;
        vld_out      <= '0;
        color_out    <= '0;
        pixel_out_x  <= '0;
        pixel_out_y  <= '0;

        present_state <= IDLE;
    end else begin

        present_state         <= next_state;

        case (present_state)
            IDLE: begin

                // set signals to default state
                z_buffer_write_en     <= '0;
                color_buffer_write_en <= '0;
                vld_out               <= '0;
                color_out             <= '0;
                pixel_out_x           <= '0;
                pixel_out_y           <= '0;

                // Get tile-scale data if available
                if (vld_in) begin
                    coord_position.x <= in_abs_pos_x;
                    coord_position.y <= in_abs_pos_y;
                    addr_position    <= '0;

                    // archive previous starting coordinate in case we have to flush
                    tile_to_coord(metadata, temp_coord);
                    prev_coord_position <= temp_coord;

                    delta_0.x     <= in_delta_0_x;
                    delta_0.y     <= in_delta_0_y;
                    delta_1.x     <= in_delta_1_x;
                    delta_1.y     <= in_delta_1_y;
                    delta_2.x     <= in_delta_2_x;
                    delta_2.y     <= in_delta_2_y;
                    
                    edge_0      <= in_edge_0;
                    edge_1      <= in_edge_1;
                    edge_2      <= in_edge_2;

                    metadata.color  <= in_color;
                    metadata.tile_x  <= in_tile_x;
                    metadata.tile_y  <= in_tile_y;

                    dzdx          <= in_dzdx;
                    dzdy          <= in_dzdy;
                    z_current     <= in_z_current;

                    rdy_in        <= '0;
                end else begin
                    // keep waiting for data in ready state
                    rdy_in  <= '1;
                end
            end
            PROCESS: begin
                vld_out               <= '0;
                color_out             <= '0;
                pixel_out_x           <= '0;
                pixel_out_y           <= '0;

                // edge and depth check
                if ((edge_0 >= 0) && (edge_1 >= 0) && (edge_2 >= 0) && (z_current < z_buffer_data_in)) begin
                    z_buffer_write_addr     <= addr_position;
                    z_buffer_data_out       <= z_current;
                    z_buffer_write_en       <= '1;

                    color_buffer_write_addr <= addr_position;
                    color_buffer_data_out   <= metadata.color;
                    color_buffer_write_en   <= '1;
                end else begin
                    z_buffer_write_en     <= '0;
                    color_buffer_write_en <= '0;
                end

                if ((addr_position & (`TILE_WIDTH-1)) == (`TILE_WIDTH-1)) begin
                    // Update the absolute position
                    coord_position.x <= coord_position.x - ((`TILE_WIDTH-1) << `FX_FRAC_BITS);
                    coord_position.y <= coord_position.y + (1 << `FX_FRAC_BITS);

                    // Update the z-value
                    z_row_offset(dzdx, dzdy, temp_z_row_off);
                    z_current <= z_current + temp_z_row_off; 

                    // Update the edge values
                    edge_row_offset(delta_0, temp_edge_row_off);
                    edge_0 <= edge_0 + temp_edge_row_off;
                    edge_row_offset(delta_1, temp_edge_row_off);
                    edge_1 <= edge_1 + temp_edge_row_off;
                    edge_row_offset(delta_2, temp_edge_row_off);
                    edge_2 <= edge_2 + temp_edge_row_off;

                end else begin
                    // Update the absolute position
                    coord_position.x <= coord_position.x + (1 << `FX_FRAC_BITS);

                    // Update the z-value
                    sext_f16_f32(dzdx, temp_z_col_off);
                    z_current <= z_current + temp_z_col_off;

                    // Update the edge values
                    edge_column_offset(delta_0, temp_edge_col_off);
                    edge_0 <= edge_0 + temp_edge_col_off;
                    edge_column_offset(delta_1, temp_edge_col_off);
                    edge_1 <= edge_1 + temp_edge_col_off;
                    edge_column_offset(delta_2, temp_edge_col_off);
                    edge_2 <= edge_2 + temp_edge_col_off;
                end

                // Update the relative position
                addr_position <= addr_position + 1;
                if (next_state == IDLE) begin
                    rdy_in  <= '1;
                end else begin
                    rdy_in  <= '0;
                end
            end
            FLUSHING: begin
                rdy_in  <= '0;
                
                // Flush the buffers to output
                if (rdy_out) begin
                    
                    // Set output signals
                    vld_out   <= '1;
                    
                    // Output the color and pixel coordinates
                    color_out   <= color_buffer_data_in;
                    pixel_out_x <= prev_coord_position.x;
                    pixel_out_y <= prev_coord_position.y;
                    
                    // Clear the buffers at this position
                    z_buffer_data_out     <= {1'b0, {2*`FX_TOTAL_BITS-1{1'b1}}};
                    z_buffer_write_addr   <= addr_position;
                    z_buffer_write_en     <= 1;

                    color_buffer_data_out     <= '0;
                    color_buffer_write_addr   <= addr_position;
                    color_buffer_write_en     <= 1;
                
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
                    z_buffer_write_en     <= '0;
                    color_buffer_write_en <= '0;
                    color_out       <= '0;
                    pixel_out_x     <= '0;
                    pixel_out_y     <= '0;
                    vld_out         <= '0; 
                end
            end
            default : begin
            end
        endcase
    end

end

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