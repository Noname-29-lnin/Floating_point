`timescale 1ns/1ps

module tb_UART_Rx_Data();

parameter SIZE_DATA     = 8;
parameter SIZE_DEPTH    = 4;
parameter SIZE_DATA_O   = 32;
parameter TX_PATH_A     = "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/Data_A.txt";
parameter TX_PATH_B     = "/home/noname/Documents/project_tiny/Floating_point/Verision2/03_verif/Imple/UART/RX_DATA/Data_B.txt";

logic           i_clk;
logic           i_rst_n;
logic           i_stick;
logic           i_sel_data;
logic           i_tx_en;
logic           o_tx_data;
logic           o_tx_done;
logic [31:0]    o_data_a, o_data_b;
logic           o_done_a, o_done_b;
logic           o_rx_done;

initial begin
    i_clk = 1'b0;
    forever begin
        #10 i_clk = ~i_clk;
    end
end

UART_baud_generator #(
    .SIZE_BAUD          (24) // 3byte
    // parameter BAUDRATE_VALUE = 325
) UART_BND (
    .i_clk              (i_clk), // clock for CPU
    .i_rst_n            (i_rst_n), // active low reset
    .i_baud_rate        (24'd1),
    .o_stick            (i_stick) // baud rate signal
);

UART_Tx_Test #(
    .SIZE_DATA          (SIZE_DATA),
    .SIZE_DEPTH         (4),
    .TX_PATH_A          (TX_PATH_A),
    .TX_PATH_B          (TX_PATH_B),
    .OVER_SAMPLE        (16) // oversampling
) UART_TX_TEST (
    .i_clk              (i_clk), // clock for CPU
    .i_rst_n            (i_rst_n), // active low reset
    .i_stick            (i_stick), // baud rate signal
    .i_sel_data         (i_sel_data),
    .i_tx_en            (i_tx_en), // start signal
    .o_tx_data          (o_tx_data), // serial data output 
    .o_tx_done          (o_tx_done)  // end signal
);

UART_Rx_Data #(
    .SIZE_DATA_I        (SIZE_DATA),
    .SIZE_DATA_O        (SIZE_DATA_O) 
) UART_RX_DATA (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_stick        (i_stick),
    .i_rx_en        (i_tx_en),
    .i_rx_data      (o_tx_data),
    .o_data_a       (o_data_a),
    .o_done_a       (o_done_a),
    .o_data_b       (o_data_b),
    .o_done_b       (o_done_b),
    .o_rx_done      (o_rx_done)
);

initial begin
    i_rst_n = 1'b0;
    i_sel_data = 0;
    i_tx_en = 0;
    #100;
    i_rst_n = 1'b1;
    #100;
    i_sel_data = 0;
    i_tx_en = 1;
    @(posedge i_clk);
    i_tx_en = 0;
    // #10000;
    @(posedge o_done_a);
    @(posedge i_clk);
    // i_sel_data = 1;
    // i_tx_en = 1;
    // @(posedge i_clk);
    // i_tx_en = 0;
    #1000;
    $finish;
end

endmodule
