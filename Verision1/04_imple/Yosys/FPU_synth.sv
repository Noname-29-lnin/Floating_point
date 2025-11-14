module FPU_synth  #(
    parameter NUM_OP    = 1
)(
    input logic                 i_clk           ,
    input logic                 i_rst_n         ,
    input logic [NUM_OP-1:0]    i_add_sub       ,
    input logic [31:0]          i_32_a          ,
    input logic [31:0]          i_32_b          ,
    output logic [31:0]         o_32_s          ,
    output logic                o_ov_flag       ,
    output logic                o_un_flag        
);

logic [NUM_OP-1:0]    w_i_add_sub;
logic [31:0]          w_i_32_a;
logic [31:0]          w_i_32_b;
logic [31:0]          w_o_32_s;    
logic                 w_o_ov_flag;
logic                 w_o_un_flag;

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_est_time
    if(~i_rst_n) begin
        w_i_add_sub         <= '0;
        w_i_32_a            <= '0;
        w_i_32_b            <= '0;
        o_32_s              <= '0;
        o_ov_flag           <= '0;
        o_un_flag           <= '0;
    end else begin
        w_i_add_sub         <= i_add_sub;
        w_i_32_a            <= i_32_a;
        w_i_32_b            <= i_32_b;
        o_32_s              <= w_o_32_s;
        o_ov_flag           <= w_o_ov_flag;
        o_un_flag           <= w_o_un_flag;
    end
end

FPU_unit #(
    .NUM_OP      (NUM_OP)
) FPU_UNIT (
    .i_add_sub          (w_i_add_sub),
    .i_32_a             (w_i_32_a),
    .i_32_b             (w_i_32_b),
    .o_32_s             (w_o_32_s),
    .o_ov_flag          (w_o_ov_flag),
    .o_un_flag          (w_o_un_flag) 
);

endmodule
