module KSA_PostPro(
    input logic         i_p ,
    input logic         i_c ,
    output logic        o_s  
);

assign o_s = i_c ^ i_p;

endmodule
