`timescale 1ns/1ps

module tb_LOPD_24bit();

    // ================= PARAMETER ================= //
    parameter SIZE_DATA = 24;
    parameter SIZE_LOPD = 5;   // log2(24) ≈ 5 bits

    // ================= SIGNALS ================= //
    logic                   i_clk, i_rst_n;
    logic [SIZE_DATA-1:0]   i_data;
    logic [SIZE_LOPD-1:0]   o_one_position;
    logic                   o_zero_flag;

    logic [SIZE_LOPD-1:0]   w_expect_pos;
    logic                   w_expect_zero;

    int test_count = 0;
    int test_pass  = 0;

    // ================= CLOCK ================= //
    initial begin
        i_clk = 1'b0;
        forever #5 i_clk = ~i_clk;   // 100 MHz clock
    end

    // ================= DUMP WAVE ================= //
    initial begin
        $dumpfile("tb_LOPD_24bit.vcd");
        $dumpvars(0, tb_LOPD_24bit);
    end

    // ================= DUT ================= //
    LOPD_24bit #(
        .SIZE_DATA (SIZE_DATA),
        .SIZE_LOPD (SIZE_LOPD)
    ) DUT (
        .i_data         (i_data),
        .o_one_position (o_one_position),
        .o_zero_flag    (o_zero_flag)
    );

    // ================= FUNCTION: GOLDEN MODEL ================= //
    function automatic void f_LOPD_expected(
        input  logic [SIZE_DATA-1:0]  f_data,
        output logic [SIZE_LOPD-1:0]  f_pos,
        output logic                  f_zero
    );
        int idx;
        begin
            if (f_data == 0) begin
                f_zero = 1;
                f_pos  = '0;
            end
            else begin
                f_zero = 0;
                idx = 0;
                for (int i = SIZE_DATA-1; i >= 0; i--) begin
                    if (f_data[i] == 1'b0)
                        idx++;
                    else
                        break;
                end
                f_pos = idx;
            end
        end
    endfunction

    // ================= DISPLAY TASK ================= //
    task automatic Display_Result(
        string t_type,
        input logic [SIZE_DATA-1:0] t_data,
        input logic [SIZE_LOPD-1:0] t_pos,
        input logic                 t_zero
    );
        begin
            $display("[%s] data=%b => o_pos=%0d, o_zero=%b",
                     t_type, t_data, t_pos, t_zero);
        end
    endtask

    // ================= TEST SEQUENCE ================= //
    initial begin
        i_rst_n = 0;
        i_data  = '0;
        #20;
        i_rst_n = 1;
        #10;

        $display("\n=== START 24-bit LEADING-ONE POSITION DETECTOR TEST ===\n");

        // ---------- Test Case 1: Zero input ----------
        @(posedge i_clk);
            i_data = 24'h000000;
            #1;
            f_LOPD_expected(i_data, w_expect_pos, w_expect_zero);
            Display_Result("Zero", i_data, o_one_position, o_zero_flag);
            $display("=> %s: expect(pos=%0d, zero=%b), dut(pos=%0d, zero=%b)",
                    ((w_expect_pos == o_one_position) && (w_expect_zero == o_zero_flag)) ? "PASS" : "FAIL",
                    w_expect_pos, w_expect_zero,
                    o_one_position, o_zero_flag);

            test_count++;
            if ((w_expect_pos == o_one_position) && (w_expect_zero == o_zero_flag)) test_pass++;

        // ---------- Test Case 2: MSB = 1 ----------
        @(posedge i_clk);
            i_data = 24'h800000;
            #1;
            f_LOPD_expected(i_data, w_expect_pos, w_expect_zero);
            Display_Result("MSB", i_data, o_one_position, o_zero_flag);
            $display("=> %s: expect(pos=%0d, zero=%b), dut(pos=%0d, zero=%b)",
                    ((w_expect_pos == o_one_position) && (w_expect_zero == o_zero_flag)) ? "PASS" : "FAIL",
                    w_expect_pos, w_expect_zero,
                    o_one_position, o_zero_flag);
            test_count++;
            if ((w_expect_pos == o_one_position) && (w_expect_zero == o_zero_flag)) test_pass++;

        // ---------- Test Case 3: LSB = 1 ----------
        @(posedge i_clk);
            i_data = 24'h000001;
            #1;
            f_LOPD_expected(i_data, w_expect_pos, w_expect_zero);
            Display_Result("LSB", i_data, o_one_position, o_zero_flag);
            $display("=> %s: expect(pos=%0d, zero=%b), dut(pos=%0d, zero=%b)",
                    ((w_expect_pos == o_one_position) && (w_expect_zero == o_zero_flag)) ? "PASS" : "FAIL",
                    w_expect_pos, w_expect_zero,
                    o_one_position, o_zero_flag);
            test_count++;
            if ((w_expect_pos == o_one_position) && (w_expect_zero == o_zero_flag)) test_pass++;

        // ---------- Randomized Test Cases ----------
        repeat (100) begin
            @(posedge i_clk);
                i_data = $urandom_range(0, (1 << SIZE_DATA) - 1);
                #1;
                f_LOPD_expected(i_data, w_expect_pos, w_expect_zero);
                Display_Result("Random", i_data, o_one_position, o_zero_flag);
                $display("=> %s: expect(pos=%0d, zero=%b), dut(pos=%0d, zero=%b)",
                    ((w_expect_pos == o_one_position) && (w_expect_zero == o_zero_flag)) ? "PASS" : "FAIL",
                    w_expect_pos, w_expect_zero,
                    o_one_position, o_zero_flag);
                test_count++;
                if ((w_expect_pos == o_one_position) && (w_expect_zero == o_zero_flag)) test_pass++;
        end

        // ---------- Summary ----------
        #10;
        $display("\n==================================");
        $display("========== TEST SUMMARY ==========");
        $display("Total test cases: %6d", test_count);
        $display("Passed          : %6d", test_pass);
        $display("Failed          : %6d", test_count - test_pass);
        $display("Pass rate       : %0.2f%%", (test_pass * 100.0) / test_count);
        $display("==================================\n");

        #50;
        $finish;
    end

endmodule
