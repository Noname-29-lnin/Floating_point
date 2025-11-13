module FIFO_Tx_Test #(
    parameter SIZE_DATA     = 8     ,
    parameter SIZE_DEPTH    = 4     ,
    parameter TX_PATH_A     = "/home/noname/Document/project_tiny/Floating_point",
    parameter TX_PATH_B     = "/home/noname/Document/project_tiny/Floating_point"      
)(
    input logic                             i_clk       ,
    input logic                             i_rst_n     ,
    input logic                             i_sel_data  ,
    input logic                             i_start     ,
    input logic                             i_rd_en     ,

    output logic [SIZE_DATA-1:0]            o_data      ,
    output logic                            o_done       
);

localparam SIZE_ADDR = $clog2(SIZE_DEPTH);
logic [SIZE_DATA-1:0] ram [0:SIZE_DEPTH-1];

// ? can't update value in the ram when change i_sel_data
initial begin
    if (i_sel_data == 1'b0) begin
        if (TX_PATH_A != "") begin
            $display("Initial load memory contents from %s", TX_PATH_A);
            $readmemh(TX_PATH_A, ram);
        end
    end else begin
        if (TX_PATH_B != "") begin
            $display("Initial load memory contents from %s", TX_PATH_B);
            $readmemh(TX_PATH_B, ram);
        end
    end
end

logic w_enable;
logic w_update;

UART_SS_detect_start ENABLE_FIFO_WORK(
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_start        (i_start),
    .i_done         (~o_done),
    .o_w_start      (w_enable) 
);

logic [SIZE_ADDR-1:0] ptr_rd;
logic [SIZE_ADDR-1:0] ptr_rd_n;

assign w_update = w_enable & i_rd_en;
assign ptr_rd_n = w_update ? (ptr_rd + 1'b1) : ptr_rd;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_point
    if(~i_rst_n) begin
        ptr_rd <= '0;
    end else begin
        if (w_update) begin
            ptr_rd <= ptr_rd_n;
        end
    end
end

always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_fifo_write
    if(~i_rst_n)
        o_data  <= '0;
    else begin
        o_data  <= ram[ptr_rd];
    end
end
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_done
    if(~i_rst_n)
        o_done          <= 1'b0;
    else 
        o_done          <= ptr_rd[0] & ptr_rd[1];
end

endmodule
