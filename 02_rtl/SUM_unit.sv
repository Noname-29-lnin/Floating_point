module SUM_unit #(
    parameter SIZE_DATA = 28
)(
    input logic                     i_carry,
    input logic [SIZE_DATA-1:0]     i_data_a,
    input logic [SIZE_DATA-1:0]     i_data_b,
    output logic [SIZE_DATA-1:0]    o_sum,
    output logic                    o_carry
);

assign {o_carry, o_sum} =  {1'b0, i_data_a} + {1'b0, i_data_b} + { {(SIZE_DATA-1){1'b0}}, i_carry }; 

endmodule
