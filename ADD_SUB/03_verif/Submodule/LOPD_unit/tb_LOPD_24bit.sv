`timescale 1ns/1ps

module tb_LOPD_unit();

    // ====== Parameters ======
    parameter SIZE_DATA = 24;
    parameter SIZE_LOPD = $clog2(SIZE_DATA);

    // ====== Testbench signals ======
    logic [SIZE_DATA-1:0] i_data;
    logic [SIZE_LOPD-1:0] o_one_position;
    logic                 o_zero_flag;

    // ====== DUT instantiation ======
    LOPD_24bit #(
        .SIZE_DATA(SIZE_DATA),
        .SIZE_LOPD(SIZE_LOPD)
    ) dut (
        .i_data(i_data),
        .o_one_position(o_one_position),
        .o_zero_flag(o_zero_flag)
    );

    // ====== Clock (nếu module cần clock, không bắt buộc ở đây) ======
    logic i_clk;
    initial begin
        i_clk = 0;
        forever #5 i_clk = ~i_clk;
    end

    // ====== Dump waveform ======
    initial begin
        $dumpfile("tb_LOPD_unit.vcd");
        $dumpvars(0, tb_LOPD_unit);
    end

    // ====== Test stimulus ======
    initial begin
        $display("=== TEST START ===");

        // Case 1: All zeros
        i_data = 24'b0;
        #10;
        $display("Case 1: i_data=%b -> o_one_position=%0d, o_zero_flag=%b",
                  i_data, o_one_position, o_zero_flag);

        // Case 2: Only LSB = 1
        i_data = 24'b0000_0000_0000_0000_0000_0001;
        #10;
        $display("Case 2: i_data=%b -> o_one_position=%0d, o_zero_flag=%b",
                  i_data, o_one_position, o_zero_flag);

        // Case 3: Only MSB = 1
        i_data = 24'b1000_0000_0000_0000_0000_0000;
        #10;
        $display("Case 3: i_data=%b -> o_one_position=%0d, o_zero_flag=%b",
                  i_data, o_one_position, o_zero_flag);

        // Case 4: Random bit pattern
        i_data = 24'b0010_0100_0000_0000_0000_0000;
        #10;
        $display("Case 4: i_data=%b -> o_one_position=%0d, o_zero_flag=%b",
                  i_data, o_one_position, o_zero_flag);

        // Case 5: Random test loop
        repeat (10) begin
            i_data = $urandom_range(0, (1 << SIZE_DATA) - 1);
            #10;
            $display("Random: i_data=%b -> o_one_position=%0d, o_zero_flag=%b",
                      i_data, o_one_position, o_zero_flag);
        end

        $display("=== TEST END ===");
        #20;
        $finish;
    end

    // ====== Monitor for live tracking ======
    initial begin
        $monitor("t=%0t | i_data=%b | o_one_position=%0d | o_zero_flag=%b",
                  $time, i_data, o_one_position, o_zero_flag);
    end

endmodule
