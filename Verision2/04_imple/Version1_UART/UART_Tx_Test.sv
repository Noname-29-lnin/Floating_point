module UART_Tx_Test #(
    parameter SIZE_DATA     = 8     ,
    parameter SIZE_DEPTH    = 4     ,
    parameter TX_PATH_A     = "/home/noname/Document/project_tiny/Floating_point",
    parameter TX_PATH_B     = "/home/noname/Document/project_tiny/Floating_point",
    parameter OVER_SAMPLE   = 16 // oversampling
)(
    input wire                      i_clk           , // clock for CPU
    input wire                      i_rst_n         , // active low reset
    input wire                      i_stick         , // baud rate signal
    input logic                     i_sel_data      ,
    input wire                      i_tx_en         , // start signal
    output logic                    o_tx_data       , // serial data output 
    output logic                    o_tx_done         // end signal
);

logic [SIZE_DATA-1:0] w_i_data;
logic w_done_tx;

FIFO_Tx_Test #(
    .SIZE_DATA     (SIZE_DATA),
    .SIZE_DEPTH    (SIZE_DEPTH),
    .TX_PATH_A     (TX_PATH_A),
    .TX_PATH_B     (TX_PATH_B)      
) FIFO_TEST (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_sel_data         (i_sel_data),
    .i_start            (i_tx_en),
    .i_rd_en            (w_done_tx),

    .o_data             (w_i_data),
    .o_done             (o_tx_done) 
);

UART_Tx #(
    .SIZE_DATA          (SIZE_DATA),
    .OVER_SAMPLE        (OVER_SAMPLE) // oversampling
) UART_TX_UNIT (
    .i_clk              (i_clk), // clock for CPU
    .i_rst_n            (i_rst_n), // active low reset
    .i_stick            (i_stick), // baud rate signal
    .i_tx_en            (i_tx_en), // start signal
    .i_fifo_empty       (1'b0), // FIFO empty signal
    .i_tx_data          (w_i_data), // data to be transmitted parallel
    .o_tx_serial        (o_tx_data), // serial data output 
    .o_tx_done          (w_done_tx)  // end signal
);

endmodule
