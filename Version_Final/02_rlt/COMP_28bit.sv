module COMP_28bit #(
    parameter SIZE_DATA = 28
)(
    input  logic [SIZE_DATA-1:0] i_data_a,
    input  logic [SIZE_DATA-1:0] i_data_b,
    output logic                 o_less //,
    // output logic                 o_equal
);

    logic w_less_0_0, w_less_0_1, w_less_0_2, w_less_0_3, w_less_0_4, w_less_0_5, w_less_0_6;
    logic w_equal_0_0, w_equal_0_1, w_equal_0_2, w_equal_0_3, w_equal_0_4, w_equal_0_5, w_equal_0_6;

    COMP_4bit u_i_data_0 (
        .i_data_a (i_data_a[3:0]),
        .i_data_b (i_data_b[3:0]),
        .o_less   (w_less_0_0),
        .o_equal  (w_equal_0_0)
    );

    COMP_4bit u_i_data_1 (
        .i_data_a (i_data_a[7:4]),
        .i_data_b (i_data_b[7:4]),
        .o_less   (w_less_0_1),
        .o_equal  (w_equal_0_1)
    );

    COMP_4bit u_i_data_2 (
        .i_data_a (i_data_a[11:8]),
        .i_data_b (i_data_b[11:8]),
        .o_less   (w_less_0_2),
        .o_equal  (w_equal_0_2)
    );

    COMP_4bit u_i_data_3 (
        .i_data_a (i_data_a[15:12]),
        .i_data_b (i_data_b[15:12]),
        .o_less   (w_less_0_3),
        .o_equal  (w_equal_0_3)
    );

    COMP_4bit u_i_data_4 (
        .i_data_a (i_data_a[19:16]),
        .i_data_b (i_data_b[19:16]),
        .o_less   (w_less_0_4),
        .o_equal  (w_equal_0_4)
    );

    COMP_4bit u_i_data_5 (
        .i_data_a (i_data_a[23:20]),
        .i_data_b (i_data_b[23:20]),
        .o_less   (w_less_0_5),
        .o_equal  (w_equal_0_5)
    );

    COMP_4bit u_i_data_6 (
        .i_data_a (i_data_a[27:24]),
        .i_data_b (i_data_b[27:24]),
        .o_less   (w_less_0_6),
        .o_equal  (w_equal_0_6)
    );

    assign o_less = w_less_0_6
                  | (w_equal_0_6 & w_less_0_5)
                  | (w_equal_0_6 & w_equal_0_5 & w_less_0_4)
                  | (w_equal_0_6 & w_equal_0_5 & w_equal_0_4 & w_less_0_3)
                  | (w_equal_0_6 & w_equal_0_5 & w_equal_0_4 & w_equal_0_3 & w_less_0_2)
                  | (w_equal_0_6 & w_equal_0_5 & w_equal_0_4 & w_equal_0_3 & w_equal_0_2 & w_less_0_1)
                  | (w_equal_0_6 & w_equal_0_5 & w_equal_0_4 & w_equal_0_3 & w_equal_0_2 & w_equal_0_1 & w_less_0_0);

    // assign o_equal = w_equal_0_6 & w_equal_0_5 & w_equal_0_4 &
                    //  w_equal_0_3 & w_equal_0_2 & w_equal_0_1 & w_equal_0_0;

endmodule

// module COMP_28bit #(
//     parameter SIZE_DATA = 28
// )(
//     input  logic [SIZE_DATA-1:0] i_data_a,
//     input  logic [SIZE_DATA-1:0] i_data_b,
//     output logic                 o_less
// );

// logic [SIZE_DATA-1:0] w_g;
// logic [SIZE_DATA-1:0] w_p;
// logic [SIZE_DATA-1:0] w_borrow;

// assign w_g = ~i_data_a &  i_data_b;
// assign w_p = ~(i_data_a & ~i_data_b);
// genvar i;
// generate
//     assign w_borrow[0] = w_g[0];
//     for (i = 1; i < SIZE_DATA; i++) begin : compare_two_number_using_popagation_borrow
//         assign w_borrow[i] = w_g[i] | (w_p[i] & w_borrow[i-1]);
//     end
// endgenerate

// assign o_less = w_borrow[SIZE_DATA-1];

// endmodule
// module COMP_28bit #(
//     parameter SIZE_DATA = 28
// )(
//     input  logic [SIZE_DATA-1:0] i_data_a,
//     input  logic [SIZE_DATA-1:0] i_data_b,
//     output logic                 o_less
// );

// logic [6:0] GP, GG;       // group P/G
// logic [6:0] Bgrp;         // borrow at group boundaries

// // Borrow-in vào group 0 = 0 (so sánh unsigned)
// assign Bgrp[0] = GG[0];

