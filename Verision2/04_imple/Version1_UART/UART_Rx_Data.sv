module UART_Rx_Data #(
    parameter SIZE_DATA_I       = 8     ,
    parameter SIZE_DATA_O       = 32    
)(
    input logic                             i_clk       ,
    input logic                             i_rst_n     ,
    input logic                             i_stick     ,

    input logic                             i_rx_en     ,
    input logic                             i_rx_data   ,

    output logic [SIZE_DATA_O-1:0]          o_data_a    ,
    output logic                            o_done_a    ,

    output logic [SIZE_DATA_O-1:0]          o_data_b    ,
    output logic                            o_done_b    ,

    output logic                            o_rx_done    
);

logic w_wr_fifo_mem;
logic [SIZE_DATA_I-1:0] w_data_fifo_mem;

UART_Rx #(
    .SIZE_DATA          (SIZE_DATA_I),
    .OVER_SAMPLE        (16),
    .MID_SAMPLE         (8)
) UART_RX_UNIT (
    .i_clk              (i_clk), // clock for CPU
    .i_rst_n            (i_rst_n), // active low reset
    .i_stick            (i_stick), // baud rate signal
    .i_rx_en            (i_rx_en), // enable signal for receiver
    .i_fifo_full        (1'b0), // FIFO full signal
    .i_rx_data          (i_rx_data), // serial data to be received
    .o_rx_data          (w_data_fifo_mem), // data to be received parallel
    .o_rx_done          (w_wr_fifo_mem)  // end signal
);

UART_mem #(
    .SIZE_DATA_I        (SIZE_DATA_I),
    .SIZE_DATA_O        (SIZE_DATA_O),
    .SIZE_DEPTH         (16) 
) UART_MEM_UNIT (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_stick            (i_stick),
    .i_wr_en            (w_wr_fifo_mem),
    .i_fifo_data        (w_data_fifo_mem),
    .o_done_a           (o_done_a),
    .o_data_a           (o_data_a),
    .o_done_b           (o_done_b),
    .o_data_b           (o_data_b) 
);

UART_detect_done UART_DETECT_DONE (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_en_a             (o_done_a),
    .i_en_b             (o_done_b),
    .o_done             (o_rx_done) 
);

endmodule
