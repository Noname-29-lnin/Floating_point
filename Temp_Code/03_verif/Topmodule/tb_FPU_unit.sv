`timescale 1ns/1ps

module tb_FPU_unit();

    parameter NUM_OP = 1;

    logic                   i_clk;
    logic                   i_rst_n;
    logic [NUM_OP-1:0]      i_fpu_op;
    logic [31:0]            i_floating_a;
    logic [31:0]            i_floating_b;
    logic [31:0]            o_floating_result;

    // Clock generation: 10ns period (100MHz)
    initial i_clk = 0;
    always #5 i_clk = ~i_clk;

    // DUT
    FPU_unit #(
        .NUM_OP (NUM_OP)
    ) dut (
        .i_fpu_op          (i_fpu_op),
        .i_floating_a      (i_floating_a),
        .i_floating_b      (i_floating_b),
        .o_floating_result (o_floating_result)
    );

    initial begin
        $dumpfile("tb_FPU_unit.vcd");
        $dumpvars(0, tb_FPU_unit);
    end

    // Task: convert real to IEEE-754 single precision (for convenience)
    function automatic [31:0] real_to_float(input real r);
        return $realtobits(r);
    endfunction

    // Task: convert IEEE-754 back to real
    function automatic real float_to_real(input [31:0] f);
        return $bitstoreal(f);
    endfunction

    // Stimulus
    initial begin
        i_rst_n = 0;
        i_fpu_op = 0;
        i_floating_a = 0;
        i_floating_b = 0;
        #20;
        i_rst_n = 1;

        // === Test 1: Cộng ===
        @(posedge i_clk);
        i_fpu_op = 0;  // Add
        i_floating_a = 32'b01000000101100000000000000000000;
        i_floating_b = 32'b01000000000110011001100110011010;

        @(posedge i_clk);
        $display("[%0t] ADD: 5.5 + 2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);

        // === Test 2: Trừ ===
        @(posedge i_clk);
        i_fpu_op = 1;  // Sub
        i_floating_a = real_to_float(10.0);
        i_floating_b = real_to_float(3.5);

        @(posedge i_clk);
        $display("[%0t] SUB: 10.0 - 3.5 = %f", $time, float_to_real(o_floating_result));

        // === Test 3: Số âm ===
        @(posedge i_clk);
        i_fpu_op = 0;
        i_floating_a = real_to_float(-4.5);
        i_floating_b = real_to_float(2.25);

        @(posedge i_clk);
        $display("[%0t] ADD: -4.5 + 2.25 = %f", $time, float_to_real(o_floating_result));

        // === Test 4: Trừ với số nhỏ ===
        @(posedge i_clk);
        i_fpu_op = 1;
        i_floating_a = real_to_float(0.125);
        i_floating_b = real_to_float(0.0625);

        @(posedge i_clk);
        $display("[%0t] SUB: 0.125 - 0.0625 = %f", $time, float_to_real(o_floating_result));

        #20;
        $finish;
    end

endmodule
