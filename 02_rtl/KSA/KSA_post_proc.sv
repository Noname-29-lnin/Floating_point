module KSA_post_proc #(
    parameter SIZE_DATA     = 24,
    parameter SIZE_PADDED   = 32
)(
    input  logic                    i_carry,
    input  logic [SIZE_PADDED-1:0]  i_p,
    input  logic [SIZE_PADDED-1:0]  i_g,
    output logic [SIZE_DATA-1:0]    o_sum,
    output logic                    o_carry
);

logic [SIZE_DATA:0] w_carry;

// Carry propagation
assign w_carry[0] = i_carry;
genvar i;
generate
    for(i = 1; i < SIZE_DATA+1; i++) begin : FOR_GEN_CARRY
        assign w_carry[i] = i_g[i-1] | (i_p[i-1] & w_carry[i-1]);
    end
endgenerate

// Sum computation
genvar j;
generate
    for(j = 0; j < SIZE_DATA; j++) begin : FOR_POST_PROC_BY_BUF
        KSA_buffer KSA_BUF_UNIT (
            .i_p(i_p[j]),
            .i_c(w_carry[j]),
            .o_s(o_sum[j])
        );
    end
endgenerate

assign o_carry = w_carry[SIZE_DATA];

endmodule
