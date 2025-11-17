`timescale 1ns/1ps

module tb_LOPD_8bit();

    // ================= PARAMETERS ================= //
    parameter SIZE_DATA = 8;
    parameter SIZE_POS  = 3; // log2(8) = 3

    // ================= SIGNALS ================= //
    logic [SIZE_DATA-1:0] i_data;
    logic [SIZE_POS-1:0]  o_pos_one;
    logic                 o_zero_flag;

    logic [SIZE_POS-1:0]  w_expect_pos;
    logic                 w_expect_zero;

    int test_count = 0;
    int test_pass  = 0;

    // ================= DUT ================= //
    LOPD_8bit DUT (
        .i_data(i_data),
        .o_pos_one(o_pos_one),
        .o_zero_flag(o_zero_flag)
    );

    // ================= DUMP WAVE ================= //
    initial begin
        $dumpfile("tb_LOPD_8bit.vcd");
        $dumpvars(0, tb_LOPD_8bit);
    end

    // ================= FUNCTION: Reference Model ================= //
    function automatic void f_find_LOPD(
        input  logic [SIZE_DATA-1:0] f_i_data,
        output logic [SIZE_POS-1:0]  f_o_pos_one,
        output logic                 f_o_zero_flag
    );
        int pos;
        begin
            if (f_i_data == 0) begin
                f_o_pos_one   = 0;
                f_o_zero_flag = 1;
            end else begin
                // Find position of leading '1' from MSB → LSB
                for (pos = SIZE_DATA-1; pos >= 0; pos--) begin
                    if (f_i_data[pos]) begin
                        f_o_pos_one   = SIZE_DATA-1 - pos; // encode distance from MSB
                        f_o_zero_flag = 0;
                        break;
                    end
                end
            end
        end
    endfunction

    // ================= TASK: Display & Compare ================= //
    task automatic Check_Result(
        input string t_name,
        input logic [SIZE_DATA-1:0] t_data,
        input logic [SIZE_POS-1:0] exp_pos,
        input logic                 exp_zero,
        input logic [SIZE_POS-1:0] dut_pos,
        input logic                 dut_zero
    );
        string result;
        result = ((exp_pos == dut_pos) && (exp_zero == dut_zero)) ? "PASS" : "FAIL";
        $display("[%s] data=%b => expect(pos=%0d, zero=%b), dut(pos=%0d, zero=%b) => %s",
                 t_name, t_data, exp_pos, exp_zero, dut_pos, dut_zero, result);
        test_count++;
        if (result == "PASS") test_pass++;
    endtask

    // ================= TEST SEQUENCE ================= //
    initial begin
        $display("\n=== START 8-bit LEADING ONE POSITION DETECTOR TEST ===\n");

        // --- Deterministic test patterns (0 → 255) ---
        for (int i = 0; i < (1 << SIZE_DATA); i++) begin
            i_data = i[SIZE_DATA-1:0];
            #1;
            f_find_LOPD(i_data, w_expect_pos, w_expect_zero);
            Check_Result("Fixed", i_data, w_expect_pos, w_expect_zero, o_pos_one, o_zero_flag);
        end

        // --- Random test cases ---
        repeat (10) begin
            i_data = $urandom_range(0, (1 << SIZE_DATA) - 1);
            #1;
            f_find_LOPD(i_data, w_expect_pos, w_expect_zero);
            Check_Result("Random", i_data, w_expect_pos, w_expect_zero, o_pos_one, o_zero_flag);
        end

        // --- Summary ---
        #5;
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
