`timescale 1ns/1ps

module tb_FPU_unit ();

parameter ALU_OP = 1;
parameter SIZE_ADDR = 4;
logic i_clk, i_rst_n;
logic        i_add_sub;
logic [31:0] i_32_a;
logic [31:0] i_32_b;
logic [31:0] o_32_s;
logic        o_ov_flow;
logic        o_un_flow;
logic [SIZE_ADDR-1:0]   w_i_addr;
logic [31:0]            w_o_data_rom_a;
logic [31:0]            w_o_data_rom_b;

int test_count = 0;
int test_pass  = 0;

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
single_port_rom #(
    .FILE_DATA      ("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/FPU_list_A.txt"),
    .DATA_WIDTH     (32),
    .ADDR_WIDTH     (SIZE_ADDR)
) ROM_UNIT_A (
	.addr           (w_i_addr),
    .rst_n          (i_rst_n),
	.clk            (i_clk), 
	.q              (w_o_data_rom_a)
);
single_port_rom #(
    .FILE_DATA      ("/home/noname/Documents/project_tiny/Floating_point/Verision1/03_verif/TopModule/FPU_list_B.txt"),
    .DATA_WIDTH     (32),
    .ADDR_WIDTH     (SIZE_ADDR)
) ROM_UNIT_B (
	.addr           (w_i_addr),
    .rst_n          (i_rst_n),
	.clk            (i_clk), 
	.q              (w_o_data_rom_b)
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
function automatic shortreal float_to_real(input logic [31:0] f);
    int temp;                        // 32-bit integer container
    temp = int'(f);                  // ép logic -> int (2-state)
    return $bitstoshortreal(temp);   // chuyển bit -> shortreal
endfunction

task automatic Display_result(
    string                      t_type      ,
    input logic                 t_i_add_sub ,
    input logic [31:0]          t_i_32_a    ,
    input logic [31:0]          t_i_32_b    ,
    input logic [31:0]          t_o_32_s    ,
    input logic                 t_o_ov_flow ,
    input logic                 t_o_un_flow  
);
    begin
        $display("[%s][%s]i_32_a=%h (%.4f) %s i_32_b=%h (%.4f) \t| o_32_s=%h (%.4f) \t| o_ov_flow=%b, o_un_flow=%b",
                    t_type, (t_i_add_sub == 1'b1) ? "SUB" : "ADD", 
                    t_i_32_a, float_to_real(t_i_32_a), (t_i_add_sub == 1'b1) ? "-" : "+", t_i_32_b, float_to_real(t_i_32_b), t_o_32_s, float_to_real(t_o_32_s),
                    t_o_ov_flow, t_o_un_flow);
    end
endtask //automatic
task automatic TestCase_Display_result(
    string              t_type,
    string              t_testcase,
    input logic [31:0]  t_i_fpu_a,
    input logic [31:0]  t_i_fpu_b
);
    begin
        $display("==========[ %s ]==========", t_testcase);
        @(posedge i_clk);
        #1;
        i_add_sub   = 1'b0;
        i_32_a      = t_i_fpu_a;
        i_32_b      = t_i_fpu_b;
        @(negedge i_clk);
        #1;
        Display_result(t_type, i_add_sub, i_32_a, i_32_b, o_32_s, o_ov_flow, o_un_flow);
        @(posedge i_clk);
        #1;
        i_add_sub   = 1'b0;
        i_32_a      = t_i_fpu_b;
        i_32_b      = t_i_fpu_a;
        @(negedge i_clk);
        #1;
        Display_result(t_type, i_add_sub, i_32_a, i_32_b, o_32_s, o_ov_flow, o_un_flow);
        @(posedge i_clk);
        #1;
        i_add_sub   = 1'b1;
        i_32_a      = t_i_fpu_a;
        i_32_b      = t_i_fpu_b;
        @(negedge i_clk);
        #1;
        Display_result(t_type, i_add_sub, i_32_a, i_32_b, o_32_s, o_ov_flow, o_un_flow);
        @(posedge i_clk);
        #1;
        i_add_sub   = 1'b1;
        i_32_a      = t_i_fpu_b;
        i_32_b      = t_i_fpu_a;
        @(negedge i_clk);
        #1;
        Display_result(t_type, i_add_sub, i_32_a, i_32_b, o_32_s, o_ov_flow, o_un_flow);
    end
endtask //automatic

initial begin
    i_rst_n = 0;
    i_add_sub       = 1'b0;
    i_32_a          = 32'h0;
    i_32_b          = 32'h0;
    w_i_addr        = '0;
    #100;
    i_rst_n = 1;
    #100;
    TestCase_Display_result("ZERO", "Zero (0.0 & 0.0)", 32'h00000000, 32'h00000000);
    TestCase_Display_result("ZERO", "Zero (0.0 & -0.0)", 32'h00000000, 32'h80000000);
    TestCase_Display_result("INT", "INF (inf & inf)", 32'h7f800000, 32'h7f800000);
    TestCase_Display_result("INT", "INT (int & -inf)", 32'h7f800000, 32'hff800000);
    TestCase_Display_result("DIRECLY", "NORMAL (5.5 & 2.2)", 32'h40b00000, 32'h400ccccd);
    TestCase_Display_result("DIRECLY", "NORMAL (-5.5 & 2.2)", 32'hc0b00000, 32'h400ccccd);
    TestCase_Display_result("DIRECLY", "NORMAL (-5.5 & -5.5)", 32'hc0b00000, 32'hc0b00000);
    TestCase_Display_result("DIRECLY", "ROUNDING SPECITIAL", 32'hc07fffff, 32'hc1f00000);
    repeat(2**SIZE_ADDR) begin
        TestCase_Display_result("Random", "Read data from ROM", w_o_data_rom_a, w_o_data_rom_b);
        @(posedge i_clk);
        #1;
        w_i_addr = w_i_addr + 1;
    end
    #100;
    $finish;
end

endmodule
