//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module tb_COMP_28bit();
        
            // ====== Signals ======
%000000     logic i_clk, i_rst_n;
 000039     logic [27:0] i_data_a;
 000037     logic [27:0] i_data_b;
 000049     logic        o_less;
 000049     logic        w_expect;
        
%000001     int test_count = 0;
%000001     int test_pass  = 0;
        
            // ================= CLOCK ================= //
%000000     initial begin
%000000         i_clk = 1'b0;
 000201         forever #5 i_clk = ~i_clk;  // 100 MHz clock
            end
        
            // ====== DUT ======
            COMP_28bit DUT (
                .i_data_a (i_data_a),
                .i_data_b (i_data_b),
                .o_less   (o_less)
            );
        
            // ================= DUMP WAVE ================= //
%000001     initial begin
%000001         $dumpfile("tb_COMP_28bit.vcd");
%000001         $dumpvars(0, tb_COMP_28bit);
            end
        
            // ====== Expected Function ======
 000100     function automatic logic f_expected_less(
                input logic [27:0] a,
                input logic [27:0] b
            );
 000100         begin
 000100             f_expected_less = (a < b);
                end
            endfunction
        
            // ====== Display Task ======
 000100     task automatic Display_Result(
                string t_type,
                input logic [27:0] t_a,
                input logic [27:0] t_b,
                input logic        t_less
            );
 000100         begin
 000100             $display("[%s] a=%0d (%b), b=%0d (%b) => o_less=%b",
 000100                 t_type, t_a, t_a, t_b, t_b, t_less
                    );
                end
            endtask
        
            // ====== TEST SEQUENCE ======
%000001     initial begin
%000001         $display("\n=== START 28-bit COMPARATOR TEST ===\n");
%000001         i_data_a = 0;
%000001         i_data_b = 0;
        
                // --- Random test cases ---
%000001         repeat (100) begin
 000100             @(posedge i_clk);
 000100             i_data_a = $urandom_range(0, 2**28-1);
 000100             i_data_b = $urandom_range(0, 2**28-1);
 000100             #1;
 000100             w_expect = f_expected_less(i_data_a, i_data_b);
 000100             Display_Result("Random", i_data_a, i_data_b, o_less);
 000100             $display("=> %s: expect=%b, dut=%b",
 000100                      (w_expect == o_less) ? "PASS" : "FAIL",
 000100                      w_expect, o_less);
 000100             test_count++;
%000000             if (w_expect == o_less) test_pass++;
                end
        
                // --- Summary ---
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
        
