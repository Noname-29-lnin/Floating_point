`timescale 1ns/1ps

module tb_UART_Rx_block();

logic           i_clk;
logic           i_rst_n;
logic           i_tx_en;
logic [7:0]     i_tx_data;
logic           o_tx_serial;
logic           o_tx_done;
logic           i_rx_en;
logic [31:0]    o_rx_data_a;
logic [31:0]    o_rx_data_b;
logic           o_rx_done;

UART_Tx_block #(
    .SIZE_DATA          (8),
    .BAUDRATE_VALUE     (325)
) UART_TX (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_tx_en            (i_tx_en),
    .i_tx_data          (i_tx_data),
    .o_tx_serial        (o_tx_serial),
    .o_tx_done          (o_tx_done)
);

UART_Rx_block #(
    .SIZE_DATA          (32)
) UART_RX (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_rx_en            (i_rx_en),
    .i_rx_data          (o_tx_serial),

    .o_data_a           (o_rx_data_a),
    .o_data_b           (o_rx_data_b),
    .o_done             (o_rx_done) 
);

initial begin
    i_clk = 1'b0;
    forever begin
        #5 i_clk = ~i_clk;
    end
end

initial begin
    $dumpfile("tb_UART_Rx_block.vcd");
    $dumpvars(0, tb_UART_Rx_block);
end
task automatic Trans_Value(
    input logic [31:0]  t_i_data
);
    begin
        @(posedge i_clk);
            i_tx_en = 1;
            i_rx_en = 1;
            i_tx_data = t_i_data[7:0];
        //     #500000;
            @(posedge o_tx_done);
        @(posedge i_clk);
            i_tx_en = 1;
            i_rx_en = 1;
            i_tx_data = t_i_data[15:8];
            @(posedge o_tx_done);
            // #50000;
        @(posedge i_clk);
            i_tx_en = 1;
            i_rx_en = 1;
            i_tx_data = t_i_data[23:16];
            // #50000;
            @(posedge o_tx_done);
        @(posedge i_clk);
            i_tx_en = 1;
            i_rx_en = 1;
            i_tx_data = t_i_data[31:24];
            @(posedge o_tx_done);
            // #50000;
        @(posedge i_clk);
            i_tx_en = 0;
            i_rx_en = 1;
            i_tx_data = 0;
    end
endtask //automatic
initial begin
    i_rst_n = 0;
    i_tx_en = 0;
    i_rx_en = 0;
    i_tx_data = 0;
    #100;
    i_rst_n = 1;
    #100;
    Trans_Value(32'hc0b0c0a6);
    Trans_Value(32'hc0b0c0a6);
    #10000;
    $display("Finsish");
    #100;
    $finish;
end

always @(posedge o_tx_done)
    $display("[%0t] TX done!", $time);


endmodule
