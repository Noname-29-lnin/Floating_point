module KSA_Gen_GP(
    input  logic i_a,   // i_a(i)
    input  logic i_b,   // i_b(i)
    output logic o_g,   // o_g(i)
    output logic o_p    // o_p(i)
);
    assign o_g = i_a & i_b;
    assign o_p = i_a ^ i_b;
endmodule
