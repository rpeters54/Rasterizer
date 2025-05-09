
`include "raster_defines.svh"

module pixel_processor(
    input             clk,
    input             rst_n,
    input             rdy_out,
    input             vld_in,

    input coord_3d_t                          in_abs_pos,
    input coord_3d_t                          in_delta_0,
    input coord_3d_t                          in_delta_1,
    input coord_3d_t                          in_delta_2,
    input logic signed [`FX_TOTAL_BITS*2-1:0] in_edge_0,
    input logic signed [`FX_TOTAL_BITS*2-1:0] in_edge_1,
    input logic signed [`FX_TOTAL_BITS*2-1:0] in_edge_2,
    input metadata_t                          in_metadata,
    input logic        [`FX_TOTAL_BITS-1:0]   in_dzdx,
    input logic        [`FX_TOTAL_BITS-1:0]   in_dzdy,
    input logic        [`FX_TOTAL_BITS*2-1:0] in_z_current,

    output logic                    rdy_in,
    output logic                    vld_out,
    output logic [`COLOR_BITS-1:0]  color_out,
    output coord_2d_t               pixel_out
);


pixel_state_t present_state, next_state;

logic signed [`FX_TOTAL_BITS*2-1:0] z_buffer     [0:`TILE_AREA-1];
logic        [`COLOR_BITS-1:0]      color_buffer [0:`TILE_AREA-1];

