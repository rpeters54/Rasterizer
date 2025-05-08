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
    PASS_ONWARD,
    AWAIT_RESPONSE
} tile_state_t;

typedef enum {
    IDLE,
    FLUSHING,
    PROCESS
} pixel_state_t;