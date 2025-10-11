module FPU_normalization_top #(
    parameter SIZE_LOPD = 5,
    parameter SIZE_DATA = 28
)(
    input  logic                     i_clk,
    input  logic                     i_rst_n,

    // ------------------------------
    // Input signals
    // ------------------------------
    input  logic                     i_overflow,
    input  logic [SIZE_DATA-1:0]     i_mantissa,

    // ------------------------------
    // Output signals
    // ------------------------------
    output logic [SIZE_LOPD-1:0]     o_lopd,
    output logic [SIZE_DATA-1:0]     o_mantissa
);

    // ==========================================================
    // 1. INPUT REGISTERS (đăng ký đầu vào)
    // ==========================================================
    logic                     r_overflow;
    logic [SIZE_DATA-1:0]     r_mantissa;

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            r_overflow <= 1'b0;
            r_mantissa <= '0;
        end else begin
            r_overflow <= i_overflow;
            r_mantissa <= i_mantissa;
        end
    end

    // ==========================================================
    // 2. WIRES từ khối con
    // ==========================================================
    logic [SIZE_LOPD-1:0]     w_lopd;
    logic [SIZE_DATA-1:0]     w_mantissa;

    // ==========================================================
    // 3. KẾT NỐI MODULE CON
    // ==========================================================
    FPU_normalization #(
        .SIZE_LOPD(SIZE_LOPD),
        .SIZE_DATA(SIZE_DATA)
    ) u_FPU_normalization (
        .i_overflow (r_overflow),
        .i_mantissa (r_mantissa),
        .o_lopd     (w_lopd),
        .o_mantissa (w_mantissa)
    );

    // ==========================================================
    // 4. OUTPUT REGISTERS (đăng ký đầu ra)
    // ==========================================================
    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            o_lopd     <= '0;
            o_mantissa <= '0;
        end else begin
            o_lopd     <= w_lopd;
            o_mantissa <= w_mantissa;
        end
    end

endmodule
