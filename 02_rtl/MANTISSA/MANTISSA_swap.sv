module MANTISSA_swap #(
    parameter SIZE_DATA = 28
)(
    input logic                     i_sign_A            ,
    input logic [SIZE_DATA-1:0]     i_mantissa_A        ,
    input logic                     i_sign_B            ,
    input logic [SIZE_DATA-1:0]     i_mantissa_B        ,

    output logic                    o_sign_greater      ,
    output logic [SIZE_DATA-1:0]    o_mantissa_greater  ,
    output logic                    o_sign_less         ,
    output logic [SIZE_DATA-1:0]    o_mantissa_less      
);

logic w_compare;
assign w_compare = i_mantissa_A < i_mantissa_B; // A < B ? 1'b1 : 1'b0

logic [SIZE_DATA:0] w_mantissa_a, w_mantissa_b;
assign w_mantissa_a = {i_sign_A, i_mantissa_A};
assign w_mantissa_b = {i_sign_B, i_mantissa_B};
logic [SIZE_DATA:0] w_mantissa_greate, w_mantissa_less;

always_comb begin
    w_mantissa_less     = w_compare ? w_mantissa_a : w_mantissa_b;
    w_mantissa_greate   = w_compare ? w_mantissa_b : w_mantissa_a;
end

assign o_sign_greater       = w_mantissa_greate[SIZE_DATA];
assign o_mantissa_greater   = w_mantissa_greate[SIZE_DATA-1:0];
assign o_sign_less          = w_mantissa_less[SIZE_DATA];
assign o_mantissa_less      = w_mantissa_less[SIZE_DATA-1:0];

endmodule