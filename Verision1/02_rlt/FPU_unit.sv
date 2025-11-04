module FPU_unit #(
    parameter NUM_OP    = 1
)(
    input logic [NUM_OP-1:0]    i_add_sub       ,
    input logic [31:0]          i_32_a          ,
    input logic [31:0]          i_32_b          ,
    output logic [31:0]         o_32_s          ,

    output logic                o_ov_flag       ,
    output logic                o_un_flag        
);

////////////////////////////////////////////////////////////////
// Expact
////////////////////////////////////////////////////////////////
logic w_sign_a, w_sign_b;
logic [7:0] w_exponent_a, w_exponent_b;
logic [23:0] w_mantissa_a, w_mantissa_b;
assign w_sign_a = i_32_a[31];
assign w_sign_b = i_32_b[31];
assign w_exponent_a = i_32_a[30:23];
assign w_exponent_b = i_32_b[30:23]; 
assign w_mantissa_a = {1'b1, i_32_a[22:0]};
assign w_mantissa_b = {1'b1, i_32_b[22:0]};

logic w_sign_result;
logic [7:0] w_exponent_result;
logic [23:0] w_mantissa_result;

////////////////////////////////////////////////////////////////
// Internal Logic
////////////////////////////////////////////////////////////////
logic w_EXPSWAP_compare;
logic [7:0] w_EXPSWAP_max, w_EXPSWAP_min;
logic [7:0] w_EXPSUB_diff_value;

logic w_MAN_SWAP1_sign_max, w_MAN_SWAP1_sign_min;
logic [23:0] w_MAN_SWAP1_max, w_MAN_SWAP1_min;

logic [27:0] w_MAN_SHF_RIGHT_min, w_MAN_SHF_RIGHT_max;

logic w_MAN_COMP_28BIT_less;
logic w_MAN_PRE_SWAP_BY_MAN_compara;

logic        w_MAN_PRE_SWAP_BY_MAN_sign_max, w_MAN_PRE_SWAP_BY_MAN_sign_min;
logic [27:0] w_MAN_PRE_SWAP_BY_MAN_max,      w_MAN_PRE_SWAP_BY_MAN_min;

logic [27:0] w_MAN_ALU_man;
logic        w_MAN_ALU_overflow;

logic [4:0] w_LOPD_24BIT_one_position;
logic       w_LOPD_24BIT_zero_flag;

logic [7:0] w_EXP_ADJUST_result;

logic [27:0] w_NORMALIZATION_man;
logic [23:0] w_ROUNDING_man;
logic        w_ROUNDING_ov_flow;
////////////////////////////////////////////////////////////////
// Tim gia tri khac nnau cua 2 exponent
////////////////////////////////////////////////////////////////
EXP_swap #(
    .SIZE_DATA      (8)
) EXP_SWAP_UNIT (
    .i_data_a           (w_exponent_a),
    .i_data_b           (w_exponent_b),
    .o_compare          (w_EXPSWAP_compare),   // a < b
    .o_less_data        (w_EXPSWAP_min),
    .o_greater_data     (w_EXPSWAP_max) 
);
EXP_sub #(
    .SIZE_EXP_SUB   (8)
) EXP_SUB_UNIT(
    // i_data_a - i_data_b
    .i_data_a           (w_EXPSWAP_max),
    .i_data_b           (w_EXPSWAP_min),
    .o_sub              (w_EXPSUB_diff_value)
);

