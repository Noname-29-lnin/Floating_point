`timescale 1ns/1ps

module tb_FPU_unit ();

parameter ALU_OP = 1;
logic i_clk, i_rst_n;
logic        i_add_sub;
logic [31:0] i_32_a;
logic [31:0] i_32_b;
logic [31:0] o_32_s;
logic        o_ov_flow;
logic        o_un_flow;

FPU_unit #(
    .NUM_OP     (ALU_OP)
) DUT (
    .i_add_sub       (i_add_sub),
    .i_32_a          (i_32_a),
    .i_32_b          (i_32_b),
    .o_32_s          (o_32_s),
    .o_ov_flag       (o_ov_flag),
    .o_un_flag       (o_un_flow) 
);

initial begin
    $dumpfile("tb_FPU_unit.vcd");
    $dumpvars(0, tb_FPU_unit);
end
initial begin
    i_clk = 1'b0;
    forever begin
        #5 i_clk = ~i_clk;
    end
end


endmodule
