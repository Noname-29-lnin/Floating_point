module SHF_unit #(
    parameter LEFT_RIGHT = 1, // 0: shift Left, 1: shift right
    parameter SIZE_DATA  = 24,
	 parameter SIZE_SHIFT = 5
)(
    input logic [SIZE_SHIFT-1:0]     i_shift_number  ,
    input logic [SIZE_DATA-1:0]     i_data          ,
    output logic [SIZE_DATA-1:0]    o_data           
);

generate
    if (LEFT_RIGHT == 0) begin : GEN_SHIFT_LEFT
        SHF_shift_left #(
            .SIZE_DATA  (SIZE_DATA),
            .SIZE_SHIFT (SIZE_SHIFT)  
        ) SHF_SHIFT_LEFT (
            .i_shift_number (i_shift_number),
            .i_data         (i_data), 
            .o_data         (o_data)
        );
    end else begin : GEN_SHIFT_RIGHT
        SHF_shift_right #(
            .SIZE_DATA  (SIZE_DATA),
            .SIZE_SHIFT (SIZE_SHIFT)  
        ) SHF_SHIFT_RIGHT (
            .i_shift_number (i_shift_number),
            .i_data         (i_data), 
            .o_data         (o_data)
        );
    end
endgenerate

endmodule
