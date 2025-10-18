// module FPU_rounding_hardware #(
//     parameter SIZE_MANTISSA = 28    
// )(
//     input  logic [SIZE_MANTISSA-1:0]  i_mantissa_result ,
//     output logic [SIZE_MANTISSA-6:0]  o_mantissa_result  
// );

//     //======================================================================
//     // Internal signals
//     //======================================================================
//     localparam MAIN_BITS = SIZE_MANTISSA - 4;
//     logic [MAIN_BITS-1:0] mantissa_main; // 24-bit
//     logic guard_bit, round_bit, sticky_bit, extend_bit;
//     logic round_up;
//     logic [MAIN_BITS:0] mantissa_rounded;

//     //======================================================================
//     // Processing
//     //======================================================================
//     assign {mantissa_main, guard_bit, round_bit, sticky_bit, extend_bit} = i_mantissa_result;
//     always_comb begin
//         round_up = 1'b0;
//         if (guard_bit) begin
//             if (round_bit | sticky_bit)
//                 round_up = 1'b1;
//             else if (mantissa_main[0])
//                 round_up = 1'b1;
//         end
//     end

//     //======================================================================
//     // Output result
//     //======================================================================
//     assign mantissa_rounded = mantissa_main + round_up;
//     assign o_mantissa_result = mantissa_rounded[MAIN_BITS-1:0];

// endmodule

module FPU_rounding_hardware #(
    parameter SIZE_MANTISSA = 28    
)(
    input  logic [SIZE_MANTISSA-1:0]  i_mantissa_result ,
    output logic [SIZE_MANTISSA-6:0]  o_mantissa_result  
);

assign o_mantissa_result = i_mantissa_result[SIZE_MANTISSA-1:5];

endmodule
