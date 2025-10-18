module FPU_unit #(
    parameter NUM_OP = 1
)(
    input logic                     i_clk       ,
    input logic                     i_rst_n     ,
    input logic [NUM_OP-1:0]        i_alu_op    ,
    input logic [31:0]              i_data_a    ,
    input logic [31:0]              i_data_b    ,
    output logic [31:0]             o_result     

);

logic w_i_alu_op;
logic [31:0] w_i_data_a, w_i_data_b;
logic [31:0] w_o_result;

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_intput
    if(~i_rst_n) begin
        w_i_alu_op  <= '0;
        w_i_data_a  <= '0;
        w_i_data_b  <= '0;
        o_result    <= '0;
    end else begin
        w_i_alu_op  <= i_alu_op;
        w_i_data_a  <= i_data_a;
        w_i_data_b  <= i_data_b;
        o_result    <= w_o_result;
    end
end

FPU_32bit #(
    .NUM_OP    (NUM_OP)    // 0: ADD | 1: SUB
) FPUT_UNIT (
    .i_alu_op   (w_i_alu_op),
    .i_data_a   (w_i_data_a),
    .i_data_b   (w_i_data_b),
    .o_result   (w_o_result) 
);

endmodule
