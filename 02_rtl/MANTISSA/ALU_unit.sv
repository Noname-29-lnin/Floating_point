module ALU_unit #(
    parameter NUM_OP            = 1 ,
    parameter SIZE_MANTISSA     = 28
)(
    input logic [NUM_OP-1:0]        i_op_alu            ,
    input logic                     i_sign_a            ,   // Greater
    input logic                     i_sign_b            ,   // Less
    input logic [SIZE_MANTISSA-1:0]     i_mantissa_a        ,   // Greater
    input logic [SIZE_MANTISSA-1:0]     i_mantissa_b        ,   // Less

    output logic                    o_overflow          ,
    output logic                    o_sign_result       ,   
    output logic [SIZE_MANTISSA-1:0]    o_mantissa_result      
);

logic w_carry_in;
logic w_n_mantissa_b, w_i_mantissa_b;

assign w_carry_in = i_op_alu ? (i_sign_a ^ i_sign_b) : ~(i_sign_a ^ i_sign_b); 
assign w_n_mantissa_b = ~(i_mantissa_b);
assign w_i_mantissa_b = w_carry_in ? w_n_mantissa_b : i_mantissa_b;

SUM_unit #(
    .SIZE_SUM  (SIZE_MANTISSA)
) ALU_COMM_UNIT  (
    .i_carry        (w_carry_in),
    .i_data_a       (i_mantissa_a),
    .i_data_b       (w_i_mantissa_b),
    .o_sum          (o_mantissa_result),
    .o_carry        (o_overflow)
);
assign o_sign_result = i_sign_a;

endmodule
