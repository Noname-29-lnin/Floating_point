`timescale 1ns/1ps

module tb_CLA_28bit();

logic i_clk, i_rst_n;
logic [27:0]     i_data_a;
logic [27:0]     i_data_b;
logic           i_carry;
logic [27:0]     o_sum;
logic           o_carry;
logic [28:0]     w_expect;

int test_count = 0;
int test_pass  = 0;

// ================= CLOCK ================= //
initial begin
    i_clk = 1'b0;
    forever #5 i_clk = ~i_clk;  // 100 MHz
end

// ================= DUMP WAVE ================= //
initial begin
    $dumpfile("tb_CLA_28bit.vcd");
    $dumpvars(0, tb_CLA_28bit);
end

// ================= DUT ================= //
CLA_28bit DUT (
    .i_carry    (i_carry),
    .i_data_a   (i_data_a),
    .i_data_b   (i_data_b),
    .o_sum      (o_sum),
    .o_carry    (o_carry)
);

// ================= FUNCTION: Golden Reference ================= //
function automatic [28:0] f_CLA_expected(
    input logic [27:0] f_a,
    input logic [27:0] f_b,
    input logic       f_cin
);
    begin
        f_CLA_expected = f_a + f_b + f_cin;
    end
endfunction

// ================= DISPLAY TASK ================= //
task automatic Display_Result(
    string t_type,
    input logic [27:0] t_a,
    input logic [27:0] t_b,
    input logic       t_cin,
    input logic [27:0] t_sum,
    input logic       t_cout
);
    begin
        $display("[%s] a=%b (%0d), b=%b (%0d), cin=%b  =>  sum=%b (%0d), o_cout=%b",
                 t_type, t_a, t_a, t_b, t_b, t_cin, t_sum, t_sum, t_cout);
    end
endtask

// ================= TEST SEQUENCE ================= //
initial begin
    i_rst_n = 0;
    i_data_a = 0;
    i_data_b = 0;
    i_carry  = 0;
    #20;
    i_rst_n = 1;
    #10;

    $display("\n=== START CLA 4-bit TEST ===\n");

    @(posedge i_clk);
            i_data_a   = 28'h00;
            i_data_b   = 28'h00;
            i_carry    = 1'b1;
            #1;
            w_expect = f_CLA_expected(i_data_a, i_data_b, i_carry);
            Display_Result("Direcly", i_data_a, i_data_b, i_carry, o_sum, o_carry);
            $display("=> %s: expect=%05b, dut={o_g,sum}=%05b", (w_expect == {o_carry, o_sum}) ? "PASS" : "FAIL", w_expect, {o_carry, o_sum});
            test_count++;
            if (w_expect == {o_carry, o_sum}) test_pass++;

    @(posedge i_clk);
            i_data_a   = 28'hFF;
            i_data_b   = 28'h00;
            i_carry    = 1'b1;
            #1;
            w_expect = f_CLA_expected(i_data_a, i_data_b, i_carry);
            Display_Result("Direcly", i_data_a, i_data_b, i_carry, o_sum, o_carry);
            $display("=> %s: expect=%05b, dut={o_g,sum}=%05b", (w_expect == {o_carry, o_sum}) ? "PASS" : "FAIL", w_expect, {o_carry, o_sum});
            test_count++;
            if (w_expect == {o_carry, o_sum}) test_pass++;

    @(posedge i_clk);
            i_data_a   = 28'hFF;
            i_data_b   = 28'hFF;
            i_carry    = 1'b1;
            #1;
            w_expect = f_CLA_expected(i_data_a, i_data_b, i_carry);
            Display_Result("Direcly", i_data_a, i_data_b, i_carry, o_sum, o_carry);
            $display("=> %s: expect=%05b, dut={o_g,sum}=%05b", (w_expect == {o_carry, o_sum}) ? "PASS" : "FAIL", w_expect, {o_carry, o_sum});
            test_count++;
            if (w_expect == {o_carry, o_sum}) test_pass++;

    // --- Test random cases ---
    repeat (100) begin
        @(posedge i_clk);
            i_data_a   = $urandom_range(0, 2**28 - 1);
            i_data_b   = $urandom_range(0, 2**28 - 1);
            i_carry    = $urandom_range(0, 1);
            #1;
            w_expect = f_CLA_expected(i_data_a, i_data_b, i_carry);
            Display_Result("Random", i_data_a, i_data_b, i_carry, o_sum, o_carry);
            $display("=> %s: expect=%05b, dut={o_g,sum}=%05b", (w_expect == {o_carry, o_sum}) ? "PASS" : "FAIL", w_expect, {o_carry, o_sum});
            test_count++;
            if (w_expect == {o_carry, o_sum}) test_pass++;
    end

    // --- Summary ---
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
