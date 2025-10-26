//      // verilator_coverage annotation
        module LOPD_8bit(
%000009     input logic [7:0]       i_data  ,
%000005     output logic [2:0]      o_pos_one,
%000006     output logic            o_zero_flag
        );
        
        ////////////////////////////////////////////////////////////
        // LOPD_4bit_unit_0
        ////////////////////////////////////////////////////////////
%000006 logic w_zero_flag_0;
%000003 logic [1:0] w_pos_one_0;
        LOPD_4bit LOPD_4bit_unit_0 (
            .i_data         (i_data[3:0]),
            .o_pos_one      (w_pos_one_0),
            .o_zero_flag    (w_zero_flag_0)
        );
        
        ////////////////////////////////////////////////////////////
        // LOPD_4bit_unit_1
        ////////////////////////////////////////////////////////////
%000006 logic w_zero_flag_1;
%000005 logic [1:0] w_pos_one_1;
        LOPD_4bit LOPD_4bit_unit_1 (
            .i_data         (i_data[7:4]),
            .o_pos_one      (w_pos_one_1),
            .o_zero_flag    (w_zero_flag_1)
        );
        
        ////////////////////////////////////////////////////////////
        // LOD_8bit_unit
        ////////////////////////////////////////////////////////////
        assign o_zero_flag = w_zero_flag_0 & w_zero_flag_1;
        assign o_pos_one[2] = ~(w_zero_flag_1);
        assign o_pos_one[1] = (w_zero_flag_1) ? w_pos_one_0[1] : w_pos_one_1[1];
        assign o_pos_one[0] = (w_zero_flag_1) ? w_pos_one_0[0] : w_pos_one_1[0];
        
        endmodule
        
