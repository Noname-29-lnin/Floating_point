module FPU_32bit #(
    parameter NUM_OP    = 1 ,   // 0: ADD | 1: SUB
    parameter SIZE_DATA = 32
)(
    input logic [NUM_OP-1:0]        i_op_alu    ,
    input logic [SIZE_DATA-1:0]     i_data_a    ,
    input logic [SIZE_DATA-1:0]     i_data_b    ,

    output logic [SIZE_DATA-1:0]    o_result     
);

////////////////////////////////////////////////////////////////
// Expact
////////////////////////////////////////////////////////////////
logic w_sign_a, w_sign_b;
logic [7:0] w_exponent_a, w_exponent_b;
logic [24:0] w_mantissa_a, w_mantissa_b;
assign w_sign_a = i_data_a[31];
assign w_sign_b = i_data_b[31];
assign w_exponent_a = i_data_a[30:23];
assign w_exponent_b = i_data_b[30:23]; 
assign w_mantissa_a = {1'b1, i_data_a[22:0]};
assign w_mantissa_b = {1'b1, i_data_b[22:0]};

logic w_sign_result;

////////////////////////////////////////////////////////////////
// Internal Logic
////////////////////////////////////////////////////////////////
logic w_sign_greater, w_sign_less;
logic [7:0] w_exp_greater;
logic [7:0] w_diff_value;
logic [7:0] w_diff_signal;
logic [23:0] w_mantissa_greater, w_mantissa_less;
logic [23:0] w_mantissa_less_after_shift;
logic [27:0] w_mantissa_greater_extend, w_mantissa_less_extend;
logic [27:0] w_mantissa_result_after_alu;
////////////////////////////////////////////////////////////////
// Exponent
////////////////////////////////////////////////////////////////
EXP_diff_exponent #(
    .SIZE_EXP  (8)
) EXP_diff_exponent_UNIT (
    .i_exp_a            (w_exponent_a),
    .i_exp_b            (w_exponent_b),
    .o_exp_greater      (w_exp_greater),
    .o_diff_value       (w_diff_value),
    .o_diff_signal      (w_diff_signal)       // 0: i_exp_a >= i_exp_b | 1: i_exp_a < i_exp_b
);

////////////////////////////////////////////////////////////////
// Maintissa
////////////////////////////////////////////////////////////////
assign w_sign_greater     = w_diff_signal ? w_sign_b     : w_sign_a    ;
assign w_mantissa_greater = w_diff_signal ? w_mantissa_b : w_mantissa_a;
assign w_sign_less        = w_diff_signal ? w_sign_a     : w_sign_b    ;
assign w_mantissa_less    = w_diff_signal ? w_mantissa_a : w_mantissa_b;
SHF_unit #(
    .LEFT_RIGHT (1), // 0: shift Left, 1: shift right
    .SIZE_DATA  (24),
	.SIZE_SHIFT (5)
) SHF_unit_UNIT (
    .i_shift_number     (w_diff_value[4:0]),
    .i_data             (w_mantissa_less),
    .o_data             (w_mantissa_less_after_shift)
);
assign w_mantissa_greater_extend = {w_mantissa_greater, 4'b0};
assign w_mantissa_less_extend    = {w_mantissa_less_after_shift, 4'b0};
ALU_unit #(
    .NUM_OP    (NUM_OP),
    .SIZE_DATA (28)
)(
    .i_op_alu            (i_op_alu),
    .i_sign_a            (w_sign_greater),   // Greater
    .i_sign_b            (w_sign_less),   // Less
    .i_mantissa_a        (w_mantissa_greater_extend),   // Greater
    .i_mantissa_b        (w_mantissa_less_extend),   // Less

    .o_overflow          (),
    .o_sign_result       (w_sign_result),   
    .o_mantissa_result   (w_mantissa_result_after_alu)      
);


endmodule
