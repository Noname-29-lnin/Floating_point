//      // verilator_coverage annotation
        module COMP_28bit #(
            parameter SIZE_DATA = 28
        )(
%000001     input  logic [SIZE_DATA-1:0] i_data_a,
%000000     input  logic [SIZE_DATA-1:0] i_data_b,
%000002     output logic                 o_less,
%000002     output logic                 o_equal
        );
            localparam NUM_BLOCK = SIZE_DATA / 4;
        
%000003     logic [NUM_BLOCK-1:0] w_less;
%000002     logic [NUM_BLOCK-1:0] w_equal;
%000000     logic [NUM_BLOCK:0]   less_chain;
%000001     logic [NUM_BLOCK:0]   equal_chain;
        
            genvar i;
            generate
                for (i = 0; i < NUM_BLOCK; i++) begin : GEN_COMP_4BIT
                    COMP_4bit u_comp4 (
                        .i_data_a (i_data_a[i*4 +: 4]),
                        .i_data_b (i_data_b[i*4 +: 4]),
                        .o_less   (w_less[i]),
                        .o_equal  (w_equal[i])
                    );
                end
            endgenerate
        
            generate
                assign less_chain[NUM_BLOCK]  = 1'b0;
                assign equal_chain[NUM_BLOCK] = 1'b1;
                for (i = NUM_BLOCK-1; i >= 0; i--) begin : GEN_CHAIN
                    assign less_chain[i]  = w_less[i]  | (w_equal[i] & less_chain[i+1]);
                    assign equal_chain[i] = w_equal[i] & equal_chain[i+1];
                end
                assign o_less  = less_chain[0];
                assign o_equal = equal_chain[0];
            endgenerate
        
        endmodule
        
