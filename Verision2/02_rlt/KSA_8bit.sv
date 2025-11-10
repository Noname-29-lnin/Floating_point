// module KSA_8bit(
//     input  logic        i_carry,
//     input  logic [7:0]  i_data_a,
//     input  logic [7:0]  i_data_b,
//     output logic [7:0]  o_sum,
//     output logic        o_carry
// );

//     //// ──────────────── Preprocessing ────────────────
//     logic [7:0] g0, p0;
//     genvar i;
//     generate
//         for(i = 0; i < 8; i++) begin
//             KSA_WhiteCell pre(
//                 .i_data_a (i_data_a[i]),
//                 .i_data_b (i_data_b[i]),
//                 .o_p      (p0[i]),
//                 .o_g      (g0[i])
//             );
//         end
//     endgenerate

//     //// ──────────────── Stage 1 ────────────────
//     logic [7:0] g1, p1;
//     assign g1[0] = g0[0];
//     assign p1[0] = p0[0];
//     generate
//         for(i = 1; i < 8; i++) begin
//             KSA_BlackCell blk1(
//                 .i_p_0 (p0[i-1]),
//                 .i_p_1 (p0[i]),
//                 .i_g_0 (g0[i-1]),
//                 .i_g_1 (g0[i]),
//                 .o_g_2 (g1[i]),
//                 .o_p_2 (p1[i])
//             );
//         end
//     endgenerate

//     //// ──────────────── Stage 2 ────────────────
//     logic [7:0] g2, p2;
//     assign g2[0] = g1[0];
//     assign g2[1] = g1[1];
//     assign p2[0] = p1[0];
//     assign p2[1] = p1[1];
//     generate
//         for(i = 2; i < 8; i++) begin
//             KSA_BlackCell blk2(
//                 .i_p_0 (p1[i-2]),
//                 .i_p_1 (p1[i]),
//                 .i_g_0 (g1[i-2]),
//                 .i_g_1 (g1[i]),
//                 .o_g_2 (g2[i]),
//                 .o_p_2 (p2[i])
//             );
//         end
//     endgenerate

//     //// ──────────────── Stage 3 ────────────────
//     logic [7:0] g3, p3;
//     assign g3[0] = g2[0];
//     assign g3[1] = g2[1];
//     assign g3[2] = g2[2];
//     assign g3[3] = g2[3];
//     assign p3[0] = p2[0];
//     assign p3[1] = p2[1];
//     assign p3[2] = p2[2];
//     assign p3[3] = p2[3];
//     generate
//         for(i = 4; i < 8; i++) begin
//             KSA_BlackCell blk3(
//                 .i_p_0 (p2[i-4]),
//                 .i_p_1 (p2[i]),
//                 .i_g_0 (g2[i-4]),
//                 .i_g_1 (g2[i]),
//                 .o_g_2 (g3[i]),
//                 .o_p_2 (p3[i])
//             );
//         end
//     endgenerate

//     //// ──────────────── Carry computation ────────────────
//     logic [8:0] c;
//     assign c[0] = i_carry;

//     // Gray cells to get carries
//     KSA_GrayCell gc0 (.i_g_0(i_carry), .i_p_1(p0[0]), .i_g_1(g0[0]), .o_g_2(c[1]));
//     KSA_GrayCell gc1 (.i_g_0(g0[0]),   .i_p_1(p1[1]), .i_g_1(g1[1]), .o_g_2(c[2]));
//     KSA_GrayCell gc2 (.i_g_0(g1[1]),   .i_p_1(p2[2]), .i_g_1(g2[2]), .o_g_2(c[3]));
//     KSA_GrayCell gc3 (.i_g_0(g2[2]),   .i_p_1(p3[3]), .i_g_1(g3[3]), .o_g_2(c[4]));
//     KSA_GrayCell gc4 (.i_g_0(g3[3]),   .i_p_1(p3[4]), .i_g_1(g3[4]), .o_g_2(c[5]));
//     KSA_GrayCell gc5 (.i_g_0(g3[4]),   .i_p_1(p3[5]), .i_g_1(g3[5]), .o_g_2(c[6]));
//     KSA_GrayCell gc6 (.i_g_0(g3[5]),   .i_p_1(p3[6]), .i_g_1(g3[6]), .o_g_2(c[7]));
//     KSA_GrayCell gc7 (.i_g_0(g3[6]),   .i_p_1(p3[7]), .i_g_1(g3[7]), .o_g_2(c[8]));

//     //// ──────────────── Sum and Carry Out ────────────────
//     assign o_sum   = p0 ^ c[7:0];
//     assign o_carry = c[8];

