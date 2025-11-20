//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module tb_LOPD_8bit();
        
            // ================= PARAMETERS ================= //
            parameter SIZE_DATA = 16;
            parameter SIZE_POS  = 4; // log2(16) = 4
        
            // ================= SIGNALS ================= //
%000004     logic [SIZE_DATA-1:0] i_data;
%000002     logic [SIZE_POS-1:0]  o_pos_one;
%000002     logic                 o_zero_flag;
        
%000002     logic [SIZE_POS-1:0]  w_expect_pos;
%000002     logic                 w_expect_zero;
        
%000001     int test_count = 0;
%000001     int test_pass  = 0;
        
            // ================= DUT ================= //
            LOPD_16bit DUT (
                .i_data(i_data),
                .o_pos_one(o_pos_one),
                .o_zero_flag(o_zero_flag)
            );
        
            // ================= DUMP WAVE ================= //
%000001     initial begin
%000001         $dumpfile("tb_LOPD_16bit.vcd");
%000001         $dumpvars(0, tb_LOPD_16bit);
            end
        
            // ================= FUNCTION: Reference Model ================= //
 065546     function automatic void f_find_LOPD(
                input  logic [SIZE_DATA-1:0] f_i_data,
                output logic [SIZE_POS-1:0]  f_o_pos_one,
                output logic                 f_o_zero_flag
            );
                int pos;
 065546         begin
%000001             if (f_i_data == 0) begin
%000001                 f_o_pos_one   = 0;
%000001                 f_o_zero_flag = 1;
 065545             end else begin
                        // Find position of leading '1' from MSB → LSB
 065522                 for (pos = SIZE_DATA-1; pos >= 0; pos--) begin
 065522                     if (f_i_data[pos]) begin
%000000                         f_o_pos_one   = SIZE_DATA-1 - pos; // encode distance from MSB
%000000                         f_o_zero_flag = 0;
%000000                         break;
                            end
                        end
                    end
                end
            endfunction
        
            // ================= TASK: Display & Compare ================= //
 065546     task automatic Check_Result(
                input string t_name,
                input logic [SIZE_DATA-1:0] t_data,
                input logic [SIZE_POS-1:0] exp_pos,
                input logic                 exp_zero,
                input logic [SIZE_POS-1:0] dut_pos,
                input logic                 dut_zero
            );
                string result;
 065546         result = ((exp_pos == dut_pos) && (exp_zero == dut_zero)) ? "PASS" : "FAIL";
 065546         $display("[%s] data=%b => expect(pos=%0d, zero=%b), dut(pos=%0d, zero=%b) => %s",
 065546                  t_name, t_data, exp_pos, exp_zero, dut_pos, dut_zero, result);
 065546         test_count++;
 065546         if (result == "PASS") test_pass++;
            endtask
        
            // ================= TEST SEQUENCE ================= //
%000001     initial begin
%000001         $display("\n=== START 8-bit LEADING ONE POSITION DETECTOR TEST ===\n");
        
                // --- Deterministic test patterns (0 → 255) ---
%000001         for (int i = 0; i < (1 << SIZE_DATA); i++) begin
 065536             i_data = i[SIZE_DATA-1:0];
 065536             #1;
 065536             f_find_LOPD(i_data, w_expect_pos, w_expect_zero);
 065536             Check_Result("Fixed", i_data, w_expect_pos, w_expect_zero, o_pos_one, o_zero_flag);
                end
        
                // --- Random test cases ---
%000001         repeat (10) begin
 000010             i_data = $urandom_range(0, (1 << SIZE_DATA) - 1);
 000010             #1;
 000010             f_find_LOPD(i_data, w_expect_pos, w_expect_zero);
 000010             Check_Result("Random", i_data, w_expect_pos, w_expect_zero, o_pos_one, o_zero_flag);
                end
        
                // --- Summary ---
%000001         #5;
%000001         $display("\n================================");
%000001         $display("========== TEST SUMMARY ==========");
%000001         $display("Total test cases: %6d", test_count);
%000001         $display("Passed          : %6d", test_pass);
%000001         $display("Failed          : %6d", test_count - test_pass);
%000001         $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / test_count);
%000001         $display("================================\n");
        
%000001         #10;
%000001         $finish;
            end
        
        endmodule
        
