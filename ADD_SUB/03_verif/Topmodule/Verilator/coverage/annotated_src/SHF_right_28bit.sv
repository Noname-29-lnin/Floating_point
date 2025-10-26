//      // verilator_coverage annotation
        module SHF_right_28bit #(
            parameter SIZE_DATA  = 28,
            parameter SIZE_SHIFT = 5  
        )(
%000000     input  logic [SIZE_SHIFT-1:0] i_shift_number,
%000000     input  logic [SIZE_DATA-1:0]  i_data, 
%000001     output logic [SIZE_DATA-1:0]  o_data
        );
%000001     logic [SIZE_DATA-1:0] stage [SIZE_SHIFT:0];
        
            assign stage[0] = i_data;
        
            genvar i;
            generate
 000040         for (i = 0; i < SIZE_SHIFT; i++) begin : GEN_SHIFT
                    localparam SHIFT_AMT = (1 << i);
%000005             always_comb begin
 000040                 if (i_shift_number[i])
 000040                     stage[i+1] = { {SHIFT_AMT{1'b0}}, stage[i][SIZE_DATA-1:SHIFT_AMT] };
                        else
 000200                     stage[i+1] = stage[i];
                    end
                end
            endgenerate
        
            assign o_data = stage[SIZE_SHIFT];
        endmodule
        
