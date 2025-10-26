//      // verilator_coverage annotation
        module EXP_swap #(
            parameter SIZE_DATA = 8
        )(
%000001     input logic [SIZE_DATA-1:0]     i_data_a        ,
%000001     input logic [SIZE_DATA-1:0]     i_data_b        ,
%000000     output logic                    o_compare       ,   // a < b
%000001     output logic [SIZE_DATA-1:0]    o_less_data     ,
%000001     output logic [SIZE_DATA-1:0]    o_greater_data  
        );
        
        // assign o_compare = (i_data_a < i_data_b);
        COMP_8bit #(
            .SIZE_DATA      (SIZE_DATA)
        ) COMP_LESS_UNIT (
            .i_data_a       (i_data_a),
            .i_data_b       (i_data_b),
            .o_less         (o_compare)
        );
        
%000001 always_comb begin
%000001     o_less_data     = (o_compare) ? i_data_a : i_data_b;
%000001     o_greater_data  = (o_compare) ? i_data_b : i_data_a;
        end
        
        endmodule
        
