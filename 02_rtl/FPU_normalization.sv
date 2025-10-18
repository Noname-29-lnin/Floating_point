module FPU_normalization #(
    parameter SIZE_LOPD     = 5 ,
    parameter SIZE_DATA     = 28
)(
    input logic                     i_overflow   ,
    input logic [SIZE_DATA-1:0]     i_mantissa  ,
    output logic [SIZE_LOPD-1:0]    o_lopd      ,
    output logic [SIZE_DATA-1:0]    o_mantissa  ,
    output logic                    o_zero_flag 
);

logic w_zero_flag;
LOPD_32bit LOPD_unit (
    .i_data      ({4'b0, i_mantissa}),
    .o_pos_one   (o_lopd),
    .o_zero_flag (w_zero_flag) 
);

assign o_zero_flag = w_zero_flag;
logic [31:0] w_o_data_shift;
SHF_shift_right #(
    .SIZE_SHIFT     (5),
    .SIZE_DATA      (32)
) SHF_UNIT (
    .i_shift_number     (o_lopd),
    .i_data             ({4'b0, i_mantissa}),
    .o_data             (w_o_data_shift) 
);

assign o_mantissa = w_zero_flag ? '0 : ((~i_overflow & w_o_data_shift[28]) ? w_o_data_shift[SIZE_DATA-1:0] : (i_overflow ? {1'b1, i_mantissa[SIZE_DATA-2:0]} : w_o_data_shift[SIZE_DATA-1:0]));

endmodule
