//----------------------------------------------------------------------------------------------------------------------
// Module: lp_div
//
// Author: Riley Peters
//
// Description:
// This module implements a low-resource divider, suitable for scenarios where
// dedicated hardware dividers are unavailable or when a multi-cycle operation
// is acceptable. It performs division of a numerator (`numer_i`) by a
// denominator (`denom_i`) over several clock cycles using an iterative
// restoring division algorithm.
//
// The module supports fixed-point arithmetic, where the number of fractional
// bits is defined by the `FRAC_BITS` parameter. It also supports both signed
// and unsigned division, configurable via the `SIGNED` parameter.
//
// Operation:
// 1. When `vld_i` is asserted, the module is `IDLE` (or `DONE` with a previous
//    operation), and `denom_i` is non-zero, it latches the inputs.
// 2. If `SIGNED` is true, it converts the numerator and denominator to their
//    absolute values and determines the sign of the final quotient.
// 3. For fixed-point division (to maintain precision when dividing two numbers
//    assumed to be in QX.FRAC_BITS format), the absolute numerator is effectively
//    shifted left by `FRAC_BITS` to form an `extended_numer`. The `divisor` is
//    the absolute denominator, appropriately aligned.
// 4. The division is performed iteratively using a restoring algorithm:
//    - A `remainder` register is initialized to zero.
//    - An `abs_quot` register (for the quotient) is initialized to zero.
//    - A `bit_counter` tracks the progress.
//    - In each cycle of the `DIVIDING` state:
//        a. The `remainder` is shifted left by one bit, and the next bit from
//           `extended_numer` is shifted into the LSB of `remainder`.
//        b. `extended_numer` is also shifted left.
//        c. If the current `remainder` is greater than or equal to the `divisor`:
//           i.  The `divisor` is subtracted from `remainder`.
//           ii. The LSB of `abs_quot` is set to '1'.
//        d. Else (if `remainder` is less than `divisor`):
//           i.  The LSB of `abs_quot` is set to '0'.
//        e. `abs_quot` is shifted left (prior to setting the LSB, effectively making space for the new bit).
// 5. This process continues for `DATA_WIDTH + FRAC_BITS` cycles.
// 6. Once complete, the state transitions to `DONE`, `vld_o` is asserted, and
//    `quot_o` holds the result. If `SIGNED` is true, `abs_quot` is negated if
//    the original inputs had opposite signs.
// 7. The module signals `rdy_in_o` when it's ready to accept a new division.
//    Division by zero is handled by remaining in/returning to the `IDLE` state
//    without starting the division process if `denom_i` is zero.
//
// State Machine:
//   - IDLE: Waiting for valid input and a non-zero denominator.
//   - DIVIDING: Performing the iterative division steps.
//   - DONE: Division is complete, output is valid.
//
// Parameters:
//   DATA_WIDTH: Specifies the bit width of the input operands (`numer_i`, `denom_i`)
//               and the output quotient (`quot_o`).
//   FRAC_BITS:  Specifies the number of fractional bits for fixed-point arithmetic.
//               The inputs are assumed to have `FRAC_BITS` fractional bits, and
//               the output quotient will also have `FRAC_BITS` fractional bits.
//   SIGNED:     A boolean-like parameter (1 for signed, 0 for unsigned) that
//               determines whether the division handles signed numbers.
//
// Inputs:
//   clk_i:      Clock signal.
//   rst_n_i:    Synchronous reset, active low.
//   vld_i:      Valid signal indicating that `numer_i` and `denom_i` are valid.
//   numer_i:    The numerator for the division.
//   denom_i:    The denominator for the division.
//
// Outputs:
//   rdy_in_o:   Ready signal, asserted when the module can accept new inputs.
//               It is high in IDLE or DONE states.
//   vld_o:      Valid signal, asserted when `quot_o` holds a valid result.
//               It is high in the DONE state.
//   quot_o:     The result of `numer_i / denom_i`.
//
//----------------------------------------------------------------------------------------------------------------------



module lp_div 
#(
    parameter DATA_WIDTH = 32,
    parameter FRAC_BITS  = 8,
    parameter SIGNED     = 1 
)
(
    input                         clk_i,
    input                         rst_n_i,
    input                         vld_i,
    input        [DATA_WIDTH-1:0] numer_i,
    input        [DATA_WIDTH-1:0] denom_i,

    output logic                  rdy_in_o,
    output logic                  vld_o,
    output logic [DATA_WIDTH-1:0] quot_o
);


