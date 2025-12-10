module NORMALIZATION_unit (
    input logic                     i_overflow      ,
    input logic                     i_zero_flag     ,
    input logic [4:0]     i_one_position  ,
    input logic [27:0]     i_mantissa      ,
    output logic [27:0]    o_mantissa       
);

logic [27:0] w_shift_left;

SHF_left_28bit  SHF_left_28bit_unit (
    .i_shift_number     (i_one_position),
    .i_data             (i_mantissa), 
    .o_data             (w_shift_left)
);

assign o_mantissa = i_zero_flag ? '0 : (i_overflow ? {1'b1, i_mantissa[27:1]} : (~i_mantissa[27] ? w_shift_left : i_mantissa) );

endmodule
