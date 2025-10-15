module MANTISSA_shf_right #(
    parameter SIZE_SHIFT        = 8 ,
    parameter SIZE_MANTISSA     = 28
)(
    input logic [SIZE_SHIFT-1:0]        i_diff_value    ,
    input logic [SIZE_MANTISSA-1:0]     i_data_shift    ,
    output logic [SIZE_MANTISSA-1:0]    o_data_shift     
);

SHF_unit #(
    .LEFT_RIGHT (1), // 0: shift Left, 1: shift right
    .SIZE_DATA  (SIZE_MANTISSA),
	.SIZE_SHIFT (SIZE_SHIFT)
) SHF_shift_right_unit (
    .i_shift_number     (i_diff_value),
    .i_data             (i_data_shift),
    .o_data             (o_data_shift) 
);

endmodule
