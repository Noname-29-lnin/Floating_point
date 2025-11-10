module KSA_GrayCell(
    input logic         i_g_0   ,
    input logic         i_p_1   ,
    input logic         i_g_1   ,
    output logic        o_g_2      
);
// G2 = G1 OR (G0 AND P1 )
assign o_g_2 =  i_g_1 | (i_g_0 & i_p_1);

endmodule
