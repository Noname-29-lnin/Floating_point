`timescale 1ns/1ps

module tb_FPU_unit ();

parameter ALU_OP = 1;
parameter SIZE_ADDR = 11;
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
    .o_ov_flag       (o_ov_flow),
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
        #10 i_clk = ~i_clk;
    end
end
function automatic shortreal float_to_real(input logic [31:0] f);
    int temp;                        // 32-bit integer container
    temp = int'(f);                  // ép logic -> int (2-state)
    return $bitstoshortreal(temp);   // chuyển bit -> shortreal
endfunction
function automatic logic [31:0] real_to_float(input shortreal f);
    real_to_float = $shortrealtobits(f);
endfunction
function automatic shortreal check_functional(
    input logic             f_i_add_sub ,
    input logic [31:0]      f_i_32_a    ,
    input logic [31:0]      f_i_32_b     
);
    shortreal f_sr_32_a, f_sr_32_b, f_sr_32_e;
    begin
        f_sr_32_a = float_to_real(f_i_32_a);
        f_sr_32_b = float_to_real(f_i_32_b);
        f_sr_32_e = (f_i_add_sub) ? f_sr_32_a - f_sr_32_b : f_sr_32_a + f_sr_32_b;

        return f_sr_32_e;
    end
endfunction
// function automatic shortreal cal_rounding_error(
//     input shortreal f_sr_32_s   ,
//     input shortreal f_sr_32_e   
// );
//     begin
//         if (f_sr_32_e == 0.0)
//             cal_rounding_error = (f_sr_32_s == 0.0) ? 0.0 : 100.0;
//         else
//             cal_rounding_error = ((f_sr_32_s - f_sr_32_e) / f_sr_32_e) * 100.0;
//     end
// endfunction
function automatic shortreal abs_shortreal(input shortreal val);
    if (val < 0.0)
        abs_shortreal = -val;
    else
        abs_shortreal = val;
endfunction

function automatic shortreal cal_rounding_error(
    input shortreal f_sr_32_s,
    input shortreal f_sr_32_e
);
    int s_bits, e_bits;
    bit s_is_nan, e_is_nan, s_is_inf, e_is_inf;
    shortreal diff;

    begin
        // Chuyển từ shortreal → bit pattern (int 32-bit)
        s_bits = $shortrealtobits(f_sr_32_s);
        e_bits = $shortrealtobits(f_sr_32_e);

        // Tách các phần của IEEE 754 single-precision
        // [31]: sign, [30:23]: exponent, [22:0]: fraction
        s_is_nan = ((s_bits[30:23] == 8'hFF) && (s_bits[22:0] != 0));
        e_is_nan = ((e_bits[30:23] == 8'hFF) && (e_bits[22:0] != 0));
        s_is_inf = ((s_bits[30:23] == 8'hFF) && (s_bits[22:0] == 0));
        e_is_inf = ((e_bits[30:23] == 8'hFF) && (e_bits[22:0] == 0));

        // Nếu có NaN hoặc Inf thì bỏ qua
        if (s_is_nan || e_is_nan || s_is_inf || e_is_inf) begin
            cal_rounding_error = 0.0;
        end
        else if (f_sr_32_e == 0.0) begin
            cal_rounding_error = (f_sr_32_s == 0.0) ? 0.0 : 100.0;
        end
        else begin
            diff = f_sr_32_s - f_sr_32_e;
            cal_rounding_error = (abs_shortreal(diff) / abs_shortreal(f_sr_32_e)) * 100.0;
        end
    end
endfunction

function shortreal error_avariable ();
    begin
        return ((2.0 ** (-23.0)) / 1.0) * 100.0;
    end
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
    shortreal t_sr_32_a, t_sr_32_b, t_sr_32_s, t_sr_32_e, t_sr_rounding_error;
    shortreal t_error;
    t_error = error_avariable();
    t_sr_32_a = float_to_real(t_i_32_a);
    t_sr_32_b = float_to_real(t_i_32_b);
    t_sr_32_s = float_to_real(t_o_32_s);
    t_sr_32_e = check_functional(t_i_add_sub, t_i_32_a, t_i_32_b);
    t_sr_rounding_error = cal_rounding_error(t_sr_32_s, t_sr_32_e);
    begin
        $display("[%s][%s]i_32_a=%h (%.24f) %s i_32_b=%h (%.24f) \t| o_32_s=%h (%.24f) \t| o_ov_flow=%b, o_un_flow=%b",
                    t_type, (t_i_add_sub == 1'b1) ? "SUB" : "ADD", 
                    t_i_32_a, t_sr_32_a, (t_i_add_sub == 1'b1) ? "-" : "+", t_i_32_b, t_sr_32_b, t_o_32_s, t_sr_32_s,
                    t_o_ov_flow, t_o_un_flow);
        $display("=> %s: expect=%.24f (%h), dut=%.24f (%h), rounding_error=%.8f %% (exp_error = %.8f %%)", 
                    (t_sr_rounding_error <= t_error) ? "PASS" : "FAIL", 
                    t_sr_32_e, real_to_float(t_sr_32_e), t_sr_32_s, real_to_float(t_sr_32_e), t_sr_rounding_error, t_error);
        test_count++;
        if (t_sr_rounding_error <= t_error) test_pass++;
    end
endtask
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
    TestCase_Display_result("ZERO", "(0.0 & 0.0)", 32'h00000000, 32'h00000000);
    TestCase_Display_result("ZERO", "(0.0 & -0.0)", 32'h00000000, 32'h80000000);
    TestCase_Display_result("ZERO", "(0.0 & -0.0)", 32'h4016A197, 32'h4016A197);
    TestCase_Display_result("ZERO", "(0.0 & -0.0)", 32'h40AED834, 32'h40AED834);
    TestCase_Display_result("INF", "(inf & inf)", 32'h7f800000, 32'h7f800000);
    TestCase_Display_result("INF", "(-inf & -inf)", 32'hff800000, 32'hff800000);
    TestCase_Display_result("INF", "(inf & -inf)", 32'hff800000, 32'h7f800000);
    TestCase_Display_result("INF", "(inf & 0)", 32'h7f800000, 32'h00000000);
    TestCase_Display_result("INF", "(-inf & 0)", 32'hff800000, 32'h00000000);
    TestCase_Display_result("INF", "(inf & Number)", 32'h7f800000, 32'h40533333);
    TestCase_Display_result("INF", "(-inf & Number)", 32'hff800000, 32'h40533333);
    TestCase_Display_result("INF", "(inf & -Number)", 32'h7f800000, 32'hc00ccccd);
    TestCase_Display_result("INF", "(-inf & -Number)", 32'hff800000, 32'hc00ccccd);
    TestCase_Display_result("NaN", "(NaN & -Number)", 32'h7f800001, 32'hc00ccccd);
    TestCase_Display_result("NaN", "(-NaN & -Number)", 32'hff800001, 32'hc00ccccd);
    TestCase_Display_result("NaN", "(NaN &  Number)", 32'hff800001, 32'h40533333);
    TestCase_Display_result("NaN", "(-NaN &  Number)", 32'h7f800001, 32'h40533333);
    TestCase_Display_result("APPRO", "APPR INF", 32'h7f21616f, 32'h007fffff);
    TestCase_Display_result("APPRO", "APPR INF", 32'h7f7fffff, 32'h00ffffff);
    TestCase_Display_result("APPRO", "APPR INF", 32'h7f7fffff, 32'h007fffff);
    TestCase_Display_result("APPRO", "APPR ZERO", 32'h00ffffff, 32'h007fffff);
    TestCase_Display_result("APPRO", "APPR ZERO", 32'h00ffffff, 32'h00ffffff);
    TestCase_Display_result("SIGN", "(-A + B)", 32'hc00ccccd, 32'h40533333);
    TestCase_Display_result("SIGN", "TEST SIGN", 32'hc00ccccd, 32'hc0533333);
    TestCase_Display_result("SIGN", "TEST SIGN", 32'hc00ccccd, 32'hc1b1999a);
    TestCase_Display_result("PRE_NOR_EXP", "Overflow rouding", 32'h0cffffff, 32'h00f80000);
    repeat(2**SIZE_ADDR) begin
    // repeat(10) begin
        TestCase_Display_result("Random", "Read data from ROM", w_o_data_rom_a, w_o_data_rom_b);
        @(posedge i_clk);
        #1;
        w_i_addr = w_i_addr + 1;
    end
    
    // --- Summary ---
    #100;
        $display("\n==================================");
        $display("========== TEST SUMMARY ==========");
        $display("Total test cases: %6d", test_count);
        $display("Passed          : %6d", test_pass);
        $display("Failed          : %6d", test_count - test_pass);
        $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / test_count);
        $display("==================================\n");
    #100;
    $finish;
end

endmodule
