`timescale 1ns/1ps

module tb_UART_Tx_Data();

parameter SIZE_DATA_I       = 32;
parameter SIZE_DATA_O       = 8 ;

logic i_clk;
logic i_rst_n;
logic o_stick;
logic i_tx_en;
logic [SIZE_DATA_I-1:0] i_data;
logic                   o_tx_data;
logic                   o_tx_done;

UART_baud_generator #(
    .SIZE_BAUD          (24) // 3byte
    // parameter BAUDRATE_VALUE = 325
) UART_BAUD_GEN_UNIT (
    .i_clk              (i_clk), // clock for CPU
    .i_rst_n            (i_rst_n), // active low reset
    .i_baud_rate        (24'h1),
    .o_stick            (o_stick)  // baud rate signal
);

UART_Tx_Data #(
    .SIZE_DATA_I        (SIZE_DATA_I),
    .SIZE_DATA_O        (SIZE_DATA_O) 
) DUT (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_stick            (o_stick),
    .i_tx_en            (i_tx_en),
    .i_data             (i_data),    
    .o_tx_data          (o_tx_data), 
    .o_tx_done          (o_tx_done) 
);

initial begin
    i_clk = 1'b0;
    forever begin
        #5 i_clk = ~i_clk;
    end
end
// initial begin
//     $dumpfile("tb_UART_Tx_Data.vcd");
//     $dumpvars(0, tb_UART_Tx_Data);
// end
initial begin
    i_rst_n = 1'b0;
    i_tx_en = 1'b0;
    i_data  = '0;
    #100;
    i_rst_n = 1'b1;
    #100;
    @(posedge i_clk);
    i_tx_en = 1'b1;
    i_data = 32'haabbccdd;
    @(posedge i_clk);
    i_tx_en = 1'b0;
    #30000;
    $finish;
end

endmodule
