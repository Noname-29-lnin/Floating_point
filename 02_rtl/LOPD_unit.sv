module LOPD_unit #(
    parameter SIZE_NUM  = 32    
)(
    input logic [SIZE_NUM-1:0]              i_data      ,
    output logic [$clog2(SIZE_NUM)-1:0]     o_pos_one   ,
    output logic                            o_zero_flag  
);

LOPD_32bit LOPD_32bit_UNIT (
    .i_data      (i_data),
    .o_pos_one   (o_pos_one),
    .o_zero_flag (o_zero_flag) 
);

endmodule
