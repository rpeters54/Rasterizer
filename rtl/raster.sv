
// Fixed point macros
`define FX_INT_BITS     (12)
`define FX_FRAC_BITS    (4)
`define FX_TOTAL_BITS   (`FX_INT_BITS + `FX_FRAC_BITS)

// Tile macros
`define TILE_WIDTH      (16)
`define TILE_AREA       (`TILE_WIDTH*`TILE_WIDTH)
`define TILE_BIT_WIDTH  ($clog2(`TILE_AREA))
`define TILE_COLUMNS    (640/`TILE_WIDTH)
`define TILE_ROWS       (480/`TILE_WIDTH)
`define NUM_VERTICES    (3)
`define NUM_COLORS      (8)

`define PIPELINE_STAGES (5)

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
} metadata_t;

typedef enum {
    INPUT,
    DETERMINANT,
    SCALING,
    Z_VALUE,
    PASS_ONWARD
} tile_state_t;

typedef enum {
    IDLE,
    FLUSHING,
    COMPUTING
} pixel_state_t;

module raster(
    input             clk,
    input             rst_n,
    input             rdy_out,
    input             vld_in,
    input  coord_3d_t v0,
    input  coord_3d_t v1,
    input  coord_3d_t v2,
    input  metadata_t metadata,

    output logic        rdy_in,
    output logic        vld_out,
    output logic [`NUM_COLORS-1:0]  color_out,
    output coord_2d_t   pixel_out
);

// Treat v as an array of vertices
coord_3d_t v [0:`NUM_VERTICES-1];
v = '{v0, v1, v2};

tile_state_t tile_present_state, tile_next_state;
tile_present_state = INPUT;

logic signed [`FX_TOTAL_BITS*2-1:0] z_buffer     [0:`TILE_AREA-1];
logic [3:0]                         color_buffer [0:`TILE_AREA-1];

coord_3d_t temp_start;
coord_3d_t temp_d [0:`NUM_VERTICES-1];

always_comb begin
    // convert from tile number to pixel coordinates
    tile_to_coord(temp_start, metadata);
    // compute the deltas between all vertices in clockwise order
    deltas(temp_d, {v[1:2], v[0]}, v);
end

always_comb begin
    case (tile_present_state)
        INPUT: begin
            if (vld_in && rdy_in) begin
                tile_next_state = DETERMINANT;
            end else begin
                tile_next_state = INPUT;
            end
        end
        DETERMINANT: begin
            tile_next_state = SCALING;
        end
        SCALING: begin
            tile_next_state = Z_VALUE;
        end
        Z_VALUE: begin
            tile_next_state = PASS_ONWARD;
        end
        PASS_ONWARD: begin
            if (rdy_out) begin
                tile_next_state = INPUT;
            end else begin
                tile_next_state = PASS_ONWARD;
            end
        end
        default: begin
            tile_next_state = INPUT;
        end
    endcase
end

coord_3d_t                          abs_pos;
logic        [`TILE_BIT_WIDTH-1:0]  rel_pos;
coord_3d_t                          deltas  [0:`NUM_VERTICES-1];
logic signed [`FX_TOTAL_BITS*2-1:0] edges   [0:`NUM_VERTICES-1];
logic [3:0]                         color;

logic [`FX_TOTAL_BITS*2-1:0] tri_area_2, dzdx_undiv, dzdy_undiv;  
logic [`FX_TOTAL_BITS*2-1:0] dzdx, dzdy;
logic [`FX_TOTAL_BITS*2-1:0] current_z;

always_ff @(posedge clk) begin 
    if (!rst_n) begin
        // Reset logic
        vld[0]          <= '0;
        abs_pos         <= '{ default: '0 };
        rel_pos         <= '0;
        d               <= '{ default: '0 };
        edges           <= '{ default: '0 };
        color           <= '0;
        z_buffer        <= '{ default: '0 };
        color_buffer    <= '{ default: '0 };

        tri_area_2 <= '0;
        dzdx_undiv <= '0;
        dzdy_undiv <= '0;

        dzdx <= '0;
        dzdy <= '0;

        current_z <= '0;

        rdy_in          <= '1;
    end else begin
        present_state <= next_state;

        case (present_state)
            INPUT: begin
                // Deassert ready signal if valid input is received
                rdy_in <= vld_in ? '0 : rdy_in;

                // Store the color
                color <= metadata.color;
            
                // Store the start position for the next cycle
                abs_pos <= temp_start;
                rel_pos <= '0;

                // Store the differences for the next cycle
                for (int i = 0; i < `NUM_VERTICES; i++) begin
                    deltas[i] <= temp_d[i];
                end

                // Compute the edges using the current tile's top-left pixel
                for (int i = 0; i < `NUM_VERTICES; i++) begin
                    edges[i] <= (temp_start.x - v[i].x) * temp_d[i].y +
                                (temp_start.y - v[i].y) * temp_d[i].x;
                end
            end
            DETERMINANT: begin
                // Compute the determinant of the triangle and unscaled dzdx and dzdy
                tri_area_2  <= (deltas[0].x * deltas[2].y - deltas[2].x * deltas[0].y);
                dzdx_undiv  <= (deltas[1].y * v[0].z + deltas[2].y * v[1].z + deltas[0].y * v[2].z);
                dzdy_undiv  <= -(deltas[0].x * v[0].z + deltas[1].x * v[1].z + deltas[2].x * v[2].z);
            end
            SCALING: begin
                // Compute the scaled dzdx and dzdy
                dzdx    <= (dzdx_undiv/tri_area_2);
                dzdy    <= (dzdy_undiv/tri_area_2);
            end
            Z_VALUE: begin
                // Compute the z for the top left pixel
                current_z <= v[0].z + (v[0].x - abs_pos.x) * dzdx + (v[0].y - abs_pos.y) * dzdy
            end
            PASS_ONWARD: begin
                // Propagate the valid signal
                vld[0] <= '1;
            end
        endcase
    end
end


pixel_state_t pixel_present_state, pixel_next_state;
pixel_present_state = IDLE;

// Process each pixel in the tile
always_ff @(posedge clk) begin
    if (!rst_n) begin
        // do nothing
    end else begin
        // edge and depth check
        if (vld[3] && inside_polygon(edges) > 0 && depth_test(rel_pos, z_current, z_buffer)) begin
            z_buffer[rel_pos]     <= z_current;
            color_buffer[rel_pos] <= color;
        end 

        // Update next position and the edge values
        if ((abs_pos.y >> `FX_FRAC_BITS) >= (`TILE_WIDTH-1) && 
            (abs_pos.x >> `FX_FRAC_BITS) >= (`TILE_WIDTH-1)) begin

            // At the end of a tile, do nothing until tile is updated

        end 
        else if ((abs_pos.x >> `FX_FRAC_BITS) >= (`TILE_WIDTH-1)) begin
            // Update the absolute position
            abs_pos.x <= abs_pos.x - (`TILE_WIDTH-1);
            abs_pos.y <= abs_pos.y + 1;

            // Update the relative position
            rel_pos <= rel_pos + 1;

            // Update the edge values
            for (int i = 0; i < `NUM_VERTICES; i++) begin
                edges[i] <= edges[i] - {d[i].y, 5'd0} - d[i].x;
            end

        end 
        else begin
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
    logic        [`TILE_BIT_WIDTH-1:0]  rel_pos,
    logic signed [`FX_TOTAL_BITS*2-1:0] z_current,
    logic signed [`FX_TOTAL_BITS*2-1:0] z_buffer  [0:`TILE_AREA-1];
    );
    return (z_current < z_buffer[rel_pos]);
endfunction

function void tile_to_coord(
    coord_3d_t out,
    metadata_t in
    );
    out.x = (in.tile_x << 5) << `FX_FRAC_BITS;
    out.y = (in.tile_y << 5) << `FX_FRAC_BITS;
    out.z = 0;
endfunction

// Compute the deltas between two sets of vertices
function void deltas(
    coord_3d_t out [0:`NUM_VERTICES-1], 
    coord_3d_t a   [0:`NUM_VERTICES-1], 
    coord_3d_t b   [0:`NUM_VERTICES-1]
    );

    for (int i = 0; i < `NUM_VERTICES; i++) begin
        out[i].x = a[i].x - b[i].x;
        out[i].y = a[i].y - b[i].y;
        out[i].z = a[i].z - b[i].z;
    end
endfunction


endmodule
