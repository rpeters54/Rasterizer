//----------------------------------------------------------------------------------------------------------------------
// Module: lp_mul
//
// Author: Riley Peters
//
// Description:
// This module implements a low-resource multiplier, suitable for scenarios where
// hardware resources (like dedicated DSP blocks) are limited or when a multi-cycle
// operation is acceptable. It performs multiplication of two input numbers
// (`left_i` and `right_i`) over several clock cycles using an iterative
// shift-and-add algorithm.
//
// The module supports both signed and unsigned multiplication, configurable via
// the `SIGNED` parameter.
//
// Operation:
// 1. When `vld_i` is asserted and the module is `IDLE` or `DONE` with a previous
//    operation, it latches the inputs.
// 2. If `SIGNED` is true, it converts the inputs to their absolute values and
//    determines the sign of the final product.
// 3. The multiplication is performed iteratively:
//    - A `mask` register (initialized with `abs_left`) is shifted right each cycle.
//    - An `offset` register (initialized with `abs_right` in the lower bits and
//      zeros in the upper bits) is shifted left each cycle.
//    - If the LSB of the `mask` is '1', the current `offset` value is added to
//      the `abs_product` accumulator.
// 4. This process continues for `DATA_WIDTH` cycles (until `mask` becomes zero
//    after all bits have been checked).
// 5. Once complete, the state transitions to `DONE`, `vld_o` is asserted, and
//    `product_o` holds the result. If `SIGNED` is true, the `abs_product` is
//    negated if the original inputs had opposite signs.
// 6. The module signals `rdy_in_o` when it's ready to accept a new multiplication.
//
// State Machine:
//   - IDLE: Waiting for valid input.
//   - MULTIPLYING: Performing the iterative multiplication steps.
//   - DONE: Multiplication is complete, output is valid.
//
// Parameters:
//   DATA_WIDTH: Specifies the bit width of the input operands (`left_i`, `right_i`).
//               The product (`product_o`) will be `DATA_WIDTH*2` bits.
//   SIGNED:     A boolean-like parameter (1 for signed, 0 for unsigned) that
//               determines whether the multiplication handles signed numbers.
//
// Inputs:
//   clk_i:      Clock signal.
//   rst_n_i:    Synchronous reset, active low.
//   vld_i:      Valid signal indicating that `left_i` and `right_i` are valid.
//   left_i:     The first operand for multiplication.
//   right_i:    The second operand for multiplication.
//
// Outputs:
//   rdy_in_o:   Ready signal, asserted when the module can accept new inputs.
//               It is high in IDLE or DONE states.
//   vld_o:      Valid signal, asserted when `product_o` holds a valid result.
//               It is high in the DONE state.
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


// State machine states
typedef enum logic [1:0] {
    IDLE        = 2'b00,
    MULTIPLYING = 2'b01,
    DONE        = 2'b10
} state_t;

state_t state, next_state;

// Internal registers
logic [DATA_WIDTH-1:0]     mask;
logic [DATA_WIDTH*2-1:0]   offset;

// Sign handling for signed multiplication
logic product_sign, left_negative, right_negative;
logic [DATA_WIDTH-1:0]   abs_left, abs_right;
logic [DATA_WIDTH*2-1:0] abs_product;

/////////////////////////////////////////////////////////////////////////////

// assign outputs 
assign rdy_in_o  = (state == IDLE || state == DONE);
assign vld_o     = (state == DONE);

/////////////////////////////////////////////////////////////////////////////

// State machine
always_ff @(posedge clk_i) begin
    if (!rst_n_i) begin
        state <= IDLE;
    end else begin
        state <= next_state;
    end
end

always_comb begin
    next_state = state;
    case (state)
        IDLE : begin
            // begin dividing if input is valid
            if (vld_i) begin
                next_state = MULTIPLYING;
            end
        end
        MULTIPLYING : begin
            // if the bit_counter reached bit width, next state is done
            if ((mask >> 1) == 0) begin
                next_state = DONE;
            end
        end
        DONE : begin
            // back go back to multiplying on next valid input
            if (vld_i) begin
                next_state = MULTIPLYING;
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

// Division logic for fixed-point numbers
always_ff @(posedge clk_i) begin
    if (!rst_n_i) begin
        product_sign   <= '0; 
        mask           <= '0;
        offset         <= '0;
        abs_product    <= '0;
    end else begin
        case (state)
            IDLE : begin
                if (vld_i) begin
                    // Initialize for new division using absolute values
                    product_sign <= left_negative ^ right_negative;
                    mask         <= abs_left;
                    offset       <= {{DATA_WIDTH{1'b0}}, abs_right};
                    abs_product  <= '0;
                end
            end

            DONE : begin
                if (vld_i) begin
                    // Initialize for new division using absolute values
                    product_sign <= left_negative ^ right_negative;
                    mask         <= abs_left;
                    offset       <= {{DATA_WIDTH{1'b0}}, abs_right};
                    abs_product  <= '0;
                end
            end
            
            MULTIPLYING : begin

                // check mask bit for potential add
                if (mask[0] && 1'b1) begin
                    abs_product <= abs_product + offset;
                end
                
                // update offset and mask
                offset <= offset << 1;
                mask   <= mask >> 1;
            end
            
            default : begin
                // Do nothing otherwise
            end
        endcase
    end
end

/////////////////////////////////////////////////////////////////////////////

endmodule