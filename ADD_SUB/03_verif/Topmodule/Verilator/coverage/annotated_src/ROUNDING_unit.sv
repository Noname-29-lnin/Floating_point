//      // verilator_coverage annotation
        module ROUNDING_unit #(
            parameter SIZE_MAN          = 28,
            parameter SIZE_MAN_RESULT   = 24
        )(
%000001     input logic [SIZE_MAN-1:0]          i_man           ,
%000001     output logic [SIZE_MAN_RESULT-1:0]  o_man_result    
        );
        
%000001 logic [SIZE_MAN_RESULT-1:0] w_man_temp;
        assign w_man_temp = i_man[SIZE_MAN-1:SIZE_MAN-SIZE_MAN_RESULT];
        
        // logic w_guard_bit, w_round_bit, w_sticky_bit, w_extend_bit;
        assign o_man_result = w_man_temp;
        
        endmodule
        
