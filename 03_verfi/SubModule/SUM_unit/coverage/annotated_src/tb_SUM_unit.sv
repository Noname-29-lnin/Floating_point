//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module tb_SUM_unit();
        
            // ---------------- PARAMETER ----------------
            parameter SIZE_DATA = 28;
            parameter NUM_TEST  = 500;
        
            // ---------------- SIGNAL ----------------
 000262     logic                     i_carry;
 000231     logic [SIZE_DATA-1:0]     i_data_a;
 000228     logic [SIZE_DATA-1:0]     i_data_b;
 000232     logic [SIZE_DATA-1:0]     o_sum;
 000262     logic                     o_carry;
        
 000232     logic [SIZE_DATA-1:0]     expected_sum;
 000240     logic                     expected_carry;
        
            integer i;
%000001     integer pass_count = 0;
%000001     integer fail_count = 0;
        
            // ---------------- DUT ----------------
            SUM_unit #(
                .SIZE_DATA (SIZE_DATA)
            ) DUT (
                .i_carry (i_carry),
                .i_data_a (i_data_a),
                .i_data_b (i_data_b),
                .o_sum    (o_sum),      // nếu trong SUM_unit đầu ra là `o`, thay bằng `.o(o_sum)`
                .o_carry  (o_carry)
            );
        
%000001     initial begin
%000001         $dumpfile("tb_SUM_unit.vcd");
%000001         $dumpvars(0, tb_SUM_unit);
            end
        
            // ---------------- TEST PROCESS ----------------
%000001     initial begin
%000001         $display("============================================");
%000001         $display(">>> TEST SUM UNIT (%0d-bit) <<<", SIZE_DATA);
%000001         $display("============================================");
        
                // Run NUM_TEST times
%000001         for (i = 0; i < NUM_TEST; i++) begin
                    // Random inputs
 000500             i_data_a = $urandom_range(0, 2**SIZE_DATA - 1);
 000500             i_data_b = $urandom_range(0, 2**SIZE_DATA - 1);
 000500             i_carry  = $urandom_range(0, 1);
        
 000500             #1; // wait for combinational logic to settle
        
                    // Expected value (mô phỏng phép cộng thật)
 000500             {expected_carry, expected_sum} = {1'b0, i_data_a} + {1'b0, i_data_b} + {{(SIZE_DATA-1){1'b0}}, i_carry};
        
                    // Compare DUT vs expected
%000000             if ((o_sum === expected_sum) && (o_carry === expected_carry)) begin
 000500                 pass_count++;
 000500                 $display("Test %0d: PASS | A=%h | B=%h | Cin=%b | SUM=%h | Cout=%b",
 000500                          i, i_data_a, i_data_b, i_carry, o_sum, o_carry);
%000000             end else begin
%000000                 fail_count++;
%000000                 $display("Test %0d: FAIL | A=%h | B=%h | Cin=%b | DUT_SUM=%h | EXP_SUM=%h | DUT_Cout=%b | EXP_Cout=%b",
%000000                          i, i_data_a, i_data_b, i_carry,
%000000                          o_sum, expected_sum, o_carry, expected_carry);
                    end
                end
        
                // Summary
%000001         $display("============================================");
%000001         $display("Total Tests : %0d", NUM_TEST);
%000001         $display("PASS         : %0d", pass_count);
%000001         $display("FAIL         : %0d", fail_count);
%000001         $display("============================================");
        
%000001         if (fail_count == 0)
%000001             $display("✅ ALL TESTS PASSED!");
                else
%000000             $display("❌ SOME TESTS FAILED!");
        
%000001         $finish;
            end
        
        endmodule
        
