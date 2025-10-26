// module CLA_8bit(
//     input  logic        i_carry,
//     input  logic [7:0]  i_data_a,
//     input  logic [7:0]  i_data_b,
//     output logic [7:0]  o_sum,
//     output logic        o_carry
// );

//     logic [7:0] w_G;
//     logic [7:0] w_P;
//     logic [8:0] w_C;

//     assign w_G = i_data_a & i_data_b;
//     assign w_P = i_data_a ^ i_data_b;

//     assign w_C[0] = i_carry;
//     assign w_C[1] = w_G[0] | (w_P[0] & w_C[0]);
//     assign w_C[2] = w_G[1] | (w_P[1] & w_G[0]) | (w_P[1] & w_P[0] & w_C[0]);
//     assign w_C[3] = w_G[2] | (w_P[2] & w_G[1]) | (w_P[2] & w_P[1] & w_G[0]) | (w_P[2] & w_P[1] & w_P[0] & w_C[0]);
//     assign w_C[4] = w_G[3] | (w_P[3] & w_G[2]) | (w_P[3] & w_P[2] & w_G[1]) | (w_P[3] & w_P[2] & w_P[1] & w_G[0]) 
//                   | (w_P[3] & w_P[2] & w_P[1] & w_P[0] & w_C[0]);
//     assign w_C[5] = w_G[4] | (w_P[4] & w_G[3]) | (w_P[4] & w_P[3] & w_G[2]) | (w_P[4] & w_P[3] & w_P[2] & w_G[1])
//                   | (w_P[4] & w_P[3] & w_P[2] & w_P[1] & w_G[0])
//                   | (w_P[4] & w_P[3] & w_P[2] & w_P[1] & w_P[0] & w_C[0]);
//     assign w_C[6] = w_G[5] | (w_P[5] & w_G[4]) | (w_P[5] & w_P[4] & w_G[3]) | (w_P[5] & w_P[4] & w_P[3] & w_G[2])
//                   | (w_P[5] & w_P[4] & w_P[3] & w_P[2] & w_G[1])
//                   | (w_P[5] & w_P[4] & w_P[3] & w_P[2] & w_P[1] & w_G[0])
//                   | (w_P[5] & w_P[4] & w_P[3] & w_P[2] & w_P[1] & w_P[0] & w_C[0]);
//     assign w_C[7] = w_G[6] | (w_P[6] & w_G[5]) | (w_P[6] & w_P[5] & w_G[4]) | (w_P[6] & w_P[5] & w_P[4] & w_G[3])
//                   | (w_P[6] & w_P[5] & w_P[4] & w_P[3] & w_G[2])
//                   | (w_P[6] & w_P[5] & w_P[4] & w_P[3] & w_P[2] & w_G[1])
//                   | (w_P[6] & w_P[5] & w_P[4] & w_P[3] & w_P[2] & w_P[1] & w_G[0])
//                   | (w_P[6] & w_P[5] & w_P[4] & w_P[3] & w_P[2] & w_P[1] & w_P[0] & w_C[0]);
//     assign w_C[8] = w_G[7] | (w_P[7] & w_G[6]) | (w_P[7] & w_P[6] & w_G[5]) | (w_P[7] & w_P[6] & w_P[5] & w_G[4])
//                   | (w_P[7] & w_P[6] & w_P[5] & w_P[4] & w_G[3])
//                   | (w_P[7] & w_P[6] & w_P[5] & w_P[4] & w_P[3] & w_G[2])
//                   | (w_P[7] & w_P[6] & w_P[5] & w_P[4] & w_P[3] & w_P[2] & w_G[1])
//                   | (w_P[7] & w_P[6] & w_P[5] & w_P[4] & w_P[3] & w_P[2] & w_P[1] & w_G[0])
//                   | (w_P[7] & w_P[6] & w_P[5] & w_P[4] & w_P[3] & w_P[2] & w_P[1] & w_P[0] & w_C[0]);

//     assign o_sum   = w_P ^ w_C[7:0];
//     assign o_carry = w_C[8];

// endmodule
module CLA_8bit(
    input  logic        i_carry,
    input  logic [7:0]  i_data_a,
    input  logic [7:0]  i_data_b,
    output logic [7:0]  o_sum,
    output logic        o_carry
);

    logic [1:0] w_P, w_G;
    logic w_C;

    // Lower 4-bit CLA (bits [3:0])
    CLA_4bit CLA_4BIT_UNIT_0 (
        .a      (i_data_a[3:0]),
        .b      (i_data_b[3:0]),
        .cin    (i_carry),
        .sum    (o_sum[3:0]),
        .o_p    (w_P[0]),
        .o_g    (w_G[0])
    );

    // Upper 4-bit CLA (bits [7:4])
    CLA_4bit CLA_4BIT_UNIT_1 (
        .a      (i_data_a[7:4]),
        .b      (i_data_b[7:4]),
        .cin    (w_C),
        .sum    (o_sum[7:4]),
        .o_p    (w_P[1]),
        .o_g    (w_G[1])
    );

    always_comb begin
        w_C = w_G[0] | (w_P[0] & i_carry);
    end

    assign o_carry = w_G[1] | (w_P[1] & (w_G[0] | (w_P[0] & i_carry)));

endmodule
