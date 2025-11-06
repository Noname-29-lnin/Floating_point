module PSC_unit(
    input logic                     i_add_sub   ,
    input logic                     i_sign_a    ,
    input logic [7:0]               i_exp_a     ,
    input logic [23:0]              i_man_a     ,
    input logic                     i_sign_b    ,
    input logic [7:0]               i_exp_b     ,
    input logic [23:0]              i_man_b     ,
    output logic [1:0]              o_sel_sign  ,
    output logic [1:0]              o_sel_exp   ,
    output logic [1:0]              o_sel_man    
);

localparam SIGN_NORM    = 2'b00;
localparam SIGN_ZERO    = 2'b01;
localparam SIGN_ONE     = 2'b10;

localparam EXP_NORM     = 2'b00;
localparam EXP_ZERO     = 2'b01;
localparam EXP_ONE      = 2'b10;

localparam MAN_NORM     = 2'b00;
localparam MAN_ZERO     = 2'b01;
localparam MAN_ONE      = 2'b10;

logic w_exp_a_one, w_exp_b_one;
assign w_exp_a_one  = &i_exp_a; // i_exp_a = 8'hFF
assign w_exp_b_one  = &i_exp_b; // i_exp_b = 8'hFF
logic w_exp_a_zero, w_exp_b_zero;
assign w_exp_a_zero = ~&i_exp_a; // i_exp_a = 8'h00
assign w_exp_b_zero = ~&i_exp_b; // i_exp_b = 8'h00 
logic w_man_a_zero, w_man_b_zero;
assign w_man_a_zero = ~&i_man_a; // i_man_a = 24'h000
assign w_man_b_zero = ~&i_man_b; // i_man_b = 24'h000

logic [1:0] w_sel_sign;
logic [1:0] w_sel_exp;
logic [1:0] w_sel_man;

// always_comb begin : process_FSM
//     case ({i_add_sub, })
//         : 
//         default: 
//     endcase
// end

endmodule
