module EXP_adjust #(
    parameter SIZE_EXP  = 8     ,
    parameter SIZE_LOPD = 8      
)(
    input  logic                    i_overflow  ,
    input  logic                    i_underflow ,
    input  logic                    i_zero_flag ,
    input  logic [SIZE_LOPD-1:0]    i_lopd_value,
    input  logic [SIZE_EXP-1:0]     i_exp_value ,
    output logic [SIZE_EXP-1:0]     o_exp_result
);

//////////////////////////////////////////////////////////////////////////////////
// Internal Signal
//////////////////////////////////////////////////////////////////////////////////
logic [SIZE_EXP-1:0] w_exp_result;
logic [SIZE_EXP-1:0] w_underflow_exp;
logic [SIZE_EXP-1:0] w_overflow_exp;
localparam SIZE_PADDING = (SIZE_EXP > SIZE_LOPD) ? (SIZE_EXP - SIZE_LOPD) : 0;
logic [SIZE_EXP-1:0] w_lopd_value;
assign w_lopd_value = {{(SIZE_PADDING){1'b0}}, i_lopd_value[SIZE_LOPD-1 -: (SIZE_EXP - SIZE_PADDING)]};

assign w_underflow_exp = i_underflow ? '0 : w_lopd_value;
assign w_overflow_exp  = i_overflow  ? {SIZE_EXP{1'b1}} - 1'b1 : w_underflow_exp; 

//////////////////////////////////////////////////////////////////////////////////
// Submodule
//////////////////////////////////////////////////////////////////////////////////
CLA_8bit CLA_8BIT_UNIT (
    .i_carry    (i_overflow),
    .i_data_a   (i_exp_value),
    .i_data_b   (w_overflow_exp),
    .o_sum      (w_exp_result),
    .o_carry    ()
);

assign o_exp_result = i_zero_flag ? '0 : w_exp_result;

endmodule
