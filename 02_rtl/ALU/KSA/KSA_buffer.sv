module KSA_buffer(
    input logic     i_p , // i_p(i)
    input logic     i_c , // i_c(i-1)
    output logic    o_s   // s(i)
);

assign o_s = i_p ^ i_c;

endmodule
