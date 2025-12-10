module UART_mem #(
    parameter SIZE_DATA_I       = 8 ,
    parameter SIZE_DATA_O       = 32,
    parameter SIZE_DEPTH        = 8  
)(
    input logic                     i_clk       ,
    input logic                     i_rst_n     ,
    input logic                     i_stick     ,
    input logic                     i_wr_en     ,
    input logic [SIZE_DATA_I-1:0]   i_fifo_data ,

    output logic                    o_done_a    ,
    output logic [SIZE_DATA_O-1:0]  o_data_a    ,
    output logic                    o_done_b    ,
    output logic [SIZE_DATA_O-1:0]  o_data_b     
);

localparam SIZE_ADDR = $clog2(SIZE_DEPTH);
logic [SIZE_ADDR-1:0] ptr_wr;
logic [SIZE_ADDR-1:0] ptr_wr_n;
logic w_update_a_n, w_update_b_n;

assign ptr_wr_n = ptr_wr + 1'b1;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : pointer_for_write
    if(~i_rst_n) begin
        ptr_wr  <= '0; 
    end else begin
        if(i_wr_en)
            ptr_wr      <= ptr_wr_n; 
    end
end

assign w_update_a_n = (ptr_wr == 3'b011);
assign w_update_b_n = (ptr_wr == 3'b111);

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_update_data_a_and_b
    if(~i_rst_n) begin
        o_done_a          <= '0;
        o_done_b          <= '0;
    end else begin
        if(i_stick)
            o_done_a          <= w_update_a_n;
        if(i_stick)
            o_done_b          <= w_update_b_n;
    end
end

logic [SIZE_DATA_I-1:0] mem_reg [SIZE_DEPTH-1:0];
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_memory
    if(~i_rst_n) begin
        mem_reg[0]  <= '0;
        mem_reg[1]  <= '0;
        mem_reg[2]  <= '0;
        mem_reg[3]  <= '0;
        mem_reg[4]  <= '0;
        mem_reg[5]  <= '0;
        mem_reg[6]  <= '0;
        mem_reg[7]  <= '0; 
    end else begin
        mem_reg[ptr_wr]     <= i_fifo_data; 
    end
end

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_fifo_read_data_a
    if(~i_rst_n) begin
        o_data_a        <= '0;
        o_data_b        <= '0;
    end else begin
        if(o_done_a)
            o_data_a    <= {mem_reg[3], mem_reg[2], mem_reg[1], mem_reg[0]};
        
        if(o_done_b)
            o_data_b    <= {mem_reg[7], mem_reg[6], mem_reg[5], mem_reg[4]};
    end
end

endmodule
