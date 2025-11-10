////////////////////////////////////////////////////////////////////////////
// Filename      : Rx_block.sv
// Description   : Receiver block
// Author        : Noname_29_lnin
// BAUDRATE_VALUE = FREQ / (BAUDRATE * 16) - 1
////////////////////////////////////////////////////////////////////////////
module UART_Rx_block #(
    parameter SIZE_DATA     = 32
)(
    input wire                      i_clk       ,
    input wire                      i_rst_n     ,
    input wire                      i_rx_en     ,
    input wire                      i_rx_data   ,

    output reg [SIZE_DATA-1:0]      o_data_a    ,
    output reg [SIZE_DATA-1:0]      o_data_b    ,
    output reg                      o_done             
);

wire o_rx_done;
logic [7:0] w_rx_data;

wire w_stick;
UART_baud_generator #(
    .SIZE_BAUD      (24) // 3byte
) BAUD_GEN_UNIT (
    .i_clk          (i_clk), // clock for CPU
    .i_rst_n        (i_rst_n), // active low reset
    .i_baud_rate    (24'd1),
    .o_stick        (w_stick)  // baud rate signal
);
logic w_en_a;
logic w_en_b;
// UART_fifo #(
//     .SIZE_DATA_I    (8),
//     .SIZE_DATA_O    (SIZE_DATA),
//     .SIZE_DEPTH     (8)
// ) FIFO_UNIT (
//     .i_clk          (i_clk), // clock for CPU
//     .i_rst_n        (i_rst_n), // active low reset
//     .i_wr_en        (o_rx_done), // Enable write
//     .i_data         (w_rx_data), // data to be sent
//     .o_en_a         (w_en_a),  
//     .o_data_a       (o_data_a), // data received
//     .o_en_b         (w_en_b),
//     .o_data_b       (o_data_b) 
// );
UART_mem #(
    .SIZE_DATA_I       (8),
    .SIZE_DATA_O       (32),
    .SIZE_DEPTH        (8)  
) UART_RX_MEM (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_stick        (w_stick),
    .i_wr_en        (o_rx_done),
    .i_fifo_data    (w_rx_data),

    .o_done_a       (w_en_a),
    .o_data_a       (o_data_a),
    .o_done_b       (w_en_b),
    .o_data_b       (o_data_b) 
);
UART_detect_done UART_DETECT_DONE (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_en_a         (w_en_a),
    .i_en_b         (w_en_b),
    .o_done         (o_done) 
);

// UART_Receiver #(
//     .SIZE_DATA      (8),
//     .OVER_SAMPLE    (16),
//     .MID_SAMPLE     (8)
// ) UART_RX (
//     .i_clk          (i_clk),        // clock for CPU
//     .i_rst_n        (i_rst_n),      // active low reset
//     .i_stick        (w_stick),      // baud rate signal
//     .i_rx_en        (i_rx_en),      // enable signal for receiver
//     .i_fifo_full    (1'b0),         // FIFO full signal
//     .i_rx_serial    (i_rx_data),    // serial data to be received
//     .i_valid        (),

//     .o_rx_data      (w_rx_data),    // data to be received parallel
//     .o_rx_done      (o_rx_done)     // end signal
// );
UART_Rx #(
    .SIZE_DATA      (8) ,
    .OVER_SAMPLING  (16),
    .MID_SAMPLING   (8) 
) UART_RX (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_stick        (w_stick),
    .i_rx_en        (i_rx_en),
    .i_rx_data      (i_rx_data),
    .o_rx_data      (w_rx_data),
    .o_rx_done      (o_rx_done) 
);

endmodule
