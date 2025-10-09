`timescale 1ns/1ps

module tb_SHF_unit();

    // ---------------- PARAMETER ----------------
    parameter LEFT_RIGHT = 0;     // 0: shift left, 1: shift right
    parameter SIZE_DATA  = 24;
    parameter SIZE_SHIFT = 5;
    parameter NUM_TEST   = 500;

    // ---------------- SIGNAL ----------------
    logic [SIZE_SHIFT-1:0] i_shift_number;
    logic [SIZE_DATA-1:0]  i_data;
    logic [SIZE_DATA-1:0]  o_data;
    logic [SIZE_DATA-1:0]  expected_data;

    integer i;
    integer pass_count = 0;
    integer fail_count = 0;

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
    initial begin
        $display("============================================");
        if (LEFT_RIGHT == 0)
            $display(">>> TEST SHIFT LEFT UNIT <<<");
        else
            $display(">>> TEST SHIFT RIGHT UNIT <<<");
        $display("============================================");

        // Run NUM_TEST times
        for (i = 0; i < NUM_TEST; i++) begin
            // Random inputs
            i_data         = $urandom_range(0, 2**SIZE_DATA-1);
            i_shift_number = $urandom_range(0, SIZE_DATA-1); // shift 0→23

            #1; // wait for combinational logic to settle

            // Expected value
            if (LEFT_RIGHT == 0)
                expected_data = i_data << i_shift_number;
            else
                expected_data = i_data >> i_shift_number;

            // Compare DUT vs expected
            if (o_data === expected_data) begin
                pass_count++;
                $display("Test %0d: PASS | data=%h | shift=%0d | out=%h",
                         i, i_data, i_shift_number, o_data);
            end else begin
                fail_count++;
                $display("Test %0d: FAIL | data=%h | shift=%0d | DUT=%h | EXP=%h",
                         i, i_data, i_shift_number, o_data, expected_data);
            end
        end

        // Summary
        $display("============================================");
        $display("Total Tests : %0d", NUM_TEST);
        $display("PASS         : %0d", pass_count);
        $display("FAIL         : %0d", fail_count);
        $display("============================================");

        if (fail_count == 0)
            $display("✅ ALL TESTS PASSED!");
        else
            $display("❌ SOME TESTS FAILED!");

        $finish;
    end

endmodule
