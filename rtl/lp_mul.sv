//----------------------------------------------------------------------------------------------------------------------
// Module: lp_mul
//
// Author: Riley Peters
//
// Description:
// This module implements a low-resource Radix-4 iterative multiplier. It is
// suitable for scenarios where hardware resources are limited (e.g., ASICs where
// a full parallel multiplier is too large) and a multi-cycle operation is
// acceptable. It performs multiplication of two input numbers (`left_i` and
// `right_i`) by processing two bits of the multiplier per cycle.
//
// The module supports both signed and unsigned multiplication, configurable via
// the `SIGNED` parameter. An assertion checks that DATA_WIDTH is >= 2.
//
// Parameters:
//   DATA_WIDTH: Specifies the bit width of the input operands (`left_i`, `right_i`).
//               The product (`product_o`) will be `DATA_WIDTH*2` bits.
//               An assertion ensures DATA_WIDTH >= 2.
//   SIGNED:     A boolean-like parameter (1 for signed, 0 for unsigned) that
//               determines whether the multiplication handles signed numbers.
//
// Inputs:
//   clk_i:      Clock signal.
//   rst_n_i:    Synchronous reset, active low.
//   vld_i:      Valid signal indicating that `left_i` and `right_i` are valid.
//   left_i:     The first operand for multiplication (multiplicand).
//   right_i:    The second operand for multiplication (multiplier).
//
// Outputs:
//   rdy_in_o:   Ready signal, asserted when the module can accept new inputs.
//   vld_o:      Valid signal, asserted when `product_o` holds a valid result.
//   product_o:  The result of `left_i * right_i`. This output is `DATA_WIDTH*2` bits wide.
//
//----------------------------------------------------------------------------------------------------------------------

module lp_mul
#(
    parameter DATA_WIDTH = 32,
    parameter SIGNED     = 1 
)
(
    input                           clk_i,
    input                           rst_n_i,
    input                           vld_i,
    input        [DATA_WIDTH-1:0]   left_i,
    input        [DATA_WIDTH-1:0]   right_i,

    output logic                    rdy_in_o,
    output logic                    vld_o,
    output logic [DATA_WIDTH*2-1:0] product_o
);

// Internal registers
logic [DATA_WIDTH-1:0]     mask;
logic [DATA_WIDTH*2-1:0]   offset;

// Sign handling for signed multiplication
logic product_sign, left_negative, right_negative;
logic [DATA_WIDTH-1:0]   abs_left, abs_right;
logic [DATA_WIDTH*2-1:0] abs_product;

/////////////////////////////////////////////////////////////////////////////

// assertions to check parameter formatting
initial begin
    assert (DATA_WIDTH >= 2 || DATA_WIDTH % 2 == 0) else 
        $error ("DATA_WIDTH must be >= 2 and divisible by 2 to allow for Radix-4 multiplication, DATA_WIDTH: %d", DATA_WIDTH);
end


/////////////////////////////////////////////////////////////////////////////

// State machine states
typedef enum logic [1:0] {
    IDLE        = 2'b00,
    MULTIPLYING = 2'b01,
    DONE        = 2'b10
} state_t;

state_t present_state, next_state;

// State machine
always_ff @(posedge clk_i) begin
    if (!rst_n_i) begin
        present_state <= IDLE;
    end else begin
        present_state <= next_state;
    end
end

always_comb begin
    next_state = present_state;
    case (present_state)
        IDLE : begin
            // begin dividing if input is valid
            if (vld_i) begin
                next_state = MULTIPLYING;
            end
        end

        DONE : begin
            // back go back to multiplying on next valid input
            if (vld_i) begin
                next_state = MULTIPLYING;
            end
        end

        MULTIPLYING : begin
            // if the bit_counter reached bit width, next state is done
            if ((mask >> 2) == 0) begin
                next_state = DONE;
            end
        end
        default : begin
        end
    endcase
end

/////////////////////////////////////////////////////////////////////////////

// Sign detection and absolute value conversion
generate
    if (SIGNED) begin : gen_signed
        always_comb begin
            left_negative  = left_i[DATA_WIDTH-1];
            right_negative = right_i[DATA_WIDTH-1];
            // Convert to absolute values using two's complement
            abs_left  = left_negative  ? (~left_i + 1'b1)  : left_i;
            abs_right = right_negative ? (~right_i + 1'b1) : right_i;
            // handle output sign combinationally
            product_o = product_sign ? (~abs_product + 1'b1) : abs_product;
        end
    end else begin : gen_unsigned
        always_comb begin
            left_negative  = 1'b0;
            right_negative = 1'b0;
            abs_left       = left_i;
            abs_right      = right_i;
            product_o      = abs_product;
        end
    end
endgenerate

/////////////////////////////////////////////////////////////////////////////

// assign outputs 
assign rdy_in_o  = (present_state == IDLE || present_state == DONE);
assign vld_o     = (present_state == DONE);

/////////////////////////////////////////////////////////////////////////////

logic [DATA_WIDTH*2-1:0] next_offset;

// Combinational logic for handling what is added each cycle
always_comb begin
    if (present_state == MULTIPLYING) begin
        case (mask[1:0])
            2'b11 : begin
                next_offset = (offset << 1) + offset;
            end
            2'b10 : begin
                next_offset = offset << 1;
            end
            2'b01 : begin
                next_offset = offset;
            end
            2'b00 : begin
                next_offset = 0;
            end
        endcase
    end else begin
        next_offset = 0;
    end
end


/////////////////////////////////////////////////////////////////////////////

// Latching logic for each iteration
always_ff @(posedge clk_i) begin
    if (!rst_n_i) begin
        product_sign   <= '0; 
        mask           <= '0;
        offset         <= '0;
        abs_product    <= '0;
    end else begin
        if ((present_state == IDLE || present_state == DONE) && next_state == MULTIPLYING) begin
            // Initialize for new multiplication using absolute values
            product_sign <= left_negative ^ right_negative;
            mask         <= abs_left;
            offset       <= {{DATA_WIDTH{1'b0}}, abs_right};
            abs_product  <= '0;
        end else if (present_state == MULTIPLYING) begin

            // add combinationally computed offset to the result
            abs_product <= abs_product + next_offset;
            // update offset and mask by two spaces
            offset <= offset << 2;
            mask   <= mask >> 2;
        end
    end
end

/////////////////////////////////////////////////////////////////////////////

endmodule