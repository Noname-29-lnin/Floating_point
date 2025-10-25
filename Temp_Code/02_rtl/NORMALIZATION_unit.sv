module NORMALIZATION_unit #(
    parameter SIZE_LOPD     = 5 ,
    parameter SIZE_DATA     = 28
)(
    input logic                     i_overflow      ,
    input logic                     i_zero_flag     ,
    input logic [SIZE_LOPD-1:0]     i_one_position  ,
    input logic [SIZE_DATA-1:0]     i_mantissa      ,
    output logic [SIZE_DATA-1:0]    o_mantissa       
);

logic [SIZE_DATA-1:0] w_shift_left;

SHF_left_28bit #(
    .SIZE_DATA     (28),
    .SIZE_SHIFT    (5)  
) SHF_left_28bit_unit (
    .i_shift_number     (i_one_position),
    .i_data             (i_mantissa), 
    .o_data             (w_shift_left)
);

assign o_mantissa = i_zero_flag ? '0 : (i_overflow ? {1'b1, i_mantissa[SIZE_DATA-1:1]} : (~i_mantissa ? w_shift_left : i_mantissa) );

endmodule
