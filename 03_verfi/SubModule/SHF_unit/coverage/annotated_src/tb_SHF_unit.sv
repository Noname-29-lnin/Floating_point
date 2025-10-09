//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module tb_SHF_unit();
        
            // ---------------- PARAMETER ----------------
            parameter LEFT_RIGHT = 0;     // 0: shift left, 1: shift right
            parameter SIZE_DATA  = 24;
            parameter SIZE_SHIFT = 5;
            parameter NUM_TEST   = 1000;
        
            // ---------------- SIGNAL ----------------
 000442     logic [SIZE_SHIFT-1:0] i_shift_number;
 000471     logic [SIZE_DATA-1:0]  i_data;
 000062     logic [SIZE_DATA-1:0]  o_data;
 000062     logic [SIZE_DATA-1:0]  expected_data;
        
            integer i;
%000001     integer pass_count = 0;
%000001     integer fail_count = 0;
        
            // ---------------- DUT ----------------
            SHF_unit #(
                .LEFT_RIGHT (LEFT_RIGHT),
                .SIZE_DATA  (SIZE_DATA),
                .SIZE_SHIFT (SIZE_SHIFT)
            ) DUT (
                .i_shift_number (i_shift_number),
                .i_data         (i_data),
                .o_data         (o_data)
            );
        
            // ---------------- TEST PROCESS ----------------
%000001     initial begin
%000001         $display("============================================");
%000001         if (LEFT_RIGHT == 0)
%000001             $display(">>> TEST SHIFT LEFT UNIT <<<");
                else
%000000             $display(">>> TEST SHIFT RIGHT UNIT <<<");
%000001         $display("============================================");
        
                // Run NUM_TEST times
%000001         for (i = 0; i < NUM_TEST; i++) begin
                    // Random inputs
 001000             i_data         = $urandom_range(0, 2**SIZE_DATA-1);
 001000             i_shift_number = $urandom_range(0, SIZE_DATA-1); // shift 0→23
        
 001000             #1; // wait for combinational logic to settle
        
                    // Expected value
%000000             if (LEFT_RIGHT == 0)
 001000                 expected_data = i_data << i_shift_number;
                    else
%000000                 expected_data = i_data >> i_shift_number;
        
                    // Compare DUT vs expected
%000000             if (o_data === expected_data) begin
 001000                 pass_count++;
 001000                 $display("Test %0d: PASS | data=%h | shift=%0d | out=%h",
 001000                          i, i_data, i_shift_number, o_data);
%000000             end else begin
%000000                 fail_count++;
%000000                 $display("Test %0d: FAIL | data=%h | shift=%0d | DUT=%h | EXP=%h",
%000000                          i, i_data, i_shift_number, o_data, expected_data);
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
        
