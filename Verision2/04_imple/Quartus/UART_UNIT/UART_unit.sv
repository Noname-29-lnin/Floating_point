module UART_unit(
    input logic                     i_clk       ,
    input logic [16:0]              SW          ,
    input logic [3:0]               BTN         ,          
    output logic [15:0]             LEDR        ,
    output logic [3:0]              LEDG         
);

parameter SIZE_DATA_I       = 8;
parameter SIZE_DATA_O       = 32;
logic i_rst_n;
assign i_rst_n = SW[9];
logic [31:0]    i_32_a;
logic [31:0]    i_32_b;
logic [31:0]    o_32_s;
logic w_stick;
logic [31:0] w_data_a, w_data_b;
logic [31:0] w_data_fpu;
logic [31:0] w_data_fpu_1;
logic w_rx_done;
logic w_tx_en_0, w_tx_en_1;


UART_baud_generator #(
    .SIZE_BAUD          (24) // 3byte
    // parameter BAUDRATE_VALUE = 325
) UART_BAUD_GEN (
    .i_clk              (i_clk), // clock for CPU
    .i_rst_n            (i_rst_n), // active low reset
    .i_baud_rate        (24'd396),
    .o_stick            (w_stick)  // baud rate signal
);

UART_Rx_Data #(
    .SIZE_DATA_I        (SIZE_DATA_I),
    .SIZE_DATA_O        (SIZE_DATA_O) 
) UART_RX_BLOCK (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_stick            (w_stick),
    .i_rx_en            (SW[1]),
    .i_rx_data          (),
    .o_data_a           (w_data_a),
    .o_done_a           (LEDG[0]),
    .o_data_b           (w_data_b),
    .o_done_b           (LEDG[1]),
    .o_rx_done          (w_rx_done) 
);
assign LEDG[2] = w_rx_done;

always_ff @( posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
        w_tx_en_0   <= '0;
        w_tx_en_1   <= '0;
    end else begin
        w_tx_en_0   <= w_rx_done;
        w_tx_en_1   <= w_tx_en_0;
    end
end

always_ff @( posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
        w_data_fpu_1    <= '0;
    end else begin
        if(w_tx_en_0) begin
            w_data_fpu_1 <= w_data_fpu;
        end
    end
end

FPU_unit #(
    .NUM_OP             (1)
) FPU_UNIT (
    .i_add_sub          (SW[0]),
    .i_32_a             (w_data_a),
    .i_32_b             (w_data_b),
    .o_32_s             (w_data_fpu),

    .o_ov_flag          (LEDR[7]),
    .o_un_flag          (LEDR[6]) 
);

UART_Tx_Data #(
    .SIZE_DATA_I       (SIZE_DATA_O),
    .SIZE_DATA_O       (SIZE_DATA_I) 
) UART_TX_BLOCK (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_stick            (w_stick),
    .i_tx_en            (w_tx_en_1),
    .i_data             (w_data_fpu_1),    
    .o_tx_data          (), 
    .o_tx_done          (LEDG[3]) 
);

endmodule
