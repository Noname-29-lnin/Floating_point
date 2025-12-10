////////////////////////////////////////////////////////////////////////////
// Filename      : Tx_block.sv
// Description   : Transmitter block
// Author        : Noname_29_lnin
// BAUDRATE_VALUE = FREQ / (BAUDRATE * 16) - 1
////////////////////////////////////////////////////////////////////////////
module UART_Tx_block #(
    parameter SIZE_DATA      = 8,
    parameter BAUDRATE_VALUE = 325
)(
    input wire                  i_clk,
    input wire                  i_rst_n,
    input wire                  i_tx_en,
    input wire [SIZE_DATA-1:0]  i_tx_data,
    output reg                  o_tx_serial,
    output wire                 o_tx_done
);

wire w_stick;
UART_baud_generator #(
    .SIZE_BAUD      (24) // 3byte
) BAUD_GEN_UNIT (
    .i_clk          (i_clk), // clock for CPU
    .i_rst_n        (i_rst_n), // active low reset
    .i_baud_rate    (24'd1),
    .o_stick        (w_stick)  // baud rate signal
);

UART_Transmitter #(
    .SIZE_DATA (8),
    .OVER_SAMPLE (16) // oversampling
) Transmitter_unit (
    .i_clk        (i_clk), // clock for CPU
    .i_rst_n      (i_rst_n), // active low reset
    .i_stick      (w_stick), // baud rate signal
    .i_tx_en      (i_tx_en), // start signal
    .i_fifo_empty (1'b0), // FIFO empty signal
    .i_tx_data    (i_tx_data), // data to be transmitted parallel
    .o_tx_serial  (o_tx_serial), // serial data output 
    .o_tx_done    (o_tx_done),  // end signal
    .o_valid      ()
);

endmodule
