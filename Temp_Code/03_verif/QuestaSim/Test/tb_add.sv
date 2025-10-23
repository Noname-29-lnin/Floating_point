`timescale 1ns/1ps

module tb_add();

    // DUT (Device Under Test) signals
    logic a, b, c_i;
    logic s, c_o;

    // Expected outputs
    logic exp_s, exp_c_o;

    // Instantiate DUT
    add DUT (
        .a(a),
        .b(b),
        .c_i(c_i),
        .s(s),
        .c_o(c_o)
    );

    // Task để kiểm tra giá trị
    task check_result;
        input logic a_in, b_in, c_in;
        begin
            exp_s    = a_in ^ b_in ^ c_in;
            exp_c_o  = (a_in & b_in) | (a_in & c_in) | (b_in & c_in);

            if ((s === exp_s) && (c_o === exp_c_o))
                $display("PASS: a=%0b b=%0b c_i=%0b -> s=%0b c_o=%0b",
                         a_in, b_in, c_in, s, c_o);
            else
                $display("FAIL: a=%0b b=%0b c_i=%0b -> s=%0b (exp=%0b) c_o=%0b (exp=%0b)",
                         a_in, b_in, c_in, s, exp_s, c_o, exp_c_o);
        end
    endtask

    // Test sequence
    initial begin
        $display("===== Start Simulation =====");
        $display(" a  b  c_i | s  c_o ");
        $display("----------------------------");

        // Test all possible combinations
        for (int i = 0; i < 8; i++) begin
            {a, b, c_i} = i[2:0];
            #1; // nhỏ để DUT cập nhật
            check_result(a, b, c_i);
        end

        $display("===== Simulation Finished =====");
        $finish;
    end

endmodule
