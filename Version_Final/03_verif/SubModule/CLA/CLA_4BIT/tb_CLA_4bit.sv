`timescale 1ns/1ps

module tb_CLA_4bit();

logic i_clk, i_rst_n;
logic [3:0]     a;
logic [3:0]     b;
logic           cin;
logic [3:0]     sum;
logic           o_p;
logic           o_g;
logic [4:0]     w_expect;

int test_count = 0;
int test_pass  = 0;

// ================= CLOCK ================= //
initial begin
    i_clk = 1'b0;
    forever #5 i_clk = ~i_clk;  // 100 MHz
end

// ================= DUMP WAVE ================= //
initial begin
    $dumpfile("tb_CLA_4bit.vcd");
    $dumpvars(0, tb_CLA_4bit);
end

// ================= DUT ================= //
CLA_4bit DUT (
    .a      (a),
    .b      (b),
    .cin    (cin),
    .sum    (sum),
    .o_p    (o_p),
    .o_g    (o_g)
);

// ================= FUNCTION: Golden Reference ================= //
function automatic [4:0] f_CLA_expected(
    input logic [3:0] f_a,
    input logic [3:0] f_b,
    input logic       f_cin
);
    begin
        f_CLA_expected = f_a + f_b + f_cin;
    end
endfunction

// ================= DISPLAY TASK ================= //
task automatic Display_Result(
    string t_type,
    input logic [3:0] t_a,
    input logic [3:0] t_b,
    input logic       t_cin,
    input logic [3:0] t_sum,
    input logic       t_pg,
    input logic       t_gg
);
    begin
        $display("[%s] a=%b (%0d), b=%b (%0d), cin=%b  =>  sum=%b (%0d), o_p=%b, o_g=%b",
                 t_type, t_a, t_a, t_b, t_b, t_cin, t_sum, t_sum, t_pg, t_gg);
    end
endtask

// ================= TEST SEQUENCE ================= //
initial begin
    i_rst_n = 0;
    a   = 0;
    b   = 0;
    cin = 0;
    #20;
    i_rst_n = 1;
    #10;

    $display("\n=== START CLA 4-bit TEST ===\n");

    // --- Test random cases ---
    repeat (100) begin
        @(posedge i_clk);
            a   = $urandom_range(0, 15);
            b   = $urandom_range(0, 15);
            cin = $urandom_range(0, 1);
            #1;
            w_expect = f_CLA_expected(a, b, cin);
            Display_Result("Random", a, b, cin, sum, o_p, o_g);
            $display("=> %s: expect=%05b, dut={o_g,sum}=%05b", (w_expect == {o_g,sum}) ? "PASS" : "FAIL", w_expect, {o_g,sum});
            test_count++;
            if (w_expect == {o_g,sum}) test_pass++;
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
