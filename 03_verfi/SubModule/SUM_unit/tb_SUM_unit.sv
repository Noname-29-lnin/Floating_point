`timescale 1ns/1ps

module tb_SUM_unit();

    // ---------------- PARAMETER ----------------
    parameter SIZE_DATA = 28;
    parameter NUM_TEST  = 500;

    // ---------------- SIGNAL ----------------
    logic                     i_carry;
    logic [SIZE_DATA-1:0]     i_data_a;
    logic [SIZE_DATA-1:0]     i_data_b;
    logic [SIZE_DATA-1:0]     o_sum;
    logic                     o_carry;

    logic [SIZE_DATA-1:0]     expected_sum;
    logic                     expected_carry;

    integer i;
    integer pass_count = 0;
    integer fail_count = 0;

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

    initial begin
        $dumpfile("tb_SUM_unit.vcd");
        $dumpvars(0, tb_SUM_unit);
    end

    // ---------------- TEST PROCESS ----------------
    initial begin
        $display("============================================");
        $display(">>> TEST SUM UNIT (%0d-bit) <<<", SIZE_DATA);
        $display("============================================");

        // Run NUM_TEST times
        for (i = 0; i < NUM_TEST; i++) begin
            // Random inputs
            i_data_a = $urandom_range(0, 2**SIZE_DATA - 1);
            i_data_b = $urandom_range(0, 2**SIZE_DATA - 1);
            i_carry  = $urandom_range(0, 1);

            #1; // wait for combinational logic to settle

            // Expected value (mô phỏng phép cộng thật)
            {expected_carry, expected_sum} = {1'b0, i_data_a} + {1'b0, i_data_b} + {{(SIZE_DATA-1){1'b0}}, i_carry};

            // Compare DUT vs expected
            if ((o_sum === expected_sum) && (o_carry === expected_carry)) begin
                pass_count++;
                $display("Test %0d: PASS | A=%h | B=%h | Cin=%b | SUM=%h | Cout=%b",
                         i, i_data_a, i_data_b, i_carry, o_sum, o_carry);
            end else begin
                fail_count++;
                $display("Test %0d: FAIL | A=%h | B=%h | Cin=%b | DUT_SUM=%h | EXP_SUM=%h | DUT_Cout=%b | EXP_Cout=%b",
                         i, i_data_a, i_data_b, i_carry,
                         o_sum, expected_sum, o_carry, expected_carry);
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
