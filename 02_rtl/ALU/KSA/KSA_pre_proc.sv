module KSA_pre_proc #(
    parameter SIZE_DATA = 8
)(
    input logic [SIZE_DATA-1:0]     i_data_a    ,
    input logic [SIZE_DATA-1:0]     i_data_b    ,
    output logic [SIZE_DATA-1:0]    o_g         ,
    output logic [SIZE_DATA-1:0]    o_p          
);

genvar i;
generate
    for(i = 0; i < SIZE_DATA; i++) begin : FOR_GEN_GP
        KSA_Gen_GP PRE_PROCESSING (
            .i_a    (i_data_a[i]),   // i_a(i)
            .i_b    (i_data_b[i]),   // i_b(i)
            .o_g    (o_g[i]),        // o_g(i)
            .o_p    (o_p[i])         // o_p(i)
        );
    end
endgenerate

endmodule
