module SUB_unit #(
    parameter SIZE_DATA = 28
)(
    input logic [SIZE_DATA-1:0]     i_carry,
    input logic [SIZE_DATA-1:0]     i_data_a,
    input logic [SIZE_DATA-1:0]     i_data_b,
    output logic [SIZE_DATA-1:0]    o_sub,
    output logic                    o_carry
);

logic [SIZE_DATA-1:0]   n_data_b;
assign n_data_b = ~i_data_b;

CLA_28bit CLA_28BIT_UNIT (
    .i_carry    (i_carry),
    .i_data_a   (i_data_a),
    .i_data_b   (n_data_b),
    .o_sum      (o_sum),
    .o_carry    (o_carry)
);

endmodule
