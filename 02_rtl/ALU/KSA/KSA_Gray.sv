module KSA_Gray(
    input logic                 i_gj    ,
    input logic                 i_pk    ,
    input logic                 i_gk    ,
    output logic                o_g      
);

assign o_g = i_gk | (i_gj & i_pk);

endmodule
