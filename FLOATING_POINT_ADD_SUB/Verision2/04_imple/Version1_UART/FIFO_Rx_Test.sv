module FIFO_Rx_Test #(
    parameter SIZE_DATA     = 8     ,
    parameter SIZE_DEPTH    = 4     ,
    parameter RX_PATH       = "/home/noname/Document/project_tiny/Floating_point"      
)(
    input logic                             i_clk       ,
    input logic                             i_rst_n     ,
    input logic                             i_wr_en     ,
    input logic [SIZE_DATA-1:0]             i_data      ,
    output logic                            o_done       
);

localparam SIZE_ADDR = $clog2(SIZE_DEPTH);
logic [SIZE_ADDR-1:0] ptr_wr;
logic [SIZE_ADDR-1:0] ptr_wr_n;
logic w_enable;
logic w_update;

UART_SS_detect_start ENABLE_FIFO_WORK(
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_start        (i_wr_en),
    .i_done         (~o_done),
    .o_w_start      (w_enable) 
);
assign w_update = w_enable & i_wr_en;
assign ptr_wr_n = w_update ? (ptr_wr + 1'b1) : ptr_wr;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_point
    if(~i_rst_n) begin
        ptr_wr <= '0;
    end else begin
        if (w_update) begin
            ptr_wr <= ptr_wr_n;
        end
    end
end

logic [SIZE_DATA-1:0] ram [0:SIZE_DEPTH-1];
always_ff @(posedge i_clk) begin : proc_fifo_write
    if(w_update)
        ram[ptr_wr]     <= i_data;
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_done
    if(~i_rst_n)
        o_done          <= 1'b0;
    else 
        o_done          <= ptr_wr[0] & ptr_wr[1];
end

final begin
    if (RX_PATH != "")begin
        $display("Dumping memory contents to %s", RX_PATH);
        $writememh(RX_PATH, ram);
    end
    end

endmodule
