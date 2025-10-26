//      // verilator_coverage annotation
        module CLA_28bit(
%000003     input logic         i_carry,
%000000     input logic [27:0]  i_data_a,
%000003     input logic [27:0]  i_data_b,
%000001     output logic [27:0] o_sum,
%000005     output logic        o_carry
        );
        
%000005 logic [7:0] w_c;
%000004 logic [6:0] w_p;
%000005 logic [6:0] w_g;
        
        genvar i;
        generate
            assign w_c[0] = i_carry;
        
            CLA_4bit CLA_4BIT_UNIT_0 (
                .a      (i_data_a[3:0]),
                .b      (i_data_b[3:0]),
                .cin    (w_c[0]),
                .sum    (o_sum[3:0]),
                .o_p    (w_p[0]),
                .o_g    (w_g[0])
            );
            
            assign w_c[1] = w_g[0] | (w_p[0] & w_c[0]);
            for (i = 1; i < 7; i = i + 1) begin : CLA_BLOCK_GEN
                CLA_4bit CLA_4BIT_UNIT_1 (
                    .a      (i_data_a[(i*4)+3 : i*4]),
                    .b      (i_data_b[(i*4)+3 : i*4]),
                    .cin    (w_c[i]),
                    .sum    (o_sum[(i*4)+3 : i*4]),
                    .o_p    (w_p[i]),
                    .o_g    (w_g[i])
                );        
                assign w_c[i+1] = w_g[i] | (w_p[i] & w_c[i]);
            end
        endgenerate
        
        assign o_carry = w_c[7];
        
        endmodule
        
