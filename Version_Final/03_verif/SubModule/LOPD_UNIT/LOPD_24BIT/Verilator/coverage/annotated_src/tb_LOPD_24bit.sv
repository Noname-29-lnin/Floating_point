//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module tb_LOPD_24bit();
        
            // ================= PARAMETERS ================= //
            parameter SIZE_DATA = 24;
            parameter SIZE_POS  = 5; // log2(24) = 5
        
            // ================= SIGNALS ================= //
 000073     logic i_clk;
 000036     logic [SIZE_DATA-1:0] i_data;
%000002     logic [SIZE_POS-1:0]  o_pos_one;
%000002     logic                 o_zero_flag;
        
%000002     logic [SIZE_POS-1:0]  w_expect_pos;
%000002     logic                 w_expect_zero;
        
%000001     int test_count = 0;
%000001     int test_pass  = 0;
        
            // ================= DUT ================= //
            LOPD_24bit #(
                .SIZE_DATA  (SIZE_DATA),
                .SIZE_LOPD  (SIZE_POS)
            ) DUT (
                .i_data         (i_data),
                .o_one_position (o_pos_one),
                .o_zero_flag    (o_zero_flag)
            );
        
            // ================= DUMP WAVE ================= //
%000000     initial begin
%000000         i_clk = 1'b0;
 000073         forever begin
 000073             #5 i_clk = ~i_clk;
                end
            end
%000001     initial begin
%000001         $dumpfile("tb_LOPD_24bit.vcd");
%000001         $dumpvars(0, tb_LOPD_24bit);
            end
        
            // ================= FUNCTION: Reference Model ================= //
 000125     function automatic void f_find_LOPD(
                input  logic [SIZE_DATA-1:0] f_i_data,
                output logic [SIZE_POS-1:0]  f_o_pos_one,
                output logic                 f_o_zero_flag
            );
                int pos;
 000125         begin
%000001             if (f_i_data == 0) begin
%000001                 f_o_pos_one   = 0;
%000001                 f_o_zero_flag = 1;
 000124             end else begin
                        // Find position of leading '1' from MSB → LSB
 000124                 for (pos = SIZE_DATA-1; pos >= 0; pos--) begin
 000357                     if (f_i_data[pos]) begin
%000000                         f_o_pos_one   = SIZE_DATA-1 - pos; // encode distance from MSB
%000000                         f_o_zero_flag = 0;
%000000                         break;
                            end
                        end
                    end
                end
            endfunction
        
            // ================= TASK: Display & Compare ================= //
 000125     task automatic Check_Result(
                input string t_name,
                input logic [SIZE_DATA-1:0] t_data,
                input logic [SIZE_POS-1:0]  exp_pos,
                input logic                 exp_zero,
                input logic [SIZE_POS-1:0]  dut_pos,
                input logic                 dut_zero
            );
                string result;
 000125         result = ((exp_pos == dut_pos) && (exp_zero == dut_zero)) ? "PASS" : "FAIL";
 000125         $display("[%s] data=%b => expect(pos=%0d, zero=%b), dut(pos=%0d, zero=%b) => %s",
 000125                  t_name, t_data, exp_pos, exp_zero, dut_pos, dut_zero, result);
 000125         test_count++;
 000125         if (result == "PASS") test_pass++;
            endtask
        
            // ================= TEST SEQUENCE ================= //
            int bit_pos;
%000001     initial begin
%000001         $display("\n=== START 8-bit LEADING ONE POSITION DETECTOR TEST ===\n");
                
%000001         @(posedge i_clk);
%000001         #1;
%000001         i_data = 24'h0;
%000001         f_find_LOPD(i_data, w_expect_pos, w_expect_zero);
%000001         Check_Result("Zero", i_data, w_expect_pos, w_expect_zero, o_pos_one, o_zero_flag);
        
                // --- Deterministic test patterns (0 → 255) ---
%000001         bit_pos = 1;
%000001         repeat (24) begin
 000024             @(posedge i_clk);
 000024             #1;
 000024             i_data  = bit_pos;
 000024             @(negedge i_clk);
 000024             f_find_LOPD(i_data, w_expect_pos, w_expect_zero);
 000024             #1;
 000024             Check_Result("Direcly", i_data, w_expect_pos, w_expect_zero, o_pos_one, o_zero_flag);
 000024             bit_pos = bit_pos << 1'b1;
                end
        
                // --- Random test cases ---
%000001         repeat (100) begin
 000100             i_data = $urandom_range(0, 16777215);
 000100             #1;
 000100             f_find_LOPD(i_data, w_expect_pos, w_expect_zero);
 000100             Check_Result("Random", i_data, w_expect_pos, w_expect_zero, o_pos_one, o_zero_flag);
                end
        
                // --- Summary ---
%000001         #5;
%000001         $display("\n==================================");
%000001         $display("========== TEST SUMMARY ==========");
%000001         $display("Total test cases: %6d", test_count);
%000001         $display("Passed          : %6d", test_pass);
%000001         $display("Failed          : %6d", test_count - test_pass);
%000001         $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / test_count);
%000001         $display("==================================\n");
        
%000001         #10;
%000001         $finish;
            end
        
        endmodule
        
