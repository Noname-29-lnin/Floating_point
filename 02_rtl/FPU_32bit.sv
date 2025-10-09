module FPU_32bit #(
    parameter NUM_OP    = 2 ,
    parameter SIZE_DATA = 32
)(
    input logic [NUM_OP-1:0]        i_op_alu    ,
    input logic [SIZE_DATA-1:0]     i_data_a    ,
    input logic [SIZE_DATA-1:0]     i_data_b    ,

    output logic [SIZE_DATA-1:0]    o_result
);

endmodule
