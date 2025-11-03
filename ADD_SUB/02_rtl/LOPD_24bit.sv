module LOPD_24bit #(
    parameter SIZE_DATA     = 24    ,
    parameter SIZE_LOPD     = 5      
)(
    input logic [SIZE_DATA-1:0]     i_data          ,
    output logic [SIZE_LOPD-1:0]    o_one_position  ,
    output logic                    o_zero_flag      
);

logic [15:0]     LOPD16_i_data;
assign LOPD16_i_data = i_data[15:0];
logic [3:0]      LOPD16_o_pos_one;
logic            LOPD16_o_zero_flag;
logic [7:0]      LOPD8_i_data;
assign LOPD8_i_data = i_data[23:16];
logic [2:0]      LOPD8_o_pos_one;
logic            LOPD8_o_zero_flag;
LOPD_16bit LOPD_16bit_UNIT_LSB (
    .i_data             (LOPD16_i_data),
    .o_pos_one          (LOPD16_o_pos_one),
    .o_zero_flag        (LOPD16_o_zero_flag)
);

LOPD_8bit LOPD_8bit_UNIT_MSB (
    .i_data             (LOPD8_i_data),
    .o_pos_one          (LOPD8_o_pos_one),
    .o_zero_flag        (LOPD8_o_zero_flag)
);

logic [SIZE_LOPD-1:0]    w_o_one_position;
assign o_zero_flag = LOPD16_o_zero_flag & LOPD8_o_zero_flag;
assign w_o_one_position[0] = LOPD8_o_zero_flag ? LOPD16_o_pos_one[0] : LOPD8_o_pos_one[0];
assign w_o_one_position[1] = LOPD8_o_zero_flag ? LOPD16_o_pos_one[1] : LOPD8_o_pos_one[1];
assign w_o_one_position[2] = LOPD8_o_zero_flag ? LOPD16_o_pos_one[2] : LOPD8_o_pos_one[2];
assign w_o_one_position[3] = LOPD8_o_zero_flag ? LOPD16_o_pos_one[3] : 1'b0;
assign w_o_one_position[4] = ~LOPD8_o_zero_flag;

logic [7:0] w_sub;
CLA_8bit LOPD_SUB(
    .i_carry        (1'b1),
    .i_data_a       (8'd23),
    .i_data_b       (~{3'b0, w_o_one_position}),
    .o_sum          (w_sub),
    .o_carry        ()
);
assign o_one_position = w_sub[SIZE_LOPD-1:0];
// assign o_one_position = ~w_o_one_position;

endmodule
