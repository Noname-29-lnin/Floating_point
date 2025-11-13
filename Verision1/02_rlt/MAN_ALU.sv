module MAN_ALU #(
    parameter NUM_OP    = 1 ,
    parameter SIZE_MAN  = 28
)(
    input logic [NUM_OP-1:0]    i_fpu_op        ,
    input logic                 i_sign_a        ,
    input logic                 i_sign_b        ,
    input logic [SIZE_MAN-1:0]  i_man_max       ,
    input logic [SIZE_MAN-1:0]  i_man_min       ,
    output logic [SIZE_MAN-1:0] o_man_alu       ,
    output logic                o_overflow       
);

logic w_i_carry;
logic [SIZE_MAN-1:0] w_n_man_b;
logic [SIZE_MAN-1:0] w_i_man_b;
logic w_overflow;

assign w_i_carry = i_fpu_op ? ~(i_sign_a ^ i_sign_b) : (i_sign_a ^ i_sign_b);
assign w_n_man_b = ~(i_man_min);
assign w_i_man_b = w_i_carry ? w_n_man_b : i_man_min;

CLA_28bit ALU_SUB_UNIT (
    .i_carry        (w_i_carry),
    .i_data_a       (i_man_max),
    .i_data_b       (w_i_man_b),
    .o_sum          (o_man_alu),
    .o_carry        (w_overflow)
);
// assign {w_overflow, o_man_alu} = i_man_max + w_i_man_b + w_i_carry;

assign o_overflow = w_i_carry ? 1'b0 : w_overflow;

endmodule
