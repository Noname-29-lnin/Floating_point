module FPU_32bit #(
    parameter NUM_OP    = 1    // 0: ADD | 1: SUB
)(
    input logic [NUM_OP-1:0]        i_alu_op    ,
    input logic [31:0]              i_data_a    ,
    input logic [31:0]              i_data_b    ,
    output logic [31:0]             o_result     
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
logic w_exponent_result;
logic w_mantissa_result;

////////////////////////////////////////////////////////////////
// Internal Logic
////////////////////////////////////////////////////////////////

logic                   EXP_o_exp_diff_signal;
logic [7:0]             EXP_o_exp_diff_value ;

logic [27:0]            MAN_o_mantissa;
logic                   MAN_o_overflow;

logic [4:0]             NOR_o_lopd    ;
logic [27:0]            NOR_o_mantissa;
logic                   NOR_o_zero_flag;

logic [22:0]            ROU_o_mantissa_result;

////////////////////////////////////////////////////////////////
// Subsection
////////////////////////////////////////////////////////////////

logic [7:0] EXP_LOPD_value;
assign EXP_LOPD_value = {3'b0, NOR_o_lopd};
EXP_unit #(
    .SIZE_EXP  (8),
    .SIZE_LOPD (8)  
) EXP_UNIT (
    .i_exp_a                 (w_exponent_a),
    .i_exp_b                 (w_exponent_b),
    .i_overflow              (MAN_o_overflow),
    .i_underflow             (MAN_o_mantissa[27]),
    .i_zero_flag             (NOR_o_zero_flag),
    .i_lopd_value            (EXP_LOPD_value),
    .o_exp_diff_signal       (EXP_o_exp_diff_signal),
    .o_exp_diff_value        (EXP_o_exp_diff_value),
    .o_exp_result            (w_exponent_result)
);

MANTISSA_unit #(
    .NUM_OP             (NUM_OP),
    .SIZE_SHIFT         (8 ),
    .SIZE_MANTISSA      (28)
) MANTISSA_UNTI (
    .i_sign_A            (w_sign_a),
    .i_mantissa_A        (w_mantissa_a),
    .i_sign_B            (w_sign_b),
    .i_mantissa_B        (w_mantissa_b),
    .i_alu_op            (i_alu_op), // Add/Sub
    .i_diff_signal       (EXP_o_exp_diff_signal), //  A < B ? 1'b1 : 1'b0
    .i_diff_value        (EXP_o_exp_diff_value),
    .o_sign_result       (w_sign_result),
    .o_mantissa          (MAN_o_mantissa),
    .o_overflow          (MAN_o_overflow) 
);

FPU_normalization #(
    .SIZE_LOPD          (5 ),
    .SIZE_DATA          (28)
) FPU_NOR_UNIT (
    .i_overflow         (MAN_o_overflow),
    .i_mantissa         (MAN_o_mantissa),
    .o_lopd             (NOR_o_lopd),
    .o_mantissa         (NOR_o_mantissa),
    .o_zero_flag        (NOR_o_zero_flag)
);

FPU_rounding_hardware #(
    .SIZE_MANTISSA  (28)    
) FPU_ROUDING_UNIT (
    .i_mantissa_result  (NOR_o_mantissa),
    .o_mantissa_result  (w_mantissa_result) 
);

assign o_result = {w_sign_result, w_exponent_result, w_mantissa_result};

endmodule