// // 7 block 4-bit
// COMP_4bit_CLA u0 (.A(i_data_a[ 3: 0]), .B(i_data_b[ 3: 0]), .Bin(1'b0),
//               .Bout(), .GP(GP[0]), .GG(GG[0]));

// COMP_4bit_CLA u1 (.A(i_data_a[ 7: 4]), .B(i_data_b[ 7: 4]), .Bin(Bgrp[0]),
//               .Bout(), .GP(GP[1]), .GG(GG[1]));

// COMP_4bit_CLA u2 (.A(i_data_a[11: 8]), .B(i_data_b[11: 8]), .Bin(Bgrp[1]),
//               .Bout(), .GP(GP[2]), .GG(GG[2]));

// COMP_4bit_CLA u3 (.A(i_data_a[15:12]), .B(i_data_b[15:12]), .Bin(Bgrp[2]),
//               .Bout(), .GP(GP[3]), .GG(GG[3]));

// COMP_4bit_CLA u4 (.A(i_data_a[19:16]), .B(i_data_b[19:16]), .Bin(Bgrp[3]),
//               .Bout(), .GP(GP[4]), .GG(GG[4]));

// COMP_4bit_CLA u5 (.A(i_data_a[23:20]), .B(i_data_b[23:20]), .Bin(Bgrp[4]),
//               .Bout(), .GP(GP[5]), .GG(GG[5]));

// COMP_4bit_CLA u6 (.A(i_data_a[27:24]), .B(i_data_b[27:24]), .Bin(Bgrp[5]),
//               .Bout(), .GP(GP[6]), .GG(GG[6]));


// // ======================================================
// //   🔥 LOOKAHEAD MƯỢN (BORROW LOOKAHEAD) CẤP CAO – 7 groups
// // ======================================================

// // Borrow vào group 1
// assign Bgrp[1] = GG[1] |
//                  (GP[1] & GG[0]);

// // Borrow vào group 2
// assign Bgrp[2] = GG[2] |
//                  (GP[2] & GG[1]) |
//                  (GP[2] & GP[1] & GG[0]);

// // Borrow vào group 3
// assign Bgrp[3] = GG[3] |
//                  (GP[3] & GG[2]) |
//                  (GP[3] & GP[2] & GG[1]) |
//                  (GP[3] & GP[2] & GP[1] & GG[0]);

// // Borrow vào group 4
// assign Bgrp[4] = GG[4] |
//                  (GP[4] & GG[3]) |
//                  (GP[4] & GP[3] & GG[2]) |
//                  (GP[4] & GP[3] & GP[2] & GG[1]) |
//                  (GP[4] & GP[3] & GP[2] & GP[1] & GG[0]);

// // Borrow vào group 5
// assign Bgrp[5] = GG[5] |
//                  (GP[5] & GG[4]) |
//                  (GP[5] & GP[4] & GG[3]) |
//                  (GP[5] & GP[4] & GP[3] & GG[2]) |
//                  (GP[5] & GP[4] & GP[3] & GP[2] & GG[1]) |
//                  (GP[5] & GP[4] & GP[3] & GP[2] & GP[1] & GG[0]);

// // Borrow vào group 6 (final)
// assign Bgrp[6] = GG[6] |
//                  (GP[6] & GG[5]) |
//                  (GP[6] & GP[5] & GG[4]) |
//                  (GP[6] & GP[5] & GP[4] & GG[3]) |
//                  (GP[6] & GP[5] & GP[4] & GP[3] & GG[2]) |
//                  (GP[6] & GP[5] & GP[4] & GP[3] & GP[2] & GG[1]) |
//                  (GP[6] & GP[5] & GP[4] & GP[3] & GP[2] & GP[1] & GG[0]);

// // A < B khi borrow cuối = 1
// assign o_less = Bgrp[6];

// endmodule

// module COMP_4bit_CLA (
//     input  logic [3:0] A,
//     input  logic [3:0] B,
//     input  logic       Bin,      // Borrow-in
//     output logic       Bout,     // Borrow-out
//     output logic       GP,       // Group propagate
//     output logic       GG        // Group generate
// );

// logic [3:0] g, p, b;

// // bitwise generate & propagate
// assign g = ~A &  B;
// assign p = ~(A & ~B);

// // lookahead inside the 4-bit group
// assign b[0] = g[0] | (p[0] & Bin);
// assign b[1] = g[1] | (p[1] & b[0]);
// assign b[2] = g[2] | (p[2] & b[1]);
// assign b[3] = g[3] | (p[3] & b[2]);

// assign Bout = b[3];

// // Group propagate GP = p3 & p2 & p1 & p0
// assign GP = &p;

// // Group generate (standard borrow-lookahead form)
// assign GG = g[3] |
//             (p[3] & g[2]) |
//             (p[3] & p[2] & g[1]) |
//             (p[3] & p[2] & p[1] & g[0]);

// endmodule
