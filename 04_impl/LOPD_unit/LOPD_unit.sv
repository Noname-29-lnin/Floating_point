module LOPD_unit #(
    parameter SIZE_DATA     = 32 ,
    parameter SIZE_LOP      = 5
)(
    input logic                     i_clk   ,
    input logic                     i_rst_n ,
    input logic [SIZE_DATA-1:0]     i_addr  ,
    input logic [SIZE_DATA-1:0]     i_data  ,
    output logic [SIZE_DATA-1:0]    o_addr  ,
    output logic [SIZE_LOP-1:0]     o_one_position,
    output logic                    o_zero_flag    
);

logic [SIZE_DATA-1:0] w_i_addr, w_i_data;
logic [SIZE_DATA-1:0] w_o_addr, w_o_data;
logic [SIZE_LOP-1:0] w_one_position;
logic w_zero_flag;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : flipflop_proc
    if(~i_rst_n) begin
        w_i_addr        <= '0;
        w_i_data        <= '0;
        o_addr          <= '0;
        o_one_position  <= '0;
        o_zero_flag     <= '0;
    end else begin
        w_i_addr        <= i_addr;
        w_i_data        <= i_data;
        o_addr          <= w_o_addr;
        o_one_position  <= w_one_position;
        o_zero_flag     <= w_zero_flag;
    end
end

assign w_o_addr = w_i_addr;

generate
    if(SIZE_DATA == 4) begin
        LOPD_4bit DUT(
            .i_data         (w_i_data),
            .o_pos_one      (w_one_position),
            .o_zero_flag    (w_zero_flag)
        );
    end else if(SIZE_DATA == 8) begin
        LOPD_8bit DUT(
            .i_data         (w_i_data),
            .o_pos_one      (w_one_position),
            .o_zero_flag    (w_zero_flag)
        );
    end else if(SIZE_DATA == 16) begin
        LOPD_16bit DUT(
            .i_data         (w_i_data),
            .o_pos_one      (w_one_position),
            .o_zero_flag    (w_zero_flag)
        );
    end else begin
        LOPD_32bit DUT(
            .i_data         (w_i_data),
            .o_pos_one      (w_one_position),
            .o_zero_flag    (w_zero_flag)
        );
    end
endgenerate

endmodule
