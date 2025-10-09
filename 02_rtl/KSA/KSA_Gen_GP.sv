module KSA_Gen_GP(
    input  logic i_a,
    input  logic i_b,
    output logic o_g,
    output logic o_p
);
    assign o_g = i_a & i_b;
    assign o_p = i_a ^ i_b;
endmodule
