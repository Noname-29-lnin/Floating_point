//      // verilator_coverage annotation
        module COMP_2bit(
%000007     input  logic [1:0] i_data_a,
 000016     input  logic [1:0] i_data_b,
 000016     output logic       o_less,
 000032     output logic       o_equal
        );
            // assign o_less  = (~i_data_a[1] & ~i_data_a[0] & i_data_b[0]) | (~i_data_a[0] & i_data_b[1] & i_data_b[0]) | (~i_data_a[1] & i_data_b[1]);
            // assign o_equal = ~|(i_data_a ^ i_data_b);
            assign o_less  = ((~(i_data_a[1] | i_data_a[0])) & i_data_b[0]) | (~i_data_a[0] & (i_data_b[1] & i_data_b[0])) | (~i_data_a[1] & i_data_b[1]);
            assign o_equal = ~|(i_data_a ^ i_data_b);
        endmodule
        
