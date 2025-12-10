module EXP_adjust (
    input  logic                    i_overflow  ,
    input  logic                    i_underflow ,
    input  logic                    i_zero_flag ,
    input  logic [7:0]    i_lopd_value,
    input  logic [7:0]     i_exp_value ,
    output logic [7:0]     o_exp_result
);

//////////////////////////////////////////////////////////////////////////////////
// Internal Signal
//////////////////////////////////////////////////////////////////////////////////
logic [7:0] w_exp_result;
logic w_i_carry;
assign w_i_carry = ~(i_overflow | i_underflow);

logic [7:0] w_data_b;
assign w_data_b = i_overflow ? 8'b0000_0001 : (i_underflow ? '0 : ~(i_lopd_value));
//////////////////////////////////////////////////////////////////////////////////
// Submodule
//////////////////////////////////////////////////////////////////////////////////
CLA_8bit CLA_8BIT_UNIT (
    .i_carry    (w_i_carry),
    .i_data_a   (i_exp_value),
    .i_data_b   (w_data_b),
    .o_sum      (w_exp_result),
    .o_carry    ()
);

assign o_exp_result = i_zero_flag ? 8'h00 : w_exp_result;
// assign o_exp_result = w_exp_result;
endmodule
