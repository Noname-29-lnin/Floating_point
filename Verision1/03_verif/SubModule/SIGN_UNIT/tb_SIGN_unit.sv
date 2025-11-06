`timescale 1ns/1ps

module tb_SIGN_unit();

logic   i_clk;
logic   i_add_sub;
logic   i_comp_man;
logic   i_sign_man_a;
logic   i_sign_man_b;
logic   o_sign_s;

SIGN_unit DUT (
    .i_add_sub          (i_add_sub),
    .i_comp_man         (i_comp_man),
    .i_sign_man_a       (i_sign_man_a),
    .i_sign_man_b       (i_sign_man_b),
    .o_sign_s           (o_sign_s) 
);

initial begin
    i_clk = 1'b0;
    forever begin
        #5 i_clk = ~i_clk;
    end
end
initial begin
    $dumpfile("tb_SIGN_unit.vcd");
    $dumpvars(0, tb_SIGN_unit);
end
initial begin
    
end

endmodule