// endmodule
module KSA_8bit(
    input  logic        i_carry,
    input  logic [7:0]  i_data_a,
    input  logic [7:0]  i_data_b,
    output logic [7:0]  o_sum,
    output logic        o_carry
);

    // Stage0: initial generate/propagate
    logic [7:0] g0, p0;
    genvar ii;
    generate
        for (ii = 0; ii < 8; ii++) begin
            KSA_WhiteCell wc (
                .i_data_a (i_data_a[ii]),
                .i_data_b (i_data_b[ii]),
                .o_p      (p0[ii]),
                .o_g      (g0[ii])
            );
        end
    endgenerate

    // Stage1: distance = 1
    logic [7:0] g1, p1;
    assign g1[0] = g0[0];
    assign p1[0] = p0[0];
    generate
        for (ii = 1; ii < 8; ii++) begin
            KSA_BlackCell b1 (
                .i_p_0 (p0[ii-1]),
                .i_p_1 (p0[ii]),
                .i_g_0 (g0[ii-1]),
                .i_g_1 (g0[ii]),
                .o_g_2 (g1[ii]),
                .o_p_2 (p1[ii])
            );
        end
    endgenerate

    // Stage2: distance = 2
    logic [7:0] g2, p2;
    assign g2[0] = g1[0];
    assign p2[0] = p1[0];
    assign g2[1] = g1[1];
    assign p2[1] = p1[1];
    generate
        for (ii = 2; ii < 8; ii++) begin
            KSA_BlackCell b2 (
                .i_p_0 (p1[ii-2]),
                .i_p_1 (p1[ii]),
                .i_g_0 (g1[ii-2]),
                .i_g_1 (g1[ii]),
                .o_g_2 (g2[ii]),
                .o_p_2 (p2[ii])
            );
        end
    endgenerate

    // Stage3: distance = 4
    logic [7:0] g3, p3;
    // copy lower indices that are not combined at this stage
    assign g3[0] = g2[0];
    assign p3[0] = p2[0];
    assign g3[1] = g2[1];
    assign p3[1] = p2[1];
    assign g3[2] = g2[2];
    assign p3[2] = p2[2];
    assign g3[3] = g2[3];
    assign p3[3] = p2[3];
    generate
        for (ii = 4; ii < 8; ii++) begin
            KSA_BlackCell b3 (
                .i_p_0 (p2[ii-4]),
                .i_p_1 (p2[ii]),
                .i_g_0 (g2[ii-4]),
                .i_g_1 (g2[ii]),
                .o_g_2 (g3[ii]),
                .o_p_2 (p3[ii])
            );
        end
    endgenerate

    // Now g3[i] and p3[i] are the prefix generate/propagate for bits 0..7.
    // Compute carries with Gray cells (or direct formula). We'll use GrayCells for clarity.
    logic [8:0] c;
    assign c[0] = i_carry;

    // For carry to bit1 we need prefix for bit0. That is g3[0], p3[0] (but g3[0]=g0[0], p3[0]=p0[0])
    KSA_GrayCell gc0 (.i_g_0(i_carry), .i_p_1(p0[0]),    .i_g_1(g0[0]), .o_g_2(c[1])); // c1
    KSA_GrayCell gc1 (.i_g_0(g0[0]),   .i_p_1(p1[1]),    .i_g_1(g1[1]), .o_g_2(c[2])); // c2
    KSA_GrayCell gc2 (.i_g_0(g1[1]),   .i_p_1(p2[2]),    .i_g_1(g2[2]), .o_g_2(c[3])); // c3
    KSA_GrayCell gc3 (.i_g_0(g2[2]),   .i_p_1(p3[3]),    .i_g_1(g3[3]), .o_g_2(c[4])); // c4
    KSA_GrayCell gc4 (.i_g_0(g3[3]),   .i_p_1(p3[4]),    .i_g_1(g3[4]), .o_g_2(c[5])); // c5
    KSA_GrayCell gc5 (.i_g_0(g3[4]),   .i_p_1(p3[5]),    .i_g_1(g3[5]), .o_g_2(c[6])); // c6
    KSA_GrayCell gc6 (.i_g_0(g3[5]),   .i_p_1(p3[6]),    .i_g_1(g3[6]), .o_g_2(c[7])); // c7
    KSA_GrayCell gc7 (.i_g_0(g3[6]),   .i_p_1(p3[7]),    .i_g_1(g3[7]), .o_g_2(c[8])); // c8 (final carry out)

    // sum bits: S_i = P0_i xor C_i
    assign o_sum = p0 ^ c[7:0];
    assign o_carry = c[8];

endmodule
