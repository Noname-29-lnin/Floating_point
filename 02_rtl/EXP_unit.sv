module EXP_unit #(
    parameter SIZE_EXP  = 8 ,
    parameter SIZE_LOPD = 8  
)(
    input logic [SIZE_EXP-1:0]      i_exp_a         ,
    input logic [SIZE_EXP-1:0]      i_exp_b         ,
    input  logic                    i_overflow  ,
    input  logic                    i_underflow ,
    input  logic                    i_zero_flag ,
    input  logic [SIZE_LOPD-1:0]    i_lopd_value,
    
    output logic                    o_exp_diff_signal   ,
    output logic [SIZE_EXP-1:0]     o_exp_diff_value    ,
    output logic [SIZE_EXP-1:0]     o_exp_result
);

logic [SIZE_EXP-1:0] w_exp_greater;

EXP_diff_exponent #(
    .SIZE_EXP   (SIZE_EXP)
) EXP_DIFF_EXPONENT_UNIT (
    .i_exp_a            (i_exp_a),
    .i_exp_b            (i_exp_b),
    .o_exp_greater      (w_exp_greater),
    .o_diff_value       (o_exp_diff_value),
    .o_diff_signal      (o_exp_diff_signal)       // 0: i_exp_a >= i_exp_b | 1: i_exp_a < i_exp_b
);

EXP_adjust #(
    .SIZE_EXP   (SIZE_EXP),
    .SIZE_LOPD  (SIZE_LOPD) 
) EXP_ADJUST_UNIT (
    .i_overflow         (i_overflow),
    .i_underflow        (i_underflow),
    .i_zero_flag        (i_zero_flag),
    .i_lopd_value       (i_lopd_value),
    .i_exp_value        (w_exp_greater),
    .o_exp_result       (o_exp_result)
);

endmodule
