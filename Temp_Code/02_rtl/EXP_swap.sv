module EXP_swap #(
    parameter SIZE_DATA = 8
)(
    input logic [SIZE_DATA-1:0]     i_data_a        ,
    input logic [SIZE_DATA-1:0]     i_data_b        ,
    output logic                    o_compare       ,   // a < b
    output logic [SIZE_DATA-1:0]    o_less_data     ,
    output logic [SIZE_DATA-1:0]    o_greater_data  
);

// assign o_compare = (i_data_a < i_data_b);
COMP_less #(
    .SIZE_DATA      (SIZE_DATA)
) COMP_LESS_UNIT (
    .i_data_a       (i_data_a),
    .i_data_b       (i_data_b),
    .o_less         (o_compare)
);

always_comb begin
    o_less_data     = (o_compare) ? i_data_a : i_data_b;
    o_greater_data  = (o_compare) ? i_data_b : i_data_a;
end

endmodule
