module SHF_top #(
    parameter LEFT_RIGHT = 1, // 0: shift Left, 1: shift right
    parameter SIZE_DATA  = 24,
	 parameter SIZE_SHIFT = 5
)(
    input logic i_clk,
    input logic i_rst_n,
    input logic [SIZE_SHIFT-1:0]     i_shift_number  ,
    input logic [SIZE_DATA-1:0]      i_data          ,
    output logic [SIZE_DATA-1:0]     o_data           
);

logic [SIZE_SHIFT-1:0]     w_i_shift_number;
logic [SIZE_DATA-1:0]      w_i_data        ;
logic [SIZE_DATA-1:0]      w_o_data        ;

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_shift_unit
    if(~i_rst_n) begin
        w_i_shift_number <= '0;
        w_i_data         <= '0;
        o_data           <= '0;
    end else begin
        w_i_shift_number <= i_shift_number;
        w_i_data         <= i_data;
        o_data           <= w_o_data;
    end
end

SHF_unit #(
    .LEFT_RIGHT (LEFT_RIGHT ), // 0: shift Left, 1: shift right
    .SIZE_DATA  (SIZE_DATA  ),
	.SIZE_SHIFT (SIZE_SHIFT )
) SHF_UNIT (
    .i_shift_number  (w_i_shift_number),
    .i_data          (w_i_data),
    .o_data          (w_o_data) 
);

endmodule
