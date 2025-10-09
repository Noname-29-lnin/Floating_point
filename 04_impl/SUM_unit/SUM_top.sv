module ADD_top#(
    parameter SIZE_DATA = 32
)(
    input logic                      i_clk      ,
    input logic                      i_rst_n    ,
    input  logic                     i_carry    ,
    input  logic [SIZE_DATA-1:0]     i_data_a   ,
    input  logic [SIZE_DATA-1:0]     i_data_b   ,
    output logic [SIZE_DATA-1:0]     o_sum      ,
    output logic                     o_carry     
);

logic                     w_i_carry    ;
logic [SIZE_DATA-1:0]     w_i_data_a   ;
logic [SIZE_DATA-1:0]     w_i_data_b   ;
logic [SIZE_DATA-1:0]     w_o_sum      ;
logic                     w_o_carry    ;

always_ff @( posedge i_clk or negedge i_rst_n) begin : proc_test
    if(~i_rst_n) begin
        w_i_carry    <= '0;
        w_i_data_a   <= '0;
        w_i_data_b   <= '0;
        o_sum        <= '0;
        o_carry      <= '0;
    end else begin
        w_i_carry    <= i_carry;
        w_i_data_a   <= i_data_a;
        w_i_data_b   <= i_data_b;
        o_sum        <= w_o_sum;
        o_carry      <= w_o_carry;
    end
end

SUM_unit #(
    .SIZE_DATA (SIZE_DATA)
) SUM_UNIR (
    .i_carry    (w_i_carry),
    .i_data_a   (w_i_data_a),
    .i_data_b   (w_i_data_b),
    .o_sum      (w_o_sum),
    .o_carry    (w_o_carry) 
);

endmodule
