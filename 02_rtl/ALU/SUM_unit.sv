module SUM_unit #(
    parameter SIZE_SUM  = 28
)(
    input logic                 i_carry,
    input logic [SIZE_SUM-1:0]  i_data_a,
    input logic [SIZE_SUM-1:0]  i_data_b,
    output logic [SIZE_SUM-1:0] o_sum,
    output logic                o_carry
);

CLA_28bit SUM_UNIT_CLA (
    .i_carry        (i_carry),
    .i_data_a       (i_data_a),
    .i_data_b       (i_data_b),
    .o_sum          (o_sum),
    .o_carry        (o_carry)
);

endmodule