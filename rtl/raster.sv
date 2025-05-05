
`define TILE_WIDTH   32
`define TILE_COLUMNS 20
`define TILE_ROWS    15
`define NUM_VERTICES  3

typedef struct packed {
    logic [9:0] x;    // 10-bit x component
    logic [9:0] y;    // 10-bit y component
    logic [7:0] z;    // 8-bit z component
} coord_3d_t;

typedef struct packed {
    logic [9:0] x;    // 10-bit x component
    logic [9:0] y;    // 10-bit y component
} coord_2d_t;

typedef struct packed {
    logic [3:0]  color;     // 4-bit color (bits 15:12)
    logic [2:0]  padding;   // 3-bit padding (bits 11:9)
    logic [3:0]  tile_y;  
    logic [4:0]  tile_x;
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

// Treat v as an array of vertices
assign v = '{v0, v1, v2};

// valid signal set once tile is read from input
logic        vld_0;

// absolute position of the pixel in the tile
coord_2d_t   abs_pos;

// relative position of the pixel in the tile
logic [$clog2(`TILE_WIDTH*`TILE_WIDTH)-1:0] rel_pos;

// delta values used to update the edge functions
coord_2d_t   d [0:`NUM_VERTICES-1];

// current edge values
logic [$clog2(`TILE_WIDTH*`TILE_WIDTH)*2-1:0] edges [0:`NUM_VERTICES-1];

// color of the polygon
logic [3:0]  color;

logic [7:0] z_buffer     [0:(`TILE_WIDTH*`TILE_WIDTH)-1];
logic [3:0] color_buffer [0:(`TILE_WIDTH*`TILE_WIDTH)-1];


coord_2d_t temp_start;
coord_2d_t temp_d [0:`NUM_VERTICES-1];
always_comb begin

    // Shift is used to convert from tile coordinates to pixel coordinates
    temp_start.x = {metadata.tile_x, 5'd0};
    temp_start.y = {1'd0, metadata.tile_y, 5'd0};

    // Compute the differences
    deltas(temp_d, {v[1:2], v[0]}, v);
end

// Clock divider for multi-cycle path
logic [$clog2(`TILE_WIDTH*`TILE_WIDTH)-1:0] clk_accum = '0;
always_ff @(posedge clk) begin
    clk_accum <= clk_accum + 1;
end

// load in the vertices and compute the edges
always_ff @(posedge clk) begin 

    if (!rst_n) begin
        // Reset logic
        current = '{ default: '0 };
        d       = '{ default: '0 };
        edges   = '{ default: '0 };
        abs_pos = '{ default: '0 };
        rel_pos = '0;
        vld_0   = '0;
        vld_1   = '0;
        
    end else if (clk_accum == 0) begin  
        /* Only run this logic for each new tile */

        // Mark validity based on the input
        vld_0 <= vld_in;

        // Store the color
        color <= metadata.color;
        
        // Store the start position for the next cycle
        abs_pos <= temp_start;
        rel_pos <= '0;

        // Store the differences for the next cycle
        for (int i = 0; i < `NUM_VERTICES; i++) begin
            d[i] <= temp_d[i];
        end

        // Compute the edges using the current values
        // Note: We use the immediate value of temp_start instead of the not-yet-updated start
        edge_compute_base(edges, temp_start, temp_d, v);

        // Compute the z-depth value
        // Note: This is a placeholder and should be replaced with the actual z-depth calculation
    end


end

// Process each pixel in the tile
always_ff @(posedge clk) begin

    if (!rst_n == 0) begin
        // Reset should freeze this logic
    end else begin
        // edge and depth check
        if (vld_0 && $signed(edge_0) > 0 && $signed(edge_1) > 0 && $signed(edge_2) > 0 /* && z-depth check */) begin
            // Update the z-buffer
            /* ... */
            // Write to the color buffer
            color_buffer[rel_pos] <= color;
        end 

        // Update next position and the edge values
        if ((abs_pos.y & `TILE_WIDTH-1) == (`TILE_WIDTH-1) 
         && (abs_pos.x & `TILE_WIDTH-1) == (`TILE_WIDTH-1)) begin

            // At the end of a tile, do nothing until tile is updated

        end else if ((abs_pos.x & `TILE_WIDTH-1) == (`TILE_WIDTH-1)) begin
            // Update the absolute position
            abs_pos.x <= abs_pos.x - (`TILE_WIDTH-1);
            abs_pos.y <= abs_pos.y + 1;

            // Update the relative position
            rel_pos <= rel_pos + 1;

            // Update the edge values
            edge_row_step(edges, d);

            // Update the z-depth value
            // Note: This is a placeholder and should be replaced with the actual z-depth calculation

        end else begin
            // Update the absolute position
            abs_pos.x <= abs_pos.x + 1;

            // Update the relative position
            rel_pos <= rel_pos + 1;

            // Update the edge values
            edge_column_step(edges, d);

            // Update the z-depth value
            // Note: This is a placeholder and should be replaced with the actual z-depth calculation
        end
    end

end

// When frame number changes, flush the color buffer to the output, and reset the z and color buffers
always_ff @(posedge clk) begin

end

// Compute the deltas between two sets of vertices
function void deltas(
    coord_2d_t out [0:`NUM_VERTICES-1], 
    coord_3d_t a [0:`NUM_VERTICES-1], 
    coord_3d_t b [0:`NUM_VERTICES-1]
    );

    for (int i = 0; i < `NUM_VERTICES; i++) begin
        out[i].x = a[i].x - b[i].x;
        out[i].y = a[i].y - b[i].y;
    end

endfunction

// Compute the edge functions from the start position
function void edge_compute_base(
    logic [$clog2(`TILE_WIDTH*`TILE_WIDTH)*2-1:0] edges [0:`NUM_VERTICES-1], 
    coord_2d_t start,
    coord_2d_t d [0:`NUM_VERTICES-1],
    coord_3d_t v [0:`NUM_VERTICES-1]
    );
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        edges[i] <= (start.x - v[i].x) * d[i].y +
                    (start.y - v[i].y) * d[i].x;
    end
endfunction

// Update the edge functions for a step in the column direction
function void edge_column_step(
    logic [$clog2(`TILE_WIDTH*`TILE_WIDTH)*2-1:0] edges [0:`NUM_VERTICES-1], 
    coord_2d_t d [0:`NUM_VERTICES-1]
    );

    for (int i = 0; i < `NUM_VERTICES; i++) begin
        edges[i] <= edges[i] + d[i];
    end
endfunction

// Update the edge functions for a step in the row direction
function void edge_row_step(
    logic [$clog2(`TILE_WIDTH*`TILE_WIDTH)*2-1:0] edges [0:`NUM_VERTICES-1], 
    coord_2d_t d [0:`NUM_VERTICES-1]
    );

    for (int i = 0; i < `NUM_VERTICES; i++) begin
        edges[i] <= edges[i] - {d[i].y, 5'd0} - d[i].x;
    end
endfunction


endmodule
