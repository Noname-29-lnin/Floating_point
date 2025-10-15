module EXP_diff_exponent #(
    parameter SIZE_EXP  = 8
)(
    input logic [SIZE_EXP-1:0]   i_exp_a         ,
    input logic [SIZE_EXP-1:0]   i_exp_b         ,
    output logic [SIZE_EXP-1:0]  o_exp_greater   ,
    output logic [SIZE_EXP-1:0]  o_diff_value    ,
    output logic        o_diff_signal          // 0: i_exp_a >= i_exp_b | 1: i_exp_a < i_exp_b
);

logic [SIZE_EXP-1:0] w_less_exp, w_greater_exp;    

EXP_swap #(
    .SIZE_DATA  (SIZE_EXP)
) EX_SWAP_UNIT (
    .i_data_a        (i_exp_a),
    .i_data_b        (i_exp_b),
    .o_compare       (o_diff_signal),   // a < b
    .o_less_data     (w_less_exp),
    .o_greater_data  (w_greater_exp)
);

assign o_exp_greater = w_greater_exp;

// Greater - Less
EXP_sub #(
    .SIZE_EXP_SUB   (SIZE_EXP)
) EXP_SUB_UNIT(
    .i_data_a       (w_greater_exp),
    .i_data_b       (w_less_exp),
    .o_sub          (o_diff_value)    
);

endmodule
