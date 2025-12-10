module EXP_swap (
    input logic [7:0]     i_data_a        ,
    input logic [7:0]     i_data_b        ,
    output logic                    o_compare       ,   // a < b
    output logic [7:0]    o_less_data     ,
    output logic [7:0]    o_greater_data  
);

// assign o_compare = (i_data_a < i_data_b);
COMP_8bit COMP_LESS_UNIT (
    .i_data_a       (i_data_a),
    .i_data_b       (i_data_b),
    .o_less         (o_compare)
);

always_comb begin
    o_less_data     = (o_compare) ? i_data_a : i_data_b;
    o_greater_data  = (o_compare) ? i_data_b : i_data_a;
end

endmodule
