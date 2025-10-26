//      // verilator_coverage annotation
        module MAN_swap #(
            parameter SIZE_MAN  = 24
        )(
%000001     input logic                     i_sign_a    ,
%000001     input logic                     i_sign_b    ,
%000000     input logic [SIZE_MAN-1:0]      i_man_a     ,
%000001     input logic [SIZE_MAN-1:0]      i_man_b     ,
        
            // i_compare = 1 -> a < b
%000002     input logic                     i_compare   ,
        
%000001     output logic                    o_sign_max  ,
%000001     output logic                    o_sign_min  ,
%000000     output logic [SIZE_MAN-1:0]     o_man_max   ,
%000001     output logic [SIZE_MAN-1:0]     o_man_min   
        );
        
%000001 logic [SIZE_MAN:0] w_a, w_b;
        assign w_a = {i_sign_a, i_man_a};
        assign w_b = {i_sign_b, i_man_b};
        
%000001 logic [SIZE_MAN:0] w_max, w_min;
        assign w_max    = i_compare ? w_b : w_a;
        assign w_min    = i_compare ? w_a : w_b;
        
        assign o_sign_max   = w_max[SIZE_MAN];
        assign o_sign_min   = w_min[SIZE_MAN];
        assign o_man_max    = w_max[SIZE_MAN-1:0];
        assign o_man_min    = w_min[SIZE_MAN-1:0];
        
        endmodule
        
