module EXP_unit #(
    parameter SIZE_EXP  = 8
)(
    input logic                 i_clk           ,
    input logic                 i_rst_n         ,
    input logic [SIZE_EXP-1:0]  i_exp_a         ,
    input logic [SIZE_EXP-1:0]  i_exp_b         ,
    output logic [SIZE_EXP-1:0] o_exp_greater   ,
    output logic [SIZE_EXP-1:0] o_diff_value    ,
    output logic                o_diff_signal          // 0: i_exp_a >= i_exp_b | 1: i_exp_a < i_exp_b
);

logic [SIZE_EXP-1:0] w_i_exp_a;
logic [SIZE_EXP-1:0] w_i_exp_b;
logic [SIZE_EXP-1:0] w_o_exp_greater;
logic [SIZE_EXP-1:0] w_o_diff_value;
logic                w_o_diff_signal;

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_next
    if(~i_rst_n) begin
        w_i_exp_a       <= '0;
        w_i_exp_b       <= '0;
        o_exp_greater   <= '0;
        o_diff_value    <= '0;
        o_diff_signal   <= '0;
    end else begin
        w_i_exp_a       <= i_exp_a;
        w_i_exp_b       <= i_exp_b;
        o_exp_greater   <= w_o_exp_greater;
        o_diff_value    <= w_o_diff_value;
        o_diff_signal   <= w_o_diff_signal;
    end
end

EXP_diff_exponent #(
    .SIZE_EXP   (SIZE_EXP)
) EXP_UNIT (
    .i_exp_a         (w_i_exp_a),
    .i_exp_b         (w_i_exp_b),
    .o_exp_greater   (w_o_exp_greater),
    .o_diff_value    (w_o_diff_value),
    .o_diff_signal   (w_o_diff_signal) // 0: i_exp_a >= i_exp_b | 1: i_exp_a < i_exp_b
);

endmodule
