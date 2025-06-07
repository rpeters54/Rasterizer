`ifndef RASTER_DEFINES
`define RASTER_DEFINES

// Fixed point macros
`define FX_INT_BITS         (12)
`define FX_FRAC_BITS        (4)
`define FX_TOTAL_BITS       (`FX_INT_BITS + `FX_FRAC_BITS)

`define SCREEN_WIDTH        (640)
`define SCREEN_HEIGHT       (480)
// Tile macros
`define TILE_WIDTH          (16)
`define TILE_AREA           (`TILE_WIDTH*`TILE_WIDTH)
`define TILE_WIDTH_BITS     ($clog2(`TILE_WIDTH))
`define TILE_AREA_BITS      ($clog2(`TILE_AREA))
`define TILE_COLUMNS        (`SCREEN_WIDTH/`TILE_WIDTH)
`define TILE_ROWS           (`SCREEN_HEIGHT/`TILE_WIDTH)
`define TILE_COLUMNS_BITS   ($clog2(`TILE_COLUMNS))
`define TILE_ROWS_BITS      ($clog2(`TILE_ROWS))
`define NUM_VERTICES        (3)
`define COLOR_BITS          (8)

`endif