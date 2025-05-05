
`define TILE_WIDTH   32
`define TILE_COLUMNS 20
`define TILE_ROWS    15

typedef union packed {
  logic [27:0] raw;
  struct packed {
    logic [9:0] x;    // 10-bit x component
    logic [9:0] y;    // 10-bit y component
    logic [7:0] z;    // 8-bit z component
  } fields;
} coord_3d_t;

typedef union packed {
  logic [19:0] raw;
  struct packed {
    logic [9:0] x;    // 10-bit x component
    logic [9:0] y;    // 10-bit y component
  } fields;
} coord_2d_t;

typedef union packed {
  logic [15:0] raw;
  struct packed {
    logic [3:0]  color;     // 4-bit color (bits 15:12)
    logic [2:0]  padding;   // 3-bit padding (bits 11:9)
    logic [3:0]  tile_y;  
    logic [4:0]  tile_x;
  } fields;
} polygon_t;

module raster(
    input             clk,
    input             rst_n,
    input             ready_in,
    input             vld_in,
    input  coord_3d_t v0,
    input  coord_3d_t v1,
    input  coord_3d_t v2,
    input  polygon_t  metadata,

    output logic        rdy_out,
    output logic        vld_out,
    output logic [3:0]  color_out,
    output coord_2d_t   pixel_out
);

logic [$clog2(`TILE_WIDTH*`TILE_WIDTH)-1:0] clk_accum = '0;
always_ff @(posedge clk) begin
    clk_accum <= clk_accum + 1;
end

// used to track previous value in fib calc
coord_2d_t   abs_pos, d_0, d_1, d_2;
logic        vld_0;
logic [$clog2(`TILE_WIDTH*`TILE_WIDTH)*2-1:0] edge_0, edge_1, edge_2, rel_pos;
logic [3:0]  color;

logic [7:0] z_buffer     [0:(`TILE_WIDTH*`TILE_WIDTH)-1];
logic [3:0] color_buffer [0:(`TILE_WIDTH*`TILE_WIDTH)-1];
[$clog2(`TILE_WIDTH*`TILE_WIDTH)-1:0] rel_pos_1d;


coord_2d_t temp_start;
coord_2d_t temp_d_0, temp_d_1, temp_d_2;
always_comb begin

    // Shift is used to convert from tile coordinates to pixel coordinates
    temp_start.fields.x = {metadata.fields.tile_x, 5'd0};
    temp_start.fields.y = {1'd0, metadata.fields.tile_y, 5'd0};

    // Compute the differences
    temp_d_0.fields.x = v1.fields.x - v0.fields.x;
    temp_d_0.fields.y = v1.fields.y - v0.fields.y;
    temp_d_1.fields.x = v2.fields.x - v1.fields.x;
    temp_d_1.fields.y = v2.fields.y - v1.fields.y;
    temp_d_2.fields.x = v0.fields.x - v2.fields.x;
    temp_d_2.fields.y = v0.fields.y - v2.fields.y;

end

// load in the vertices and compute the edges
always_ff @(posedge clk) begin 

    if (!rst_n) begin
        // Reset logic
        current.raw = '0;
        rel_pos_1d = '0;
        d_0.raw = '0;
        d_1.raw = '0;
        d_2.raw = '0;
        vld_0 = '0;
        
    end else if (clk_accum == 0) begin  
        /* Only run this logic for each new tile */

        // Mark validity based on the input
        vld_0 <= vld_in;

        // Store the color
        color <= metadata.fields.color;
        
        // Store the start position for the next cycle
        abs_pos <= temp_start;
        rel_pos_1d <= '0;

        // Store the differences for the next cycle
        d_0 <= temp_d_0;
        d_1 <= temp_d_1;
        d_2 <= temp_d_2;

        // Compute the edges using the current values
        // Note: We use the immediate value of temp_start instead of the not-yet-updated start
        edge_0 <= (temp_start.fields.x - v0.fields.x) * temp_d_0.fields.y +
                  (temp_start.fields.y - v0.fields.y) * temp_d_0.fields.x;
                  
        edge_1 <= (temp_start.fields.x - v1.fields.x) * temp_d_1.fields.y +
                  (temp_start.fields.y - v1.fields.y) * temp_d_1.fields.x;
                  
        edge_2 <= (temp_start.fields.x - v2.fields.x) * temp_d_2.fields.y +
                  (temp_start.fields.y - v2.fields.y) * temp_d_2.fields.x;

        // Compute the z-depth value
        // Note: This is a placeholder and should be replaced with the actual z-depth calculation
    end


end

// Process each pixel in the tile
always_ff @(posedge clk) begin

    if (!rst_n == 0) begin
        // Reset logic
        abs_pos.raw = '0;
        edge_0.raw = '0;
        edge_1.raw = '0;
        edge_2.raw = '0;
        vld_1 = '0;
        
    end else begin
        // edge and depth check
        if (vld_0 && $signed(edge_0) > 0 && $signed(edge_1) > 0 && $signed(edge_2) > 0 /* && z-depth check */) begin
            // Update the z-buffer
            /* ... */
            // Write to the color buffer
            color_buffer[rel_pos_1d] <= color;
        end 

        // Update next position and the edge values
        if ((abs_pos.fields.y & `TILE_WIDTH-1) == (`TILE_WIDTH-1) 
         && (abs_pos.fields.x & `TILE_WIDTH-1) == (`TILE_WIDTH-1)) begin

            // At the end of a tile, do nothing until tile is updated

        end else if ((abs_pos.fields.x & `TILE_WIDTH-1) == (`TILE_WIDTH-1)) begin
            // Update the absolute position
            abs_pos.fields.x <= abs_pos.fields.x - (`TILE_WIDTH-1);
            abs_pos.fields.y <= abs_pos.fields.y + 1;

            // Update the relative position
            rel_pos_1d <= rel_pos_1d + 1;

            // Update the edge values
            edge_0 <= edge_0 - {d_0.fields.y, 5'd0} - d_0.fields.x;
            edge_1 <= edge_1 - {d_1.fields.y, 5'd0} - d_1.fields.x;
            edge_2 <= edge_2 - {d_2.fields.y, 5'd0} - d_2.fields.x;

            // Update the z-depth value
            // Note: This is a placeholder and should be replaced with the actual z-depth calculation

        end else begin
            // Update the absolute position
            abs_pos.fields.x <= abs_pos.fields.x + 1;

            // Update the relative position
            rel_pos_1d <= rel_pos_1d + 1;

            // Update the edge values
            edge_0 <= edge_0 + d_0.fields.x;
            edge_1 <= edge_1 + d_1.fields.x;
            edge_2 <= edge_2 + d_2.fields.x;

            // Update the z-depth value
            // Note: This is a placeholder and should be replaced with the actual z-depth calculation
        end
    end

end

// When frame number changes, flush the color buffer to the output, and reset the z and color buffers
always_ff @(posedge clk) begin

end



endmodule
