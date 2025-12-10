module MAN_mul #(
    parameter SIZE_DATA = 24    
)(
    input logic [SIZE_DATA-1:0]         i_data_a    ,
    input logic [SIZE_DATA-1:0]         i_data_b    ,
    output logic [(2*SIZE_DATA)-1:0]    o_data_mul   
);

assign o_data_mul = i_data_a * i_data_b;

endmodule
