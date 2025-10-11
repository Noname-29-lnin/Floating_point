module KSA_unit #(
    parameter integer SIZE_DATA = 8
)(
    input  logic                     i_carry        ,
    input  logic [SIZE_DATA-1:0]     i_data_a       ,
    input  logic [SIZE_DATA-1:0]     i_data_b       ,
    output logic [SIZE_DATA-1:0]     o_data_sum     ,
    output logic                     o_carry         
);

endmodule
