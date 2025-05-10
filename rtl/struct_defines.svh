`ifndef STRUCT_DEFINES
`define STRUCT_DEFINES

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

`endif