module SUM_unit #(
    parameter SIZE_DATA = 28
)(
    input  logic                     i_carry,
    input  logic [SIZE_DATA-1:0]     i_data_a,
    input  logic [SIZE_DATA-1:0]     i_data_b,
    output logic [SIZE_DATA-1:0]     o_sum,
    output logic                     o_carry
);

KSA_unit #(
    .SIZE_DATA  (SIZE_DATA)
) KSA_UNIT (
    .i_carry    (i_carry),
    .i_data_a   (i_data_a),
    .i_data_b   (i_data_b),
    .o_data_sum (o_sum),
    .o_carry    (o_carry) 
);

endmodule
