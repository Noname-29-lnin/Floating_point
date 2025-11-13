module UART_Rx_Test #(
    parameter SIZE_DATA     = 8     ,
    parameter SIZE_DEPTH    = 4     ,
    parameter RX_PATH       = "/home/noname/Document/project_tiny/Floating_point",
    parameter OVER_SAMPLE   = 16,
    parameter MID_SAMPLE    = 8
)(
    input logic                         i_clk       , // clock for CPU
    input logic                         i_rst_n     , // active low reset
    input logic                         i_stick     , // baud rate signal
    input logic                         i_rx_en     , // enable signal for receiver
    input logic                         i_fifo_full , // FIFO full signal
    input logic                         i_rx_data , // serial data to be received

    output logic                        o_rx_done     // end signal
);

logic w_done_rx;
logic [SIZE_DATA-1:0] w_o_rx_data;

UART_Rx #(
    .SIZE_DATA          (SIZE_DATA),
    .OVER_SAMPLE        (OVER_SAMPLE),
    .MID_SAMPLE         (MID_SAMPLE)
) UART_RX_UNIT (
    .i_clk              (i_clk), // clock for CPU
    .i_rst_n            (i_rst_n), // active low reset
    .i_stick            (i_stick), // baud rate signal
    .i_rx_en            (i_rx_en), // enable signal for receiver
    .i_fifo_full        (1'b0), // FIFO full signal
    .i_rx_data          (i_rx_data), // serial data to be received

    .o_rx_data          (w_o_rx_data), // data to be received parallel
    .o_rx_done          (w_done_rx)  // end signal
);

FIFO_Rx_Test #(
    .SIZE_DATA          (SIZE_DATA),
    .SIZE_DEPTH         (SIZE_DEPTH),
    .RX_PATH            (RX_PATH)      
) FIFO_RX (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_wr_en            (w_done_rx),
    .i_data             (w_o_rx_data),
    .o_done             (o_rx_done) 
);

endmodule
