module CKSA_28bit(
    input  logic        i_carry,
    input  logic [27:0] i_data_a,
    input  logic [27:0] i_data_b,
    output logic [27:0] o_sum,
    output logic        o_carry
);

    logic [6:0] w_carry;       // carry thực sau khi chọn
    logic [6:0] w_carry_0;     // carry nếu cin = 0
    logic [6:0] w_carry_1;     // carry nếu cin = 1
    logic [27:0] w_sum_carry_0; 
    logic [27:0] w_sum_carry_1;

    assign w_carry[0] = i_carry;

    // ================================================================
    // ------------------------ Block 0: bits [3:0] --------------------
    // ================================================================
    CSKA_4bit U0_0 (
        .a   (i_data_a[3:0]),
        .b   (i_data_b[3:0]),
        .cin (1'b0),
        .sum (w_sum_carry_0[3:0]),
        .cout(w_carry_0[0])
    );

    CSKA_4bit U0_1 (
        .a   (i_data_a[3:0]),
        .b   (i_data_b[3:0]),
        .cin (1'b1),
        .sum (w_sum_carry_1[3:0]),
        .cout(w_carry_1[0])
    );

    assign o_sum[3:0] = w_carry[0] ? w_sum_carry_1[3:0] : w_sum_carry_0[3:0];
    assign w_carry[1] = w_carry[0] ? w_carry_1[0]       : w_carry_0[0];


    // ================================================================
    // ------------------------ Block 1: [7:4] -------------------------
    // ================================================================
    CSKA_4bit U1_0 (
        .a   (i_data_a[7:4]),
        .b   (i_data_b[7:4]),
        .cin (1'b0),
        .sum (w_sum_carry_0[7:4]),
        .cout(w_carry_0[1])
    );

    CSKA_4bit U1_1 (
        .a   (i_data_a[7:4]),
        .b   (i_data_b[7:4]),
        .cin (1'b1),
        .sum (w_sum_carry_1[7:4]),
        .cout(w_carry_1[1])
    );

    assign o_sum[7:4] = w_carry[1] ? w_sum_carry_1[7:4] : w_sum_carry_0[7:4];
    assign w_carry[2] = w_carry[1] ? w_carry_1[1]       : w_carry_0[1];


    // ================================================================
    // ------------------------ Block 2: [11:8] ------------------------
    // ================================================================
    CSKA_4bit U2_0 (.a(i_data_a[11:8]), .b(i_data_b[11:8]), .cin(1'b0),
                   .sum(w_sum_carry_0[11:8]), .cout(w_carry_0[2]));

    CSKA_4bit U2_1 (.a(i_data_a[11:8]), .b(i_data_b[11:8]), .cin(1'b1),
                   .sum(w_sum_carry_1[11:8]), .cout(w_carry_1[2]));

    assign o_sum[11:8] = w_carry[2] ? w_sum_carry_1[11:8] : w_sum_carry_0[11:8];
    assign w_carry[3]  = w_carry[2] ? w_carry_1[2]        : w_carry_0[2];


    // ================================================================
    // ------------------------ Block 3: [15:12] -----------------------
    // ================================================================
    CSKA_4bit U3_0 (.a(i_data_a[15:12]), .b(i_data_b[15:12]), .cin(1'b0),
                   .sum(w_sum_carry_0[15:12]), .cout(w_carry_0[3]));

    CSKA_4bit U3_1 (.a(i_data_a[15:12]), .b(i_data_b[15:12]), .cin(1'b1),
                   .sum(w_sum_carry_1[15:12]), .cout(w_carry_1[3]));

    assign o_sum[15:12] = w_carry[3] ? w_sum_carry_1[15:12] : w_sum_carry_0[15:12];
    assign w_carry[4]   = w_carry[3] ? w_carry_1[3]         : w_carry_0[3];


    // ================================================================
    // ------------------------ Block 4: [19:16] -----------------------
    // ================================================================
    CSKA_4bit U4_0 (.a(i_data_a[19:16]), .b(i_data_b[19:16]), .cin(1'b0),
                   .sum(w_sum_carry_0[19:16]), .cout(w_carry_0[4]));

    CSKA_4bit U4_1 (.a(i_data_a[19:16]), .b(i_data_b[19:16]), .cin(1'b1),
                   .sum(w_sum_carry_1[19:16]), .cout(w_carry_1[4]));

    assign o_sum[19:16] = w_carry[4] ? w_sum_carry_1[19:16] : w_sum_carry_0[19:16];
    assign w_carry[5]   = w_carry[4] ? w_carry_1[4]         : w_carry_0[4];


    // ================================================================
    // ------------------------ Block 5: [23:20] -----------------------
    // ================================================================
    CSKA_4bit U5_0 (.a(i_data_a[23:20]), .b(i_data_b[23:20]), .cin(1'b0),
                   .sum(w_sum_carry_0[23:20]), .cout(w_carry_0[5]));

    CSKA_4bit U5_1 (.a(i_data_a[23:20]), .b(i_data_b[23:20]), .cin(1'b1),
                   .sum(w_sum_carry_1[23:20]), .cout(w_carry_1[5]));

    assign o_sum[23:20] = w_carry[5] ? w_sum_carry_1[23:20] : w_sum_carry_0[23:20];
    assign w_carry[6]   = w_carry[5] ? w_carry_1[5]         : w_carry_0[5];


    // ================================================================
    // ------------------------ Block 6: [27:24] -----------------------
    // ================================================================
    CSKA_4bit U6_0 (.a(i_data_a[27:24]), .b(i_data_b[27:24]), .cin(1'b0),
                   .sum(w_sum_carry_0[27:24]), .cout(w_carry_0[6]));

    CSKA_4bit U6_1 (.a(i_data_a[27:24]), .b(i_data_b[27:24]), .cin(1'b1),
                   .sum(w_sum_carry_1[27:24]), .cout(w_carry_1[6]));

    assign o_sum[27:24] = w_carry[6] ? w_sum_carry_1[27:24] : w_sum_carry_0[27:24];
    assign o_carry      = w_carry[6] ? w_carry_1[6]         : w_carry_0[6];

endmodule
