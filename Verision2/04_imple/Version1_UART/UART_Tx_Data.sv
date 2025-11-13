module UART_Tx_Data #(
    parameter SIZE_DATA_I       = 32    ,
    parameter SIZE_DATA_O       = 8     
)(
    input logic                         i_clk           ,
    input logic                         i_rst_n         ,
    input logic                         i_stick         ,

    input logic                         i_tx_en         ,
    input logic [SIZE_DATA_I-1:0]       i_data          ,    

    output logic                        o_tx_data       , 
    output logic                        o_tx_done        
);

logic [SIZE_DATA_O-1:0] mem [0: 3];
logic [1:0] ptr_rd;
logic [1:0] ptr_rd_n;
logic w_tx_done;

always_ff @( posedge i_clk or negedge i_rst_n ) begin
    if(~i_rst_n) begin
        mem[0]  <= '0;
        mem[1]  <= '0;
        mem[2]  <= '0;
        mem[3]  <= '0;
    end else begin
        if(i_tx_en) begin
            mem[0]  <= i_data[7:0];
            mem[1]  <= i_data[15:8];
            mem[2]  <= i_data[23:16];
            mem[3]  <= i_data[31:24];
        end
    end
end

UART_Tx #(
    .SIZE_DATA          (SIZE_DATA_O),
    .OVER_SAMPLE        (16) // oversampling
) UART_TX_UNIT (
    .i_clk              (i_clk), // clock for CPU
    .i_rst_n            (i_rst_n), // active low reset
    .i_stick            (i_stick), // baud rate signal
    .i_tx_en            (i_tx_en | w_tx_done), // start signal
    .i_fifo_empty       (1'b0), // FIFO empty signal
    .i_tx_data          (mem[ptr_rd]), // data to be transmitted parallel
    .o_tx_serial        (o_tx_data), // serial data output 
    .o_tx_done          (w_tx_done)  // end signal
);

assign ptr_rd_n = w_tx_done ? ptr_rd + 1'b1: ptr_rd;
always_ff @( posedge i_clk or negedge i_rst_n ) begin 
    if(~i_rst_n) 
        ptr_rd  <= '0;
    else
        ptr_rd  <= ptr_rd_n;
end

always_ff @( posedge i_clk or negedge i_rst_n ) begin 
    if(~i_rst_n) 
        o_tx_done  <= '0;
    else
        o_tx_done  <= ptr_rd[1] & ptr_rd[0];
end

endmodule
