//      // verilator_coverage annotation
        module SHF_shift_left #(
            parameter SIZE_DATA  = 8,
            parameter SIZE_SHIFT = 3  
        )(
 000442     input  logic [SIZE_SHIFT-1:0] i_shift_number,
 000471     input  logic [SIZE_DATA-1:0]  i_data, 
 000062     output logic [SIZE_DATA-1:0]  o_data
        );
            // ----------------------------
            // Barrel Shifter Right
            // ----------------------------
 000062     logic [SIZE_DATA-1:0] stage_data [SIZE_SHIFT:0];
        
            assign stage_data[0] = i_data;
        
            genvar i;
            generate
 004260         for (i = 0; i < SIZE_SHIFT; i = i + 1) begin : GEN_SHIFT_STAGE
                    localparam SHIFT_VAL = (1 << i);
%000005             always_comb begin
 004260                 if (i_shift_number[i])
 004260                     stage_data[i+1] = {stage_data[i][SIZE_DATA-1-SHIFT_VAL:0], {SHIFT_VAL{1'b0}}};
                        else
 005745                     stage_data[i+1] = stage_data[i];
                    end
                end
            endgenerate
        
            assign o_data = stage_data[SIZE_SHIFT];
        
        endmodule
        
