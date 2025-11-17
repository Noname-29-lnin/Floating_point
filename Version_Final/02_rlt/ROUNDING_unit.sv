module ROUNDING_unit #(
    parameter SIZE_MAN          = 28,
    parameter SIZE_MAN_RESULT   = 24
)(
    // input logic                         i_zero_flag     ,
    input logic [SIZE_MAN-1:0]          i_man           ,
    output logic [SIZE_MAN_RESULT-1:0]  o_man_result    ,
    output logic                        o_ov_flow       
);

logic [SIZE_MAN_RESULT-1:0] w_man_temp;
assign w_man_temp = i_man[SIZE_MAN-1:SIZE_MAN-SIZE_MAN_RESULT];

logic w_guard_bit, w_round_bit, w_sticky_bit;
assign w_guard_bit = i_man[3];
assign w_round_bit = i_man[2];
assign w_sticky_bit= i_man[1] | i_man[0];

logic w_rounding_result;
assign w_rounding_result = (w_guard_bit & w_round_bit) | (w_round_bit & w_sticky_bit);
// CLA_24bit INCREASE_ROUNDING (
//     .i_carry        (w_rounding_result),
//     .i_data_a       (w_man_temp),
//     .i_data_b       ('0),
//     .o_sum          (o_man_result),
//     .o_carry        (o_ov_flow)
// );

RND_add #(
    .SIZE_DATA  (SIZE_MAN_RESULT)
) INCREASE_ROUNDING (
    .i_data         (w_man_temp),
    .i_carry        (w_rounding_result),
    .o_data         (o_man_result),
    .o_carry        (o_ov_flow) 
);

// assign o_man_result = w_man_temp;

endmodule
