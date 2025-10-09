module ALU_unit #(
    parameter NUM_OP    = 0     ,   // 0: ADD | 1: SUB | 2: MUL | 3: DIV
    parameter SIZE_DATA = 24
)(
    input  logic [SIZE_DATA-1:0] i_data_a,
    input  logic [SIZE_DATA-1:0] i_data_b,
    output logic [SIZE_DATA-1:0] o_result
);

generate
    if (NUM_OP == 0) begin : GEN_ADD
        assign o_result = i_data_a + i_data_b;
    end
    else if (NUM_OP == 1) begin : GEN_SUB
        assign o_result = i_data_a - i_data_b;
    end
    else if (NUM_OP == 2) begin : GEN_MUL
        assign o_result = i_data_a * i_data_b;
    end
    else if (NUM_OP == 3) begin : GEN_DIV
        assign o_result = i_data_a / i_data_b;
    end
    else begin : GEN_DEFAULT
        assign o_result = i_data_a + i_data_b;
    end
endgenerate

endmodule
