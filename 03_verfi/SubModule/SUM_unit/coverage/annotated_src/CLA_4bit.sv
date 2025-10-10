//      // verilator_coverage annotation
        module CLA_4bit (
 001743     input  logic [3:0]  a,
 001733     input  logic [3:0]  b,
 001887     input  logic        cin,
 001732     output logic [3:0]  sum,
 000398     output logic        o_p,
 001785     output logic        o_g
        );
 001266     logic [3:0] w_g, w_p;
 001771     logic [3:0] w_c;
        
            assign w_g = a & b;
            assign w_p = a ^ b;
        
%000007     always_comb begin
%000007         w_c[0] = cin;
%000007         w_c[1] = w_g[0] | (w_p[0] & w_c[0]);
%000007         w_c[2] = w_g[1] | (w_p[1] & w_g[0]) | (w_p[1] & w_p[0] & w_c[0]);
%000007         w_c[3] = w_g[2] | (w_p[2] & w_g[1]) | (w_p[2] & w_p[1] & w_g[0])
%000007                            | (w_p[2] & w_p[1] & w_p[0] & w_c[0]);
            end
        
            assign sum = w_p ^ w_c;
        
            assign o_p = &w_p;
            assign o_g = w_g[3] | (w_p[3] & w_g[2])
                                | (w_p[3] & w_p[2] & w_g[1])
                                | (w_p[3] & w_p[2] & w_p[1] & w_g[0]);
        
        endmodule
        
