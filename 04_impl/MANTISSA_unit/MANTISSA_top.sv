module MANTISSA_top #(
    parameter SIZE_DATA  = 28,
    parameter SIZE_SHIFT = 8,
    parameter NUM_OP     = 1
)(
    input  logic                     i_clk,
    input  logic                     i_rst_n,
    input  logic                     i_sign_A,
    input  logic [SIZE_DATA-1:0]     i_mantissa_A,
    input  logic                     i_sign_B,
    input  logic [SIZE_DATA-1:0]     i_mantissa_B,
    input  logic [NUM_OP-1:0]        i_alu_op,       // Add/Sub
    input  logic                     i_diff_signal,  // A < B ? 1'b1 : 1'b0
    input  logic [SIZE_SHIFT-1:0]    i_diff_value,

    output logic                     o_sign_result,
    output logic [SIZE_DATA-1:0]     o_mantissa,
    output logic                     o_overflow
);

    // ----------------------------
    // 1. Input registers
    // ----------------------------
    logic                     r_sign_A;
    logic [SIZE_DATA-1:0]     r_mantissa_A;
    logic                     r_sign_B;
    logic [SIZE_DATA-1:0]     r_mantissa_B;
    logic [NUM_OP-1:0]        r_alu_op;
    logic                     r_diff_signal;
    logic [SIZE_SHIFT-1:0]    r_diff_value;

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            r_sign_A       <= 1'b0;
            r_mantissa_A   <= '0;
            r_sign_B       <= 1'b0;
            r_mantissa_B   <= '0;
            r_alu_op       <= '0;
            r_diff_signal  <= 1'b0;
            r_diff_value   <= '0;
        end else begin
            r_sign_A       <= i_sign_A;
            r_mantissa_A   <= i_mantissa_A;
            r_sign_B       <= i_sign_B;
            r_mantissa_B   <= i_mantissa_B;
            r_alu_op       <= i_alu_op;
            r_diff_signal  <= i_diff_signal;
            r_diff_value   <= i_diff_value;
        end
    end

    // ----------------------------
    // 2. Internal wires
    // ----------------------------
    logic                    w_sign_result;
    logic [SIZE_DATA-1:0]    w_mantissa;
    logic                    w_overflow;

    // ----------------------------
    // 3. Instantiate MANTISSA_unit
    // ----------------------------
    MANTISSA_unit #(
        .NUM_OP(NUM_OP),
        .SIZE_SHIFT(SIZE_SHIFT),
        .SIZE_DATA(SIZE_DATA)
    ) u_MANTISSA_unit (
        .i_sign_A      (r_sign_A),
        .i_mantissa_A  (r_mantissa_A),
        .i_sign_B      (r_sign_B),
        .i_mantissa_B  (r_mantissa_B),
        .i_alu_op      (r_alu_op),
        .i_diff_signal (r_diff_signal),
        .i_diff_value  (r_diff_value),
        .o_sign_result (w_sign_result),
        .o_mantissa    (w_mantissa),
        .o_overflow    (w_overflow)
    );

    // ----------------------------
    // 4. Output registers
    // ----------------------------
    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            o_sign_result <= 1'b0;
            o_mantissa    <= '0;
            o_overflow    <= 1'b0;
        end else begin
            o_sign_result <= w_sign_result;
            o_mantissa    <= w_mantissa;
            o_overflow    <= w_overflow;
        end
    end

endmodule
