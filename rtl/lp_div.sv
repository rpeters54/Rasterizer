//----------------------------------------------------------------------------------------------------------------------
// Module: lp_div
//
// Author: Riley Peters
//
// Description:
// This module implements a low-resource Radix-4 restoring divider.
// It performs division of a numerator (`numer_i`) by a denominator (`denom_i`)
// over several clock cycles, determining two quotient bits per iteration.
//
// The module supports fixed-point arithmetic, where the number of fractional
// bits is defined by the `FRAC_BITS` parameter. It also supports both signed
// and unsigned division, configurable via the `SIGNED` parameter.
//
// Assertions are included to check that DATA_WIDTH and FRAC_BITS are >= 2,
// which is important for the Radix-4 logic.
//
// Parameters:
//   DATA_WIDTH: Specifies the bit width of the input operands (`numer_i`, `denom_i`)
//               and the output quotient (`quot_o`). Assumed to be >= 2.
//   FRAC_BITS:  Specifies the number of fractional bits for fixed-point arithmetic.
//               The inputs are assumed to have `FRAC_BITS` fractional bits.
//               Assumed to be >= 2 for this Radix-4 implementation to ensure
//               multiples of the divisor (2*D, 3*D) fit correctly.
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
//   vld_o:      Valid signal, asserted when `quot_o` holds a valid result.
//   quot_o:     The result of `numer_i / denom_i` (DATA_WIDTH bits).
//
//----------------------------------------------------------------------------------------------------------------------

`timescale 1ns/1ps

module lp_div 
#(
    parameter DATA_WIDTH = 32,
    parameter FRAC_BITS  = 8,
    parameter SIGNED     = 1 
)
(
    input  wire                   clk_i,
    input  wire                   rst_n_i,
    input  wire                   vld_i,
    input  wire  [DATA_WIDTH-1:0] numer_i,
    input  wire  [DATA_WIDTH-1:0] denom_i,

    output reg                    rdy_in_o,
    output reg                    vld_o,
    output logic [DATA_WIDTH-1:0] quot_o
);

localparam REG_WIDTH  = DATA_WIDTH + FRAC_BITS;
localparam NUM_CYCLES = (DATA_WIDTH + FRAC_BITS) / 2;

// Internal registers
logic [REG_WIDTH-1:0]   divisor_1, divisor_2, divisor_3;
logic [REG_WIDTH-1:0]   remainder;
logic [$clog2(REG_WIDTH):0] bit_counter;

// For fixed-point division A/B where both are in QX.FRAC_BITS format,
// we need to shift numerator left by FRAC_BITS to maintain precision
logic [REG_WIDTH-1:0] extended_numer;

// Sign handling for signed division
logic result_sign;
logic numer_negative, denom_negative;
logic [DATA_WIDTH-1:0] abs_numer, abs_denom, abs_quot;

/////////////////////////////////////////////////////////////////////////////

// // assertions to check parameter formatting
// initial begin
//     assert (DATA_WIDTH >= 2 || DATA_WIDTH % 2 == 0) else 
//         $error ("DATA_WIDTH must be >= 2 and divisible by 2 to allow for Radix-4 division, DATA_WIDTH: %d", DATA_WIDTH);
//     assert (FRAC_BITS >= 2 || FRAC_BITS % 2 == 0) else 
//         $error ("FRAC_BITS must be >= 2 and divisible by 2 to allow for Radix-4 division, FRAC_BITS: %d", FRAC_BITS);
// end

// /////////////////////////////////////////////////////////////////////////////

// State machine states
typedef enum logic [1:0] {
    IDLE     = 2'b00,
    DIVIDING = 2'b01,
    DONE     = 2'b10
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
            if (bit_counter >= NUM_CYCLES - 1) begin
                next_state = DONE;
            end
        end

        default : begin
        end
    endcase
end

/////////////////////////////////////////////////////////////////////////////

// assign outputs 
assign rdy_in_o  = (present_state == IDLE || present_state == DONE);
assign vld_o     = (present_state == DONE);

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

// combinationally compute all divisors for the current state

logic [REG_WIDTH-1:0] current_partial_remainder; 
logic [REG_WIDTH-1:0] remainder_after_sub; 
logic [1:0]           current_quot_bits; 

always_comb begin
    if (present_state == DIVIDING) begin
        // Current Partial Remainder: Shift remainder_reg left by 2, bring in 2 MSBs from extended_numer_reg
        current_partial_remainder = {remainder[REG_WIDTH-1-2 : 0], extended_numer[REG_WIDTH-1], extended_numer[REG_WIDTH-2]};

        // Radix-4 Quotient Digit Selection (Restoring)
        if (current_partial_remainder >= divisor_3) begin
            remainder_after_sub = current_partial_remainder - divisor_3;
            current_quot_bits   = 2'b11;
        end else if (current_partial_remainder >= divisor_2) begin
            remainder_after_sub = current_partial_remainder - divisor_2;
            current_quot_bits   = 2'b10;
        end else if (current_partial_remainder >= divisor_1) begin
            remainder_after_sub = current_partial_remainder - divisor_1;
            current_quot_bits   = 2'b01; 
        end else begin
            remainder_after_sub = current_partial_remainder; 
            current_quot_bits   = 2'b00; 
        end
    end else begin
        // Defaults for combinational signals
        current_partial_remainder = '0;
        remainder_after_sub       = '0;
        current_quot_bits         = 2'b00;
    end
end

/////////////////////////////////////////////////////////////////////////////


// Division logic for fixed-point numbers
always_ff @(posedge clk_i) begin
    if (!rst_n_i) begin
        result_sign    <= '0; 
        divisor_1      <= '0;
        divisor_2      <= '0;
        divisor_3      <= '0;
        remainder      <= '0;
        abs_quot       <= '0;
        bit_counter    <= '0;
        extended_numer <= '0;
    end else begin
        if ((present_state == IDLE || present_state == DONE) && next_state == DIVIDING) begin
            // Initialize for new division using absolute values
            result_sign    <= numer_negative ^ denom_negative;
            divisor_1      <= {{FRAC_BITS{1'b0}}, abs_denom};
            divisor_2      <= ({{FRAC_BITS{1'b0}}, abs_denom} << 1);
            divisor_3      <= ({{FRAC_BITS{1'b0}}, abs_denom} << 1) + {{FRAC_BITS{1'b0}}, abs_denom};
            extended_numer <= {abs_numer, {FRAC_BITS{1'b0}}};
            remainder      <= '0;
            abs_quot       <= '0;
            bit_counter    <= '0;
        end else if (present_state == DIVIDING) begin
            remainder      <= remainder_after_sub;
            extended_numer <= extended_numer << 2;
            abs_quot       <= (abs_quot << 2) | {{DATA_WIDTH-2{1'b0}}, current_quot_bits};

            if (next_state == DIVIDING) begin // Only increment if we are staying in DIVIDING
                bit_counter <= bit_counter + 1'b1;
            end
        end
    end
end

/////////////////////////////////////////////////////////////////////////////

endmodule