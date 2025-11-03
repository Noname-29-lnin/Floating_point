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
    // function automatic real float_to_real(input [31:0] f);
    //     // return $bitstoreal(f);
    //     logic f_sign = f[31];
    //     logic [7:0] f_exp = f[30:23];
    //     logic [22:0] f_man = f[22:0];
    //     begin
            
    //     end
    // endfunction
    function automatic shortreal float_to_real(input logic [31:0] f);
        return $bitstoshortreal(f);
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
        i_floating_b = 32'b01000000000011001100110011001101;

        @(posedge i_clk);
        $display("[%0t] ADD: 5.5 + 2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);

        // === Test 2: Trừ ===
        @(posedge i_clk);
        i_fpu_op = 1;  // Sub
        i_floating_a = 32'b01000000101100000000000000000000;
        i_floating_b = 32'b01000000000011001100110011001101;

        @(posedge i_clk);
        $display("[%0t] ADD: 5.5 - 2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);

       // === Test 1: Cộng ===
        @(posedge i_clk);
        i_fpu_op = 0;  // Add
        i_floating_a = 32'b01000000101100000000000000000000;
        i_floating_b = 32'b11000000000011001100110011001101;

        @(posedge i_clk);
        $display("[%0t] ADD: 5.5 + -2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);

        // === Test 2: Trừ ===
        @(posedge i_clk);
        i_fpu_op = 1;  // Sub
        i_floating_a = 32'b01000000101100000000000000000000;
        i_floating_b = 32'b11000000000011001100110011001101;

        @(posedge i_clk);
        $display("[%0t] ADD: 5.5 - -2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);

        // === Test 2: Trừ ===
        @(posedge i_clk);
        i_fpu_op = 0;  // Sub
        i_floating_a = 32'b11000000101100000000000000000000;
        i_floating_b = 32'b11000000000011001100110011001101;

        @(posedge i_clk);
        $display("[%0t] ADD: -5.5 + -2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);

        // === Test 2: Trừ ===
        @(posedge i_clk);
        i_fpu_op = 1;  // Sub
        i_floating_a = 32'b11000000101100000000000000000000;
        i_floating_b = 32'b11000000000011001100110011001101;

        @(posedge i_clk);
        $display("[%0t] ADD: -5.5 - -2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);

        // === Test 2: Trừ ===
        @(posedge i_clk);
        i_fpu_op = 1;  // Sub
        i_floating_a = $urandom_range(0, 2**31);
        i_floating_b = $urandom_range(0, 2**31);

        @(posedge i_clk);
        $display("[%0t] ADD: %h - %h = %f (%h)", $time, i_floating_a, i_floating_b, float_to_real(o_floating_result),o_floating_result);

        // === Test 2: Trừ ===
        @(posedge i_clk);
        i_fpu_op = 0;  // Sub
        i_floating_a = $urandom_range(0, 2**31);
        i_floating_b = $urandom_range(0, 2**31);

        @(posedge i_clk);
        $display("[%0t] ADD: %h %s %h = %f (%h)", $time, i_floating_a, (i_fpu_op == 0) ? "+" : "-", i_floating_b, float_to_real(o_floating_result),o_floating_result);

         @(posedge i_clk);
        i_fpu_op = 0;  // Sub
        i_floating_a = $urandom_range(0, 2**31);
        i_floating_b = $urandom_range(0, 2**31);

        @(posedge i_clk);
        $display("[%0t] ADD: %h(%f) %s %h(%f) = %f (%h)", $time, i_floating_a, float_to_real(i_floating_a), (i_fpu_op == 0) ? "+" : "-", i_floating_b, float_to_real(i_floating_b), float_to_real(o_floating_result),o_floating_result);
        
        @(posedge i_clk);
        i_fpu_op = 0;  // Sub
        i_floating_a = $urandom_range(0, 2**31);
        i_floating_b = $urandom_range(0, 2**31);

        @(posedge i_clk);
        $display("[%0t] ADD: %h(%f) %s %h(%f) = %f (%h)", $time, i_floating_a, float_to_real(i_floating_a), (i_fpu_op == 0) ? "+" : "-", i_floating_b, float_to_real(i_floating_b), float_to_real(o_floating_result),o_floating_result);

        @(posedge i_clk);
        i_fpu_op = 0;  // Sub
        i_floating_a = 32'b11000000101100000000000000000000;
        i_floating_b = 32'b11000000000011001100110011001101;

        @(posedge i_clk);
        $display("[%0t] ADD: %h(%f) %s %h(%f) = %f (%h)", $time, i_floating_a, float_to_real(i_floating_a), (i_fpu_op == 0) ? "+" : "-", i_floating_b, float_to_real(i_floating_b), float_to_real(o_floating_result),o_floating_result);

        @(posedge i_clk);
        i_fpu_op = 1;  // Sub
        i_floating_a = 32'b11000000101100000000000000000000;
        i_floating_b = 32'b11000000000011001100110011001101;

        @(posedge i_clk);
        $display("[%0t] ADD: %h(%f) %s %h(%f) = %f (%h)", $time, i_floating_a, float_to_real(i_floating_a), (i_fpu_op == 0) ? "+" : "-", i_floating_b, float_to_real(i_floating_b), float_to_real(o_floating_result),o_floating_result);

        @(posedge i_clk);
        i_fpu_op = 1;  // Sub
        i_floating_a = 32'h7fc00000;
        i_floating_b = 32'h7f800000;

        @(posedge i_clk);
        $display("[%0t] ADD: %h(%f) %s %h(%f) = %f (%h)", $time, i_floating_a, float_to_real(i_floating_a), (i_fpu_op == 0) ? "+" : "-", i_floating_b, float_to_real(i_floating_b), float_to_real(o_floating_result),o_floating_result);

        @(posedge i_clk);
        i_fpu_op = 1;  // Sub
        i_floating_a = 32'hff800000;
        i_floating_b = 32'h7f800000;

        @(posedge i_clk);
        $display("[%0t] ADD: %h(%f) %s %h(%f) = %f (%h)", $time, i_floating_a, float_to_real(i_floating_a), (i_fpu_op == 0) ? "+" : "-", i_floating_b, float_to_real(i_floating_b), float_to_real(o_floating_result),o_floating_result);

        #20;
        $finish;
    end

always @(dut.ROUNDING_UNIT.w_guard_bit or 
         dut.ROUNDING_UNIT.w_round_bit or 
         dut.ROUNDING_UNIT.w_sticky_bit) begin
    $display("G = %b, R = %b, S = %b", 
             dut.ROUNDING_UNIT.w_guard_bit, 
             dut.ROUNDING_UNIT.w_round_bit, 
             dut.ROUNDING_UNIT.w_sticky_bit);
end


endmodule
