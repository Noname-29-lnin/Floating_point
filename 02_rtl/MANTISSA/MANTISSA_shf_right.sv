module MANTISSA_shf_right #(
    parameter SIZE_SHIFT    = 8 ,
    parameter SIZE_DATA     = 28
)(
    input logic [SIZE_SHIFT-1:0]    i_diff_value    ,
    input logic [SIZE_DATA-1:0]     i_data_shift    ,
    output logic [SIZE_DATA-1:0]    o_data_shift     
);

SHF_shift_right #(
    .SIZE_DATA      (SIZE_DATA),
    .SIZE_SHIFT     (SIZE_SHIFT)  
) SHF_UNIT (
    .i_shift_number (i_diff_value),
    .i_data         (i_data_shift), 
    .o_data         (o_data_shift)  
);

endmodule
