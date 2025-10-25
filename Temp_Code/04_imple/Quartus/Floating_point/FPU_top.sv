module FPU_top #(
    parameter NUM_OP    = 1
)(
    input logic                 i_clk               ,
    input logic                 i_rst_n             ,
    input logic [NUM_OP-1:0]    i_fpu_op            ,
    input logic [31:0]          i_floating_a        ,
    input logic [31:0]          i_floating_b        ,
    output logic [31:0]         o_floating_result    
);

logic [NUM_OP-1:0]    w_i_fpu_op;
logic [31:0]          w_i_floating_a;
logic [31:0]          w_i_floating_b;
logic [31:0]          w_o_floating_result;    

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_est_time
    if(~i_rst_n) begin
        w_i_fpu_op          <= '0;
        w_i_floating_a      <= '0;
        w_i_floating_b      <= '0;
        o_floating_result   <= '0;
    end else begin
        w_i_fpu_op          <= i_fpu_op;
        w_i_floating_a      <= i_floating_a;
        w_i_floating_b      <= i_floating_b;
        o_floating_result   <= w_o_floating_result;
    end
end

FPU_unit #(
    .NUM_OP     (NUM_OP)
) FPU_UNIT (
    .i_fpu_op               (w_i_fpu_op),
    .i_floating_a           (w_i_floating_a),
    .i_floating_b           (w_i_floating_b),
    .o_floating_result      (w_o_floating_result) 
);

endmodule
