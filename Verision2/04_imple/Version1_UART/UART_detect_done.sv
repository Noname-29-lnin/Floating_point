module UART_detect_done(
    input logic         i_clk   ,
    input logic         i_rst_n ,
    input logic         i_en_a  ,
    input logic         i_en_b  ,
    output logic        o_done   
);

logic w_en_a;
UART_SS_detect_start SS_DETECT_START_A (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_start            (i_en_a),
    .i_done             (o_done),
    .o_w_start          (w_en_a) 
);
// logic w_en_b;
// UART_SS_detect_start SS_DETECT_START_B (
//     .i_clk              (i_clk),
//     .i_rst_n            (i_rst_n),
//     .i_start            (i_en_b),
//     .i_done             (o_done),
//     .o_w_start          (w_en_b) 
// );

always_ff @( posedge i_clk or negedge i_rst_n ) begin : output_done
    if(~i_rst_n)
        o_done      <= '0;
    else 
        o_done      <= w_en_a & i_en_b;
end

endmodule
