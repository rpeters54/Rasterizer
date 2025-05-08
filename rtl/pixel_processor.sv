
`include "raster_defines.svh"

module pixel_processor(
    input             clk,
    input             rst_n,
    input             rdy_out,
    input             vld_in,

    input coord_3d_t                          in_abs_pos;
    input coord_3d_t                          in_delta_0;
    input coord_3d_t                          in_delta_1;
    input coord_3d_t                          in_delta_2;
    input logic signed [`FX_TOTAL_BITS*2-1:0] in_edge_0;
    input logic signed [`FX_TOTAL_BITS*2-1:0] in_edge_1;
    input logic signed [`FX_TOTAL_BITS*2-1:0] in_edge_2;
    input              [3:0]                  in_color;
    input logic        [`FX_TOTAL_BITS-1:0]   in_dzdx;
    input logic        [`FX_TOTAL_BITS-1:0]   in_dzdy;
    input logic        [`FX_TOTAL_BITS*2-1:0] in_z_current;

    output logic                    rdy_in,
    output logic                    vld_out,
    output logic [`NUM_COLORS-1:0]  color_out,
    output coord_2d_t               pixel_out
);


pixel_state_t present_state, next_state;

logic signed [`FX_TOTAL_BITS*2-1:0] z_buffer     [0:`TILE_AREA-1];
logic [3:0]                         color_buffer [0:`TILE_AREA-1];

coord_3d_t                          abs_pos;
coord_3d_t                          flush_abs_pos;
logic        [`TILE_BIT_WIDTH-1:0]  rel_pos;
logic        [`TILE_BIT_WIDTH-1:0]  flush_rel_pos;
coord_3d_t                          deltas  [0:`NUM_VERTICES-1];
logic signed [`FX_TOTAL_BITS*2-1:0] edges   [0:`NUM_VERTICES-1];
logic        [3:0]                  color;
logic        [`FX_TOTAL_BITS-1:0]   dzdx, dzdy;
logic        [`FX_TOTAL_BITS*2-1:0] z_current;

always_comb begin
    case (present_state)
        IDLE: begin
            if (vld_in) begin
                if ({metadata.tile_y, metadata.tile_x} >= {in_metadata.tile_y, in_metadata.tile_x}) begin
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
        abs_pos      <= '{ default: '0 };
        flush_abs_pos <= '{ default: '0 };
        rel_pos      <= '0;
        flush_rel_pos <= '0;
        deltas       <= '{ default: '0 };
        edges        <= '{ default: '0 };
        color        <= '0;
        z_buffer     <= '{default: {2*`FX_TOTAL_BITS{1'b1}}};
        color_buffer <= '{ default: '0 };

        dzdx         <= '0;
        dzdy         <= '0;

        current_z    <= '0;

        rdy_in       <= '1;

        present_state <= IDLE;
    end else begin
        present_state <= next_state;

        case (present_state)
            IDLE: begin
                // Get tile-scale data if available
                if (vld_in) begin
                    abs_pos      <= in_abs_pos;
                    flush_abs_pos <= in_abs_pos;
                    rel_pos      <= '0;
                    flush_rel_pos <= '0;
                    deltas[0]    <= in_delta_0;
                    deltas[1]    <= in_delta_1;
                    deltas[2]    <= in_delta_2;
                    edges[0]     <= in_edge_0;
                    edges[1]     <= in_edge_1;
                    edges[2]     <= in_edge_2;
                    metadata     <= in_metadata;
                    dzdx         <= in_dzdx;
                    dzdy         <= in_dzdy;
                    current_z    <= in_current_z;

                    rdy_in       <= '1;
                end
            end
            PROCESS: begin
                rdy_in       <= '0;

                // edge and depth check
                if (inside_polygon(edges) > 0 && depth_test(rel_pos, z_current, z_buffer)) begin
                    z_buffer[rel_pos]     <= z_current;
                    color_buffer[rel_pos] <= color;
                end 

                if ((rel_pos & (`TILE_WIDTH-1)) == (`TILE_WIDTH-1)) begin
                    // Update the absolute position
                    abs_pos.x <= abs_pos.x - {(`TILE_WIDTH-1), `FX_FRAC_BITS'b0};
                    abs_pos.y <= abs_pos.y + {1, `FX_FRAC_BITS'b0};

                    // Update the z-value
                    current_z <= current_z + {dzdy, `FX_FRAC_BITS'b0} - {dzdx, 5'd0, `FX_FRAC_BITS'b0};

                    // Update the edge values
                    for (int i = 0; i < `NUM_VERTICES; i++) begin
                        edges[i] <= edges[i] - {deltas[i].y, 5'd0, `FX_FRAC_BITS'b0} - {deltas[i].x, `FX_FRAC_BITS'b0};
                    end

                end else begin
                    // Update the absolute position
                    abs_pos.x <= abs_pos.x + {1, `FX_FRAC_BITS'b0};

                    // Update the z-value
                    current_z <= current_z + {dzdx, `FX_FRAC_BITS'b0};

                    // Update the edge values
                    for (int i = 0; i < `NUM_VERTICES; i++) begin
                        edges[i] <= edges[i] + {deltas[i].y, `FX_FRAC_BITS'b0};
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
                    color_out <= color_buffer[flush_pos];
                    pixel_out <= '{
                        x: flush_abs_pos.x,
                        y: flush_abs_pos.y
                    };
                    
                    // Clear the buffers at this position
                    z_buffer[flush_rel_pos]     <= {2*`FX_TOTAL_BITS{1'b1}}; 
                    color_buffer[flush_rel_pos] <= '0;
                
                    // Update the absolute position
                    if ((flush_rel_pos & (`TILE_WIDTH-1)) == (`TILE_WIDTH-1)) begin
                        flush_abs_pos.x <= flush_abs_pos.x - {(`TILE_WIDTH-1), `FX_FRAC_BITS'b0};
                        flush_abs_pos.y <= flush_abs_pos.y + {1, `FX_FRAC_BITS'b0};
                    end else begin
                        flush_abs_pos.x <= flush_abs_pos.x + {1, `FX_FRAC_BITS'b0};
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


function logic inside_polygon(
    input signed [`FX_TOTAL_BITS*2-1:0] edges [0:`NUM_VERTICES-1]
    );
    logic result = 1'b1;
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        result &= (edges[i] > 0);
    end
    return result;
endfunction

function logic depth_test(
    input        [`TILE_BIT_WIDTH-1:0]  rel_pos,
    input signed [`FX_TOTAL_BITS*2-1:0] z_current,
    input signed [`FX_TOTAL_BITS*2-1:0] z_buffer  [0:`TILE_AREA-1]
    );
    return (z_current < z_buffer[rel_pos]);
endfunction

endmodule