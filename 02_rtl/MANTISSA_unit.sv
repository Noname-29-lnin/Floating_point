module MANTISSA_unit #(
    parameter NUM_OP                = 1 ,
    parameter SIZE_SHIFT            = 8 ,
    parameter SIZE_MANTISSA         = 28
)(
    input logic                         i_sign_A        ,
    input logic [SIZE_MANTISSA-1:0]     i_mantissa_A    ,
    input logic                         i_sign_B        ,
    input logic [SIZE_MANTISSA-1:0]     i_mantissa_B    ,

    input logic [NUM_OP-1:0]            i_alu_op        , // Add/Sub
    input logic                         i_diff_signal   , //  A < B ? 1'b1 : 1'b0
    input logic [SIZE_SHIFT-1:0]        i_diff_value    ,

    output logic                        o_sign_result   ,
    output logic [SIZE_MANTISSA-1:0]    o_mantissa      ,
    output logic                        o_overflow       
);

logic [SIZE_MANTISSA:0] w_mantiss_less_0, w_mantiss_less_1;
logic [SIZE_MANTISSA:0] w_mantiss_greater_0;
logic [SIZE_MANTISSA:0] w_mantiss_less_2, w_mantiss_greater_1;
assign w_mantiss_less_0     = i_diff_signal ? {i_sign_A, i_mantissa_A} : {i_sign_B, i_mantissa_B};
assign w_mantiss_greater_0  = i_diff_signal ? {i_sign_B, i_mantissa_B} : {i_sign_A, i_mantissa_A} ;

logic [31:0] w_i_shift, w_o_shift;
assign w_i_shift = {4'b0, {w_mantiss_less_0[SIZE_MANTISSA-1:0]}};
MANTISSA_shf_right #(
    .SIZE_SHIFT     (5),
    .SIZE_DATA      (32)
) MANTISSA_UNIT (
    .i_diff_value       (i_diff_value[4:0]),
    .i_data_shift       (w_i_shift),
    .o_data_shift       (w_o_shift) 
);
assign w_o_shift = w_o_shift[SIZE_MANTISSA:0];
assign w_mantiss_less_1[SIZE_MANTISSA] = w_mantiss_less_0[SIZE_MANTISSA];

MANTISSA_swap #(
    .SIZE_DATA (SIZE_MANTISSA)
) MANTISSA_swap_UNIT (
    .i_sign_A            (w_mantiss_greater_0[SIZE_MANTISSA]),
    .i_mantissa_A        (w_mantiss_greater_0[SIZE_MANTISSA-1:0]),
    .i_sign_B            (w_mantiss_less_1[SIZE_MANTISSA]),
    .i_mantissa_B        (w_mantiss_less_1[SIZE_MANTISSA-1:0]),

    .o_sign_greater      (w_mantiss_greater_1[SIZE_MANTISSA]),
    .o_mantissa_greater  (w_mantiss_greater_1[SIZE_MANTISSA-1:0]),
    .o_sign_less         (w_mantiss_less_2[SIZE_MANTISSA]),
    .o_mantissa_less     (w_mantiss_less_2[SIZE_MANTISSA-1:0]) 
);

ALU_unit #(
    .NUM_OP    (NUM_OP),
    .SIZE_DATA (SIZE_MANTISSA)
) ALU_UNIT (
    .i_op_alu            (i_alu_op),
    .i_sign_a            (w_mantiss_greater_1[SIZE_MANTISSA]),   // Greater
    .i_sign_b            (w_mantiss_less_2[SIZE_MANTISSA]),   // Less
    .i_mantissa_a        (w_mantiss_greater_1[SIZE_MANTISSA-1:0]),   // Greater
    .i_mantissa_b        (w_mantiss_less_2[SIZE_MANTISSA-1:0]),   // Less

    .o_overflow          (o_overflow),
    .o_sign_result       (o_sign_result),   
    .o_mantissa_result   (o_mantissa)   
);

endmodule
