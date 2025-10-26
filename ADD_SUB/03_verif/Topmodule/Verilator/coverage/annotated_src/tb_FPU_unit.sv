//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module tb_FPU_unit();
        
            parameter NUM_OP = 1;
        
 000031     logic                   i_clk;
%000001     logic                   i_rst_n;
%000005     logic [NUM_OP-1:0]      i_fpu_op;
%000000     logic [31:0]            i_floating_a;
%000000     logic [31:0]            i_floating_b;
%000001     logic [31:0]            o_floating_result;
        
            // Clock generation: 10ns period (100MHz)
%000001     initial i_clk = 0;
 000031     always #5 i_clk = ~i_clk;
        
            // DUT
            FPU_unit #(
                .NUM_OP (NUM_OP)
            ) dut (
                .i_fpu_op          (i_fpu_op),
                .i_floating_a      (i_floating_a),
                .i_floating_b      (i_floating_b),
                .o_floating_result (o_floating_result)
            );
        
%000001     initial begin
%000001         $dumpfile("tb_FPU_unit.vcd");
%000001         $dumpvars(0, tb_FPU_unit);
            end
        
            // Task: convert real to IEEE-754 single precision (for convenience)
%000000     function automatic [31:0] real_to_float(input real r);
%000000         return $realtobits(r);
            endfunction
        
            // Task: convert IEEE-754 back to real
%000006     function automatic real float_to_real(input [31:0] f);
%000006         return $bitstoreal(f);
            endfunction
        
            // Stimulus
%000001     initial begin
%000001         i_rst_n = 0;
%000001         i_fpu_op = 0;
%000001         i_floating_a = 0;
%000001         i_floating_b = 0;
%000001         #20;
%000001         i_rst_n = 1;
        
                // === Test 1: Cộng ===
%000001         @(posedge i_clk);
%000001         i_fpu_op = 0;  // Add
%000001         i_floating_a = 32'b01000000101100000000000000000000;
%000001         i_floating_b = 32'b01000000000011001100110011001101;
        
%000001         @(posedge i_clk);
%000001         $display("[%0t] ADD: 5.5 + 2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);
        
                // === Test 2: Trừ ===
%000001         @(posedge i_clk);
%000001         i_fpu_op = 1;  // Sub
%000001         i_floating_a = 32'b01000000101100000000000000000000;
%000001         i_floating_b = 32'b01000000000011001100110011001101;
        
%000001         @(posedge i_clk);
%000001         $display("[%0t] ADD: 5.5 - 2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);
        
               // === Test 1: Cộng ===
%000001         @(posedge i_clk);
%000001         i_fpu_op = 0;  // Add
%000001         i_floating_a = 32'b01000000101100000000000000000000;
%000001         i_floating_b = 32'b11000000000011001100110011001101;
        
%000001         @(posedge i_clk);
%000001         $display("[%0t] ADD: 5.5 + -2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);
        
                // === Test 2: Trừ ===
%000001         @(posedge i_clk);
%000001         i_fpu_op = 1;  // Sub
%000001         i_floating_a = 32'b01000000101100000000000000000000;
%000001         i_floating_b = 32'b11000000000011001100110011001101;
        
%000001         @(posedge i_clk);
%000001         $display("[%0t] ADD: 5.5 - -2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);
        
                // === Test 2: Trừ ===
%000001         @(posedge i_clk);
%000001         i_fpu_op = 0;  // Sub
%000001         i_floating_a = 32'b11000000101100000000000000000000;
%000001         i_floating_b = 32'b11000000000011001100110011001101;
        
%000001         @(posedge i_clk);
%000001         $display("[%0t] ADD: -5.5 + -2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);
        
                // === Test 2: Trừ ===
%000001         @(posedge i_clk);
%000001         i_fpu_op = 1;  // Sub
%000001         i_floating_a = 32'b11000000101100000000000000000000;
%000001         i_floating_b = 32'b11000000000011001100110011001101;
        
%000001         @(posedge i_clk);
%000001         $display("[%0t] ADD: -5.5 - -2.2 = %f (%h)", $time, float_to_real(o_floating_result),o_floating_result);
        
%000001         #20;
%000001         $finish;
            end
        
        endmodule
        