coord_3d_t                          abs_pos;
coord_3d_t                          flush_abs_pos;
logic        [`TILE_AREA_BITS-1:0]  rel_pos;
logic        [`TILE_AREA_BITS-1:0]  flush_rel_pos;
coord_3d_t                          deltas  [0:`NUM_VERTICES-1];
logic signed [`FX_TOTAL_BITS*2-1:0] edges   [0:`NUM_VERTICES-1];
metadata_t                          metadata;
logic        [`FX_TOTAL_BITS-1:0]   dzdx, dzdy;
logic        [`FX_TOTAL_BITS*2-1:0] z_current;

// temps needed to get iverilog working :(
coord_2d_t out_coord;
logic [(`TILE_ROWS_BITS + `TILE_COLUMNS_BITS)-1:0] current_tile_coord;
logic [(`TILE_ROWS_BITS + `TILE_COLUMNS_BITS)-1:0] new_tile_coord;
coord_3d_t temp_delta;

assign out_coord.x = flush_abs_pos.x;
assign out_coord.y = flush_abs_pos.y;
assign current_tile_coord = {metadata.tile_y, metadata.tile_x};
assign new_tile_coord = {in_metadata.tile_y, in_metadata.tile_x};

always_comb begin

    temp_delta.x = 0;
    temp_delta.y = 0;
    temp_delta.z = 0;

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
            if (flush_rel_pos > `TILE_AREA) begin
                next_state = PROCESS;
            end else begin
                next_state = FLUSHING;
            end
        end
        PROCESS: begin
            if (rel_pos < `TILE_AREA) begin
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
        abs_pos.x        <= '0;
        abs_pos.y        <= '0;
        abs_pos.z        <= '0;
        flush_abs_pos.x  <= '0;
        flush_abs_pos.y  <= '0;
        flush_abs_pos.z  <= '0;
        rel_pos          <= '0;
        flush_rel_pos    <= '0;

        for (int i = 0; i < `NUM_VERTICES; i++) begin
            deltas[i] <= temp_delta;
            edges[i]  <= '0;
        end
        metadata.color   <= '0;
        metadata.tile_x  <= '0;
        metadata.tile_y  <= '0;
        for (int i = 0; i < `TILE_AREA; i++) begin
            z_buffer[i]     <= {2*`FX_TOTAL_BITS{1'b1}};
            color_buffer[i] <= '0;
        end

        dzdx         <= '0;
        dzdy         <= '0;
        z_current    <= '0;
        rdy_in       <= '1;

        present_state <= IDLE;
    end else begin
        present_state <= next_state;

        case (present_state)
            IDLE: begin
                // Get tile-scale data if available
                if (vld_in) begin
                    abs_pos       <= in_abs_pos;
                    flush_abs_pos <= in_abs_pos;
                    rel_pos       <= '0;
                    flush_rel_pos <= '0;
                    deltas[0]     <= in_delta_0;
                    deltas[1]     <= in_delta_1;
                    deltas[2]     <= in_delta_2;
                    edges[0]      <= in_edge_0;
                    edges[1]      <= in_edge_1;
                    edges[2]      <= in_edge_2;
                    metadata      <= in_metadata;
                    dzdx          <= in_dzdx;
                    dzdy          <= in_dzdy;
                    z_current     <= in_z_current;

                    rdy_in        <= '1;
                end
            end
            PROCESS: begin
                rdy_in       <= '0;

                // edge and depth check
                if ((edges[0] > 0) && (edges[1] > 0) &&  (edges[2] > 0) && (z_current < z_buffer[rel_pos])) begin
                    z_buffer[rel_pos]     <= z_current;
                    color_buffer[rel_pos] <= metadata.color;
                end 

                if ((rel_pos & (`TILE_WIDTH-1)) == (`TILE_WIDTH-1)) begin
                    // Update the absolute position
                    abs_pos.x <= abs_pos.x - (`TILE_WIDTH-1) << `FX_FRAC_BITS;
                    abs_pos.y <= abs_pos.y + 1 << `FX_FRAC_BITS;

                    // Update the z-value
                    z_current <= z_current + sext_f16_f32(dzdy) - sext_f16_f32(dzdx) << `TILE_WIDTH_BITS;

                    // Update the edge values
                    for (int i = 0; i < `NUM_VERTICES; i++) begin
                        edges[i] <= edges[i] - edge_row_offset(deltas[i]);
                    end

                end else begin
                    // Update the absolute position
                    abs_pos.x <= abs_pos.x + 1 << `FX_FRAC_BITS;

                    // Update the z-value
                    z_current <= z_current + sext_f16_f32(dzdx);

                    // Update the edge values
                    for (int i = 0; i < `NUM_VERTICES; i++) begin
                        edges[i] <= edges[i] + edge_column_offset(deltas[i]);
                    end
                end

                // Update the relative position
                rel_pos <= rel_pos + 1;
            end
            FLUSHING: begin
                rdy_in       <= '0;

                // Flush the buffers to output
                if (rdy_out) begin
                    
                    // Set output signals
                    vld_out   <= 1'b1;
                    
                    // Output the color and pixel coordinates
                    color_out <= color_buffer[flush_rel_pos];
                    pixel_out <= out_coord;
                    
                    // Clear the buffers at this position
                    z_buffer[flush_rel_pos]     <= {2*`FX_TOTAL_BITS{1'b1}}; 
                    color_buffer[flush_rel_pos] <= '0;
                
                    // Update the absolute position
                    if ((flush_rel_pos & (`TILE_WIDTH-1)) == (`TILE_WIDTH-1)) begin
                        flush_abs_pos.x <= flush_abs_pos.x - (`TILE_WIDTH-1) << `FX_FRAC_BITS;
                        flush_abs_pos.y <= flush_abs_pos.y + 1 << `FX_FRAC_BITS;
                    end else begin
                        flush_abs_pos.x <= flush_abs_pos.x + 1 << `FX_FRAC_BITS;
                    end

                    // Update the relative position
                    flush_rel_pos <= flush_rel_pos + 1;

                end else begin
                    // Deassert valid output signal
                    vld_out <= 1'b0; 
                end
            end
        endcase
    end

end

// sign extend a 16-bit fixed-point number to 32 bits
function [`FX_TOTAL_BITS*2-1:0] sext_f16_f32(
    input [`FX_TOTAL_BITS-1:0] in
);

return {{`FX_INT_BITS{in[`FX_TOTAL_BITS-1]}}, in, {`FX_FRAC_BITS{1'b0}}};
    
endfunction

function [`FX_TOTAL_BITS*2-1:0] edge_row_offset(
    input coord_3d_t delta_i
);

logic [`FX_TOTAL_BITS*2-1:0] s_dy, s_dx;

s_dy = delta_i.y;
s_dx = delta_i.x;

return sext_f16_f32(s_dy) << `TILE_WIDTH_BITS + sext_f16_f32(s_dx);

endfunction

function [`FX_TOTAL_BITS*2-1:0] edge_column_offset(
    input coord_3d_t delta_i
);

logic [`FX_TOTAL_BITS*2-1:0] s_dy;

s_dy = delta_i.y;

return sext_f16_f32(s_dy);

endfunction

endmodule