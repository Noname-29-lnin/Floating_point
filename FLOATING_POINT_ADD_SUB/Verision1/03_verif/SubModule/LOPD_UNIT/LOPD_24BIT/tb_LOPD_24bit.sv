`timescale 1ns/1ps

module tb_LOPD_24bit();

    // ================= PARAMETERS ================= //
    parameter SIZE_DATA = 24;
    parameter SIZE_POS  = 5; // log2(24) = 5

    // ================= SIGNALS ================= //
    logic i_clk;
    logic [SIZE_DATA-1:0] i_data;
    logic [SIZE_POS-1:0]  o_pos_one;
    logic                 o_zero_flag;

    logic [SIZE_POS-1:0]  w_expect_pos;
    logic                 w_expect_zero;

    int test_count = 0;
    int test_pass  = 0;

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
    initial begin
        i_clk = 1'b0;
        forever begin
            #5 i_clk = ~i_clk;
        end
    end
    initial begin
        $dumpfile("tb_LOPD_24bit.vcd");
        $dumpvars(0, tb_LOPD_24bit);
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
        input logic [SIZE_POS-1:0]  exp_pos,
        input logic                 exp_zero,
        input logic [SIZE_POS-1:0]  dut_pos,
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
    int bit_pos;
    initial begin
        $display("\n=== START 8-bit LEADING ONE POSITION DETECTOR TEST ===\n");
        
        @(posedge i_clk);
        #1;
        i_data = 24'h0;
        @(negedge i_clk);
        f_find_LOPD(i_data, w_expect_pos, w_expect_zero);
        Check_Result("Zero", i_data, w_expect_pos, w_expect_zero, o_pos_one, o_zero_flag);

        // --- Deterministic test patterns (0 → 255) ---
        bit_pos = 1;
        repeat (24) begin
            @(posedge i_clk);
            #1;
            i_data  = bit_pos;
            @(negedge i_clk);
            f_find_LOPD(i_data, w_expect_pos, w_expect_zero);
            #1;
            Check_Result("Direcly", i_data, w_expect_pos, w_expect_zero, o_pos_one, o_zero_flag);
            bit_pos = bit_pos << 1'b1;
        end

        // --- Random test cases ---
        repeat (100) begin
            i_data = $urandom_range(0, 16777215);
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
