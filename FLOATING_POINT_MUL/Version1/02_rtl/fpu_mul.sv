module fpu_mul #(
    parameter SIZE_DATA = 32
)(
    input logic [SIZE_DATA-1:0]     i_32_a  ,
    input logic [SIZE_DATA-1:0]     i_32_b  ,
    output logic [SIZE_DATA-1:0]    o_32_mul 
);

logic w_sign_a, w_sign_b;
logic [7:0] w_exp_a, w_exp_b;
logic [23:0] w_man_a, w_man_b;
assign w_sign_a     = i_32_a[31];
assign w_sign_b     = i_32_b[31];
assign w_exp_a      = i_32_a[30:23];
assign w_exp_b      = i_32_b[30:23];
assign w_man_a      = {1'b1, i_32_a[22:0]};
assign w_man_b      = {1'b1, i_32_b[22:0]};

logic [7:0] w_add_exp_sum;
logic [7:0] w_sub_exp_sub;
logic [47:0] w_man_mul;

logic           w_sign_result;
logic [7:0]     w_exp_result;
logic [23:0]    w_man_result;

assign w_sign_result = w_sign_a ^ w_sign_b;

EXP_ADD_8bit #(
    .SIZE_DATA      (8)
) ADD_EXP_UNIT (
    .i_data_a       (w_exp_a),
    .i_data_b       (w_exp_b),
    .o_data_sum     (w_add_exp_sum) 
);

EXP_SUB_8bit #(
    .SIZE_DATA      (8) 
) SUB_EXP_UNIT (
    .i_data_a       (w_add_exp_sum),
    .i_data_b       (8'd127),
    .o_data_sub     (w_sub_exp_sub) 
);

MAN_mul #(
    .SIZE_DATA      (24)    
) MAN_MUL_UNIT (
    .i_data_a       (w_man_a),
    .i_data_b       (w_man_b),
    .o_data_mul     (w_man_mul) 
);

endmodule
