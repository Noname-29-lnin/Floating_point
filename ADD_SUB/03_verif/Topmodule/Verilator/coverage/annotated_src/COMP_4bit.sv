//      // verilator_coverage annotation
        module COMP_4bit(
%000001     input  logic [3:0] i_data_a,
%000008     input  logic [3:0] i_data_b,
%000003     output logic       o_less,
 000017     output logic       o_equal
        );
%000008     logic w_less_low, w_equal_low;
%000008     logic w_less_high, w_equal_high;
        
            COMP_2bit u_low (
                .i_data_a (i_data_a[1:0]),
                .i_data_b (i_data_b[1:0]),
                .o_less   (w_less_low),
                .o_equal  (w_equal_low)
            );
        
            COMP_2bit u_high (
                .i_data_a (i_data_a[3:2]),
                .i_data_b (i_data_b[3:2]),
                .o_less   (w_less_high),
                .o_equal  (w_equal_high)
            );
        
            assign o_less  = w_less_high | (w_equal_high & w_less_low);
            assign o_equal = w_equal_high & w_equal_low;
        endmodule
        