// State machine states
typedef enum logic [1:0] {
    IDLE     = 2'b00,
    DIVIDING = 2'b01,
    DONE     = 2'b10
} state_t;

state_t state, next_state;

// Internal registers
logic [DATA_WIDTH+FRAC_BITS-1:0]   divisor;
logic [DATA_WIDTH+FRAC_BITS-1:0]   remainder;
logic [$clog2(DATA_WIDTH+FRAC_BITS):0] bit_counter;

// For fixed-point division A/B where both are in QX.FRAC_BITS format,
// we need to shift numerator left by FRAC_BITS to maintain precision
logic [DATA_WIDTH+FRAC_BITS-1:0] extended_numer;

// Sign handling for signed division
logic result_sign;
logic numer_negative, denom_negative;
logic [DATA_WIDTH-1:0] abs_numer, abs_denom, abs_quot;

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
            // begin dividing if input is valid and denominator is nonzero
            if (vld_i && |denom_i) begin
                next_state = DIVIDING;
            end
        end

        DONE : begin
            // begin dividing if input is valid and denominator is nonzero
            if (vld_i && |denom_i) begin
                next_state = DIVIDING;
            end
        end

        DIVIDING : begin
            // if the bit_counter reached bit width, next state is done
            if (bit_counter >= DATA_WIDTH + FRAC_BITS - 1) begin
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
            numer_negative = numer_i[DATA_WIDTH-1];
            denom_negative = denom_i[DATA_WIDTH-1];
            // Convert to absolute values using two's complement
            abs_numer = numer_negative ? (~numer_i + 1'b1) : numer_i;
            abs_denom = denom_negative ? (~denom_i + 1'b1) : denom_i;
            // handle output sign combinationally
            quot_o = result_sign ? (~abs_quot + 1'b1) : abs_quot;
        end
    end else begin : gen_unsigned
        always_comb begin
            numer_negative = 1'b0;
            denom_negative = 1'b0;
            abs_numer = numer_i;
            abs_denom = denom_i;
            quot_o = abs_quot;
        end
    end
endgenerate

/////////////////////////////////////////////////////////////////////////////

// Division logic for fixed-point numbers
always_ff @(posedge clk_i) begin
    if (!rst_n_i) begin
        result_sign    <= '0; 
        divisor        <= '0;
        remainder      <= '0;
        abs_quot       <= '0;
        bit_counter    <= '0;
        extended_numer <= '0;
    end else begin
        case (state)
            IDLE : begin
                if (vld_i && |denom_i) begin
                    // Initialize for new division using absolute values
                    result_sign    <= numer_negative ^ denom_negative;
                    divisor        <= {{FRAC_BITS{1'b0}}, abs_denom};
                    extended_numer <= {abs_numer, {FRAC_BITS{1'b0}}};
                    remainder      <= '0;
                    abs_quot       <= '0;
                    bit_counter    <= '0;
                end
            end

            DONE : begin
                if (vld_i && |denom_i) begin
                    // Initialize for new division using absolute values
                    result_sign    <= numer_negative ^ denom_negative;
                    divisor        <= {{FRAC_BITS{1'b0}}, abs_denom};
                    extended_numer <= {abs_numer, {FRAC_BITS{1'b0}}};
                    remainder      <= '0;
                    abs_quot       <= '0;
                    bit_counter    <= '0;
                end
            end
            
            DIVIDING : begin
                // Shift remainder and bring in next bit from extended numerator
                remainder <= {remainder[DATA_WIDTH+FRAC_BITS-2:0], extended_numer[DATA_WIDTH+FRAC_BITS-1]};
                extended_numer <= extended_numer << 1;
                
                // Check if we can subtract divisor from remainder
                if ({remainder[DATA_WIDTH+FRAC_BITS-2:0], extended_numer[DATA_WIDTH+FRAC_BITS-1]} >= divisor) begin
                    // Subtract divisor and set quotient bit
                    remainder <= {remainder[DATA_WIDTH+FRAC_BITS-2:0], extended_numer[DATA_WIDTH+FRAC_BITS-1]} - divisor;
                    abs_quot  <= (abs_quot << 1) | {{DATA_WIDTH-1{1'b0}},1'b1};
                end else begin
                    // Can't subtract, just shift quotient
                    abs_quot <= abs_quot << 1;
                end
                
                bit_counter <= bit_counter + 1;
            end
            
            default : begin
                // Do nothing otherwise
            end
        endcase
    end
end

/////////////////////////////////////////////////////////////////////////////

endmodule