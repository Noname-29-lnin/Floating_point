`timescale 1ns/1ps

module tb_UART_mem();

    // -------------------------------------------------
    // Parameters
    // -------------------------------------------------
    localparam SIZE_DATA_I  = 8;
    localparam SIZE_DATA_O  = 32;
    localparam SIZE_DEPTH   = 8;

    // -------------------------------------------------
    // DUT signals
    // -------------------------------------------------
    logic                    i_clk;
    logic                    i_rst_n;
    // logic                    i_stick;
    logic                    i_wr_en;
    logic [SIZE_DATA_I-1:0]  i_fifo_data;

    logic                    o_done_a;
    logic [SIZE_DATA_O-1:0]  o_data_a;

    logic                    o_done_b;
    logic [SIZE_DATA_O-1:0]  o_data_b;

    // -------------------------------------------------
    // DUT instance
    // -------------------------------------------------
    // UART_baud_generator #(
    //     .SIZE_BAUD          (24) // 3byte
    //     // parameter BAUDRATE_VALUE = 325
    // ) UART_BAUD_GEN_UNIT (
    //     .i_clk              (i_clk), // clock for CPU
    //     .i_rst_n            (i_rst_n), // active low reset
    //     .i_baud_rate        (24'h1),
    //     .o_stick            (i_stick)  // baud rate signal
    // );
    UART_mem #(
        .SIZE_DATA_I  (SIZE_DATA_I),
        .SIZE_DATA_O  (SIZE_DATA_O),
        .SIZE_DEPTH   (SIZE_DEPTH)
    ) DUT (
        .i_clk       (i_clk),
        .i_rst_n     (i_rst_n),
        .i_stick     (i_stick),
        .i_wr_en     (i_wr_en),
        .i_fifo_data (i_fifo_data),

        .o_done_a    (o_done_a),
        .o_data_a    (o_data_a),
        .o_done_b    (o_done_b),
        .o_data_b    (o_data_b)
    );

    // -------------------------------------------------
    // Clock
    // -------------------------------------------------
    always #5 i_clk = ~i_clk;

    // -------------------------------------------------
    // Task ghi 1 byte
    // -------------------------------------------------
    task write_byte(input [7:0] data);
    begin
        @(posedge i_clk);
        i_fifo_data = data;
        i_wr_en     = 1;
        @(posedge i_clk);
        i_wr_en     = 0;
        #100;
    end
    endtask

    // -------------------------------------------------
    // Initial
    // -------------------------------------------------
    initial begin
        // Khởi tạo
        i_clk       = 0;
        i_rst_n     = 0;
        i_wr_en     = 0;
        i_fifo_data = 8'h00;

        // Reset
        repeat (3) @(posedge i_clk);
        i_rst_n = 1;

        // -----------------------------------------------------
        // Ghi 8 byte (2 word 32-bit)
        // -----------------------------------------------------
        $display("---- START WRITING BYTE ----");

        write_byte(8'h11);
        write_byte(8'h22);
        write_byte(8'h33);
        write_byte(8'h44);     // ➜ đủ 4 byte → o_data_a valid

        write_byte(8'hAA);
        write_byte(8'hBB);
        write_byte(8'hCC);
        write_byte(8'hDD);     // ➜ đủ 4 byte → o_data_b valid

        // -----------------------------------------------------
        // Chờ hoàn tất xử lý
        // -----------------------------------------------------
        repeat (10) @(posedge i_clk);

        $display("---- SIM DONE ----");
        $finish;
    end

    // -------------------------------------------------
    // Monitor kết quả khi done
    // -------------------------------------------------
    // always @(posedge i_clk) begin
    //     if (o_done_a)
    //         $display("[%0t] o_done_a = 1, o_data_a = 0x%8h",
    //                  $time, o_data_a);

    //     if (o_done_b)
    //         $display("[%0t] o_done_b = 1, o_data_b = 0x%8h",
    //                  $time, o_data_b);
    // end

endmodule