////////////////////////////////////////////////////////////////
// Tien xu ly Mantissa
////////////////////////////////////////////////////////////////
 MAN_swap #(
    .SIZE_MAN       (24)
) MAN_PRE_SWAP_BY_EXPONENT_UNIT (
    .i_sign_a           (w_sign_a),
    .i_sign_b           (w_sign_b),
    .i_man_a            (w_mantissa_a),
    .i_man_b            (w_mantissa_b),
    // i_compare = 1 -> a < b
    .i_compare          (w_EXPSWAP_compare),

    .o_sign_max         (w_MAN_SWAP1_sign_max),
    .o_sign_min         (w_MAN_SWAP1_sign_min),
    .o_man_max          (w_MAN_SWAP1_max),
    .o_man_min          (w_MAN_SWAP1_min)
);
assign w_MAN_SHF_RIGHT_max = {w_MAN_SWAP1_max, 4'b0};
SHF_right_28bit #(
    .SIZE_DATA      (28),
    .SIZE_SHIFT     (5 ) 
) SHF_RIGHT_28BIT_UNIT (
    .i_shift_number     (w_EXPSUB_diff_value[4:0]),
    .i_data             ({w_MAN_SWAP1_min, 4'b0}), 
    .o_data             (w_MAN_SHF_RIGHT_min)
);
COMP_28bit #(
    .SIZE_DATA      (28)
) MAN_COMP_28BIT_UNIT (
    .i_data_a           (w_MAN_SHF_RIGHT_max),
    .i_data_b           (w_MAN_SHF_RIGHT_min),
    .o_less             (w_MAN_COMP_28BIT_less)
);
// assign w_MAN_PRE_SWAP_BY_MAN_compara = w_EXPSWAP_compare | w_MAN_COMP_28BIT_less;
assign w_MAN_PRE_SWAP_BY_MAN_compara = w_MAN_COMP_28BIT_less;
MAN_swap #(
    .SIZE_MAN       (28)
) MAN_PRE_SWAP_BY_MAN_UNIT (
    .i_sign_a           (w_MAN_SWAP1_sign_max), // w_MAN_SWAP1_sign_min
    .i_sign_b           (w_MAN_SWAP1_sign_min), // w_MAN_SWAP1_sign_max
    .i_man_a            (w_MAN_SHF_RIGHT_max),  // w_MAN_SHF_RIGHT_min
    .i_man_b            (w_MAN_SHF_RIGHT_min),  // w_MAN_SHF_RIGHT_max
    // i_compare = 1 -> a < b
    .i_compare          (w_MAN_PRE_SWAP_BY_MAN_compara),

    .o_sign_max         (w_MAN_PRE_SWAP_BY_MAN_sign_max),
    .o_sign_min         (w_MAN_PRE_SWAP_BY_MAN_sign_min),
    .o_man_max          (w_MAN_PRE_SWAP_BY_MAN_max),
    .o_man_min          (w_MAN_PRE_SWAP_BY_MAN_min)
);
SIGN_unit SIGN_OUT(
    .i_add_sub       (i_add_sub),
    .i_comp_man      (w_MAN_COMP_28BIT_less),
    .i_sign_man_a    (w_MAN_PRE_SWAP_BY_MAN_sign_max),
    .i_sign_man_b    (w_MAN_PRE_SWAP_BY_MAN_sign_min),
    .o_sign_s        (w_sign_result) 
);

MAN_ALU #(
    .NUM_OP         (NUM_OP),
    .SIZE_MAN       (28)
) MAN_ALU_UNIT (
    .i_fpu_op           (i_add_sub),
    .i_sign_max         (w_MAN_PRE_SWAP_BY_MAN_sign_max),
    .i_sign_min         (w_MAN_PRE_SWAP_BY_MAN_sign_min),
    .i_man_max          (w_MAN_PRE_SWAP_BY_MAN_max),
    .i_man_min          (w_MAN_PRE_SWAP_BY_MAN_min),
    .o_man_alu          (w_MAN_ALU_man),
    .o_overflow         (w_MAN_ALU_overflow)
);

LOPD_24bit #(
    .SIZE_DATA      (24),
    .SIZE_LOPD      (5)      
) LOPD_24BIT_UNIT (
    .i_data             (w_MAN_ALU_man[27:4]),
    .o_one_position     (w_LOPD_24BIT_one_position),
    .o_zero_flag        (w_LOPD_24BIT_zero_flag)
);

EXP_adjust #(
    .SIZE_EXP       (8),
    .SIZE_LOPD      (8)      
) EXP_ADJUST_UNIT (
    .i_overflow         (w_MAN_ALU_overflow | w_ROUNDING_ov_flow),
    .i_underflow        (w_MAN_ALU_man[27]),
    .i_zero_flag        (w_LOPD_24BIT_zero_flag),
    .i_lopd_value       ({3'b0, w_LOPD_24BIT_one_position}),
    .i_exp_value        (w_EXPSWAP_max),
    .o_exp_result       (w_EXP_ADJUST_result)
);

NORMALIZATION_unit #(
    .SIZE_LOPD      (5),
    .SIZE_DATA      (28)
) NORMALIZATION_UNIT (
    .i_overflow         (w_MAN_ALU_overflow),
    .i_zero_flag        (w_LOPD_24BIT_zero_flag),
    .i_one_position     (w_LOPD_24BIT_one_position),
    .i_mantissa         (w_MAN_ALU_man),
    .o_mantissa         (w_NORMALIZATION_man) 
);

ROUNDING_unit #(
    .SIZE_MAN       (28),
    .SIZE_MAN_RESULT(24)
) ROUNDING_UNIT (
    .i_man              (w_NORMALIZATION_man),
    .o_man_result       (w_ROUNDING_man),
    .o_ov_flow          (w_ROUNDING_ov_flow)
);

////////////////////////////////////////////////////////////////
// Output 
////////////////////////////////////////////////////////////////
// assign w_sign_result        = w_MAN_PRE_SWAP_BY_MAN_sign_max;
assign w_exponent_result    = w_EXP_ADJUST_result;
assign w_mantissa_result    = w_ROUNDING_man;

assign o_32_s = {w_sign_result, w_exponent_result, w_mantissa_result[22:0]};
assign o_ov_flag = w_MAN_ALU_overflow | w_ROUNDING_ov_flow;
assign o_un_flag = w_MAN_ALU_man[27];

endmodule
