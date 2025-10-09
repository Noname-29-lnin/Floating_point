`timescale 1ns/1ps
module KSA_unit #(
    parameter integer SIZE_DATA = 32
)(
    input  logic                     i_carry    ,
    input  logic [SIZE_DATA-1:0]     i_data_a   ,
    input  logic [SIZE_DATA-1:0]     i_data_b   ,
    output logic [SIZE_DATA-1:0]     o_data_sum ,
    output logic                     o_carry     
);

    // number of prefix levels (ceiling)
    localparam integer LEVEL = $clog2(SIZE_DATA);

    // w_P[level][bit], w_G[level][bit]  -- level 0 is initial P/G
    logic [SIZE_DATA-1:0] w_P [0:LEVEL];
    logic [SIZE_DATA-1:0] w_G [0:LEVEL];

    // carry vector: carry[0] = C0 (input), carry[i+1] is carry into bit i+1
    logic [SIZE_DATA:0] carry;
    assign carry[0] = i_carry;

    // ------------------------------------------------------------------
    // 1) Pre-processing: generate P0 and G0 for each bit
    //    P_i = A_i ^ B_i
    //    G_i = A_i & B_i
    // ------------------------------------------------------------------
    genvar gi;
    generate
        for (gi = 0; gi < SIZE_DATA; gi++) begin : GEN_GP
            KSA_Gen_GP gp (
                .i_a(i_data_a[gi]),
                .i_b(i_data_b[gi]),
                .o_g(w_G[0][gi]),
                .o_p(w_P[0][gi])
            );
        end
    endgenerate

    // ------------------------------------------------------------------
    // 2) Prefix tree (Kogge–Stone): build levels 1..LEVEL
    //    Black cell: G_out = G_k | (G_j & P_k)   (here indices swapped to match notation)
    //                P_out = P_k & P_j
    //    Gray  cell: G_out = G_k | (G_j & P_k)   (no P_out)
    //    Note: in this implementation we place Gray cells at the right-most
    //          positions where P_out not needed (textbook optimization).
    // ------------------------------------------------------------------
    genvar lev, bi;
    generate
        for (lev = 1; lev <= LEVEL; lev++) begin : PREFIX_STAGE
            localparam integer DIST = 1 << (lev - 1);
            for (bi = 0; bi < SIZE_DATA; bi++) begin : CELL
                if (bi < DIST) begin
                    // no left neighbor to combine with: keep previous values
                    assign w_G[lev][bi] = w_G[lev-1][bi];
                    assign w_P[lev][bi] = w_P[lev-1][bi];
                end
                else begin
                    // index of the partner to combine with:
                    localparam int partner = bi - DIST;
                    // If this position is the rightmost of a block (optional gray)
                    if (bi == ( (1 << lev) - 1 ) || partner < 0) begin
                        // Gray cell: only produce G_out; keep P as previous (not used later)
                        KSA_Gray gray_cell (
                            .i_gj(w_G[lev-1][bi]),           // G_j (current)
                            .i_pk(w_P[lev-1][partner]),      // P_k (from partner)
                            .i_gk(w_G[lev-1][partner]),      // G_k (from partner)
                            .o_g (w_G[lev][bi])
                        );
                        // keep P unchanged (some synth tools will trim unused P)
                        assign w_P[lev][bi] = w_P[lev-1][bi];
                    end
                    else begin
                        // Black cell: compute both G_out and P_out
                        KSA_Black blk_cell (
                            .i_pj(w_P[lev-1][bi]),
                            .i_gj(w_G[lev-1][bi]),
                            .i_pk(w_P[lev-1][partner]),
                            .i_gk(w_G[lev-1][partner]),
                            .o_p (w_P[lev][bi]),
                            .o_g (w_G[lev][bi])
                        );
                    end
                end
            end
        end
    endgenerate

    // ------------------------------------------------------------------
    // 3) Post-processing: compute carries and sums
    //    After LEVEL stages, w_G[LEVEL][i] corresponds to G_{i:0}
    //    and w_P[LEVEL][i] corresponds to P_{i:0} (i.e. propagate through 0..i).
    //    So carry into bit i+1:
    //      carry[i+1] = G_{i:0} | (P_{i:0} & C0)  -> implemented below.
    //    Sum:
    //      S_i = P_i XOR C_i  (use original P: w_P[0][i])
    // ------------------------------------------------------------------
    generate
        for (bi = 0; bi < SIZE_DATA; bi++) begin : GEN_SUM
            // carry into next bit i+1
            // note: w_G[LEVEL][bi] is G_{bi:0} after full prefix
            assign carry[bi+1] = w_G[LEVEL][bi] | (w_P[LEVEL][bi] & i_carry);

            // sum bit: S_i = P_i ^ C_i, where P_i is initial propagate w_P[0][i]
            assign o_data_sum[bi] = w_P[0][bi] ^ carry[bi];
        end
    endgenerate

    assign o_carry = carry[SIZE_DATA];

endmodule
