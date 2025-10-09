module LOPD_16bit(
    input logic [16:0]       i_data  ,
    output logic [3:0]      o_pos_one,
    output logic            o_zero_flag
);


////////////////////////////////////////////////////////////
// LOPD_8bit_unit_0
////////////////////////////////////////////////////////////
logic [2:0]         w_pos_one_0;  
logic               w_zero_flag_0;
LOPD_8bit LOPD_8bit_unit_0(
    .i_data         (i_data[7:0]),
    .o_pos_one      (w_pos_one_0),
    .o_zero_flag    (w_zero_flag_0)
);
////////////////////////////////////////////////////////////
// LOPD_8bit_unit_1
////////////////////////////////////////////////////////////
logic [2:0]         w_pos_one_1;  
logic               w_zero_flag_1;
LOPD_8bit LOPD_8bit_unit_1(
    .i_data         (i_data[15:8]),
    .o_pos_one      (w_pos_one_1),
    .o_zero_flag    (w_zero_flag_1)
);

////////////////////////////////////////////////////////////
// LOD_16bit_unit
////////////////////////////////////////////////////////////
assign o_zero_flag = w_zero_flag_0 & w_zero_flag_1;
assign o_pos_one[3] = ~(w_zero_flag_1);
assign o_pos_one[2] = w_zero_flag_1 ? w_pos_one_1[2] : w_pos_one_0[2];
assign o_pos_one[1] = w_zero_flag_1 ? w_pos_one_1[1] : w_pos_one_0[1];
assign o_pos_one[0] = w_zero_flag_1 ? w_pos_one_1[0] : w_pos_one_0[0];
endmodule
