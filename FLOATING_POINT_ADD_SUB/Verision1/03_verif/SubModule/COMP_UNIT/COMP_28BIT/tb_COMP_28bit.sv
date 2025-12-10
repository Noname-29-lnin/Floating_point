`timescale 1ns/1ps

module tb_COMP_28bit();

    // ====== Signals ======
    logic i_clk, i_rst_n;
    logic [27:0] i_data_a;
    logic [27:0] i_data_b;
    logic        o_less;
    logic        w_expect;

    int test_count = 0;
    int test_pass  = 0;

    // ================= CLOCK ================= //
    initial begin
        i_clk = 1'b0;
        forever #5 i_clk = ~i_clk;  // 100 MHz clock
    end

    // ====== DUT ======
    COMP_28bit DUT (
        .i_data_a (i_data_a),
        .i_data_b (i_data_b),
        .o_less   (o_less)
    );

    // ================= DUMP WAVE ================= //
    initial begin
        $dumpfile("tb_COMP_28bit.vcd");
        $dumpvars(0, tb_COMP_28bit);
    end

    // ====== Expected Function ======
    function automatic logic f_expected_less(
        input logic [27:0] a,
        input logic [27:0] b
    );
        begin
            f_expected_less = (a < b);
        end
    endfunction

    // ====== Display Task ======
    task automatic Display_Result(
        string t_type,
        input logic [27:0] t_a,
        input logic [27:0] t_b,
        input logic        t_less
    );
        begin
            $display("[%s] a=%0d (%b), b=%0d (%b) => o_less=%b",
                t_type, t_a, t_a, t_b, t_b, t_less
            );
        end
    endtask

    // ====== TEST SEQUENCE ======
    initial begin
        $display("\n=== START 28-bit COMPARATOR TEST ===\n");
        i_data_a = 0;
        i_data_b = 0;

        // --- Random test cases ---
        repeat (100) begin
            @(posedge i_clk);
            i_data_a = $urandom_range(0, 2**28-1);
            i_data_b = $urandom_range(0, 2**28-1);
            #1;
            w_expect = f_expected_less(i_data_a, i_data_b);
            Display_Result("Random", i_data_a, i_data_b, o_less);
            $display("=> %s: expect=%b, dut=%b",
                     (w_expect == o_less) ? "PASS" : "FAIL",
                     w_expect, o_less);
            test_count++;
            if (w_expect == o_less) test_pass++;
        end

        // --- Summary ---
        $display("\n==================================");
        $display("========== TEST SUMMARY ==========");
        $display("Total test cases: %6d", test_count);
        $display("Passed          : %6d", test_pass);
        $display("Failed          : %6d", test_count - test_pass);
        $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / test_count);
        $display("==================================\n");

        #10;
        $finish;
    end

endmodule
