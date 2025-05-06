
// Fixed point macros
`define FX_INT_BITS   (12)
`define FX_FRAC_BITS  (4)
`define FX_TOTAL_BITS (`FX_INT_BITS + `FX_FRAC_BITS)

// Tile macros
`define TILE_WIDTH     (16)
`define TILE_AREA      (`TILE_WIDTH*`TILE_WIDTH)
`define TILE_BIT_WIDTH ($clog2(`TILE_AREA))
`define TILE_COLUMNS   (640/`TILE_WIDTH)
`define TILE_ROWS      (480/`TILE_WIDTH)
`define NUM_VERTICES   (3)

// Note: values for the coord structs are in fixed point
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
coord_3d_t v [0:`NUM_VERTICES-1];
assign v = '{v0, v1, v2};

// valid signal set once tile is read from input
logic        vld_0, vld_1;

// absolute position of the pixel in the tile
coord_2d_t   abs_pos;

// relative position of the pixel in the tile
logic [`TILE_BIT_WIDTH-1:0] rel_pos;

// delta values used to update the edge functions
coord_2d_t   d [0:`NUM_VERTICES-1];

// current edge values
logic signed [`FX_TOTAL_BITS*2-1:0] edges [0:`NUM_VERTICES-1];

// color of the polygon
logic [3:0]  color;

logic signed [`FX_TOTAL_BITS*2-1:0] z_buffer     [0:`TILE_AREA-1];
logic [3:0]                         color_buffer [0:`TILE_AREA-1];

logic [`FX_TOTAL_BITS*2-1:0] det, dzdx, dzdy, z_intercept, z_current;


coord_2d_t temp_start;
coord_2d_t temp_d [0:`NUM_VERTICES-1];
always_comb begin
    // convert from tile number to pixel coordinates
    tile_to_coord(temp_start, metadata);
    // compute the deltas between all vertices in clockwise order
    deltas(temp_d, {v[1:2], v[0]}, v);
end

// Clock divider for multi-cycle path
logic [`TILE_BIT_WIDTH-1:0] clk_accum = '0;
always_ff @(posedge clk) begin
    clk_accum <= clk_accum + 1;
end

// load in the vertices and compute the edges
always_ff @(posedge clk) begin 

    if (!rst_n) begin
        // Reset logic
        d       = '{ default: '0 };
        edges   = '{ default: '0 };
        abs_pos = '{ default: '0 };
        rel_pos = '0;
        vld_0   = '0;
        
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
        for (int i = 0; i < `NUM_VERTICES; i++) begin
            edges[i] <= (temp_start.x - v[i].x) * temp_d[i].y +
                        (temp_start.y - v[i].y) * temp_d[i].x;
        end

        // Compute planar equations
        det <=  ((edges[1].x - edges[0].x) * (edges[2].y - edges[0].y) - 
                 (edges[2].x - edges[0].x) * (edges[1].y - edges[0].y));
        dzdx <= ((edges[1].z - edges[0].z) * (edges[2].y - edges[0].y) - 
                 (edges[2].z - edges[0].z) * (edges[1].y - edges[0].y));
        dzdy <= ((edges[1].x - edges[0].x) * (edges[2].z - edges[0].z) - 
                 (edges[2].x - edges[0].x) * (edges[1].z - edges[0].z));

        z_intercept = edges[0].z * det - dzdx * edges[0].x - dzdy * edges[0].y;
    end
end

// Compute the z value for the current pixel
always_ff @(posedge clk) begin
    if (!rst_n) begin
        // do nothing
    end else begin
        z_current <= dzdx * abs_pos.x + dzdy * abs_pos.y + z_intercept
        vld_1 <= vld_0;
    end
end

// Process each pixel in the tile
always_ff @(posedge clk) begin
    if (!rst_n) begin
        // do nothing
    end else begin
        // edge and depth check
        if (vld_1 && inside_polygon(edges) > 0 && depth_test(rel_pos, z_current, z_buffer)) begin
            z_buffer[rel_pos]     <= z_current;
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
            for (int i = 0; i < `NUM_VERTICES; i++) begin
                edges[i] <= edges[i] - {d[i].y, 5'd0} - d[i].x;
            end

        end else begin
            // Update the absolute position
            abs_pos.x <= abs_pos.x + 1;

            // Update the relative position
            rel_pos <= rel_pos + 1;

            // Update the edge values
            for (int i = 0; i < `NUM_VERTICES; i++) begin
                edges[i] <= edges[i] + d[i].y;
            end
        end
    end

end

// When tile number changes, flush the color buffer to the output, and reset the z and color buffers
always_ff @(posedge clk) begin

end

function logic inside_polygon(
    logic signed [`FX_TOTAL_BITS*2-1:0] edges [0:`NUM_VERTICES-1];
    );
    logic result = 1'b1;
    for (int i = 0; i < `NUM_VERTICES; i++) begin
        result &= (edges[i] > 0);
    end
    return result;
endfunction

function logic depth_test(
    logic [`TILE_BIT_WIDTH-1:0] rel_pos,
    logic signed [`FX_TOTAL_BITS*2-1:0] z_current,
    logic signed [`FX_TOTAL_BITS*2-1:0] z_buffer  [0:`TILE_AREA-1];
    );
    return (z_current < z_buffer[rel_pos]);
endfunction

function void tile_to_coord(
    coord_2d_t out,
    polygon_t  in
    );
    out.x = (in.tile_x << 5) << `FX_FRAC_BITS;
    out.y = (in.tile_y << 5) << `FX_FRAC_BITS;
endfunction

// Compute the deltas between two sets of vertices
function void deltas(
    coord_2d_t out [0:`NUM_VERTICES-1], 
    coord_3d_t a   [0:`NUM_VERTICES-1], 
    coord_3d_t b   [0:`NUM_VERTICES-1]
    );

    for (int i = 0; i < `NUM_VERTICES; i++) begin
        out[i].x = a[i].x - b[i].x;
        out[i].y = a[i].y - b[i].y;
    end
endfunction

/*
function [`FX_FRAC_BITS-1:0] fx_frac(
    logic signed [`FX_TOTAL_BITS-1:0] x
    );
    return x[`FX_FRAC_BITS-1:0];
endfunction

function logic signed [`FX_INT_BITS-1:0] fx_int(
    logic signed [`FX_TOTAL_BITS-1:0] x
    );
    return x[`FX_TOTAL_BITS-1:`FX_FRAC_BITS];
endfunction
*/

endmodule
