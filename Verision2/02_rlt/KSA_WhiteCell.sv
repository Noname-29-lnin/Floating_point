module KSA_WhiteCell(
    input logic             i_data_a    ,
    input logic             i_data_b    ,
    output logic            o_p         ,
    output logic            o_g          
);

assign o_g = i_data_a & i_data_b;
assign o_p = i_data_a ^ i_data_b;

endmodule
