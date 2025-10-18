// `timescale 1ns/1ps
// module tb_FPU_32bit();

// ///////////////////////////////////////////////////////////////////
// // Parameter 
// ///////////////////////////////////////////////////////////////////
// parameter SIZE_DATA = 32;
// parameter NUM_OP    = 2 ;

// ///////////////////////////////////////////////////////////////////
// // Internal Signal
// ///////////////////////////////////////////////////////////////////
// logic i_clk, i_rst_n;
// logic [NUM_OP-1:0]      i_alu_op;
// logic [NUM_OP-1:0]      w_alu_op;
// logic [SIZE_DATA-1:0]   i_data_a, i_data_b;
// logic [SIZE_DATA-1:0]   w_data_a, w_data_b;
// logic [SIZE_DATA-1:0]   o_result;

// ///////////////////////////////////////////////////////////////////
// // Submoudle
// ///////////////////////////////////////////////////////////////////

// initial begin
//     i_clk = 0;
//     forever begin
//        #5 i_clk = ~i_clk; 
//     end 
// end

// always_ff @( posedge i_clk or negedge i_rst_n ) begin : process_input
//     if(~i_rst_n) begin
//         w_alu_op    <= '0;
//         w_data_a    <= '0;
//         w_data_b    <= '0;
//     end else begin
//         w_alu_op    <= i_alu_op;
//         w_data_a    <= i_data_a;
//         w_data_b    <= i_data_b;
//     end
// end

// function automatic logic [SIZE_DATA-1:0] Cal_sum(
//     input logic [SIZE_DATA-1:0] data_a,
//     input logic [SIZE_DATA-1:0] data_b
// );

//     logic sign_a, sign_b;
//     logic [7:0] exponent_a, exponent_b;
//     logic [23:0] mantissa_a, mantissa_b;
//     logic [7:0] exponent_sum;
//     logic [24:0] mantissa_sum;
//     logic sign_sum;
//     logic [22:0] mantissa_final;

//     sign_a     = data_a[31];
//     sign_b     = data_b[31];
//     exponent_a = data_a[30:23];
//     exponent_b = data_b[30:23];
//     mantissa_a = {1'b1, data_a[22:0]};
//     mantissa_b = {1'b1, data_b[22:0]};

//     if (exponent_a > exponent_b) begin
//         mantissa_b = mantissa_b >> (exponent_a - exponent_b);
//         exponent_sum = exponent_a;
//     end
//     else if (exponent_a < exponent_b) begin
//         mantissa_a = mantissa_a >> (exponent_b - exponent_a);
//         exponent_sum = exponent_b;
//     end
//     else begin
//         exponent_sum = exponent_a;
//     end

//     if (sign_a == sign_b) begin
//         mantissa_sum = mantissa_a + mantissa_b;
//         sign_sum = sign_a;
//     end else begin
//         if (mantissa_a > mantissa_b) begin
//             mantissa_sum = mantissa_a - mantissa_b;
//             sign_sum = sign_a;
//         end else begin
//             mantissa_sum = mantissa_b - mantissa_a;
//             sign_sum = sign_b;
//         end
//     end

//     if (mantissa_sum[24]) begin
//         mantissa_sum = mantissa_sum >> 1;
//         exponent_sum = exponent_sum + 1;
//     end else begin
//         int count = 0;
//         while (mantissa_sum[23] == 0 && exponent_sum > 0 && count < 32) begin
//             mantissa_sum = mantissa_sum << 1;
//             exponent_sum = exponent_sum - 1;
//             count++;
//         end
//     end

//     mantissa_final = mantissa_sum[22:0];
//     Cal_sum = {sign_sum, exponent_sum, mantissa_final};
// endfunction

// FPU_32bit u_FPU_32bit (
//     .i_alu_op   (w_alu_op[0]),
//     .i_data_a   (w_data_a),
//     .i_data_b   (w_data_b),
//     .o_result   (o_result)
// );

// initial begin
//     $dumpfile("tb_FPU_32bit.vcd");
//     $dumpvars(0, tb_FPU_32bit);
// end

// initial begin
//     i_rst_n = 0;
//     i_alu_op = '0;
//     i_data_a = '0;
//     i_data_b = '0;
//     #20;
//     i_rst_n = 1;
//     repeat (10) begin
//         #1;
//         i_data_a = $random;
//         i_data_b = $random;
//         @(posedge i_clk);
//         #5;
//         if(o_result == Cal_sum(w_data_a, w_data_b)) begin
//             $display("-> Pass: A=%h B=%h Result=%h", w_data_a, w_data_b, o_result);
//         end else begin
//             $display("-> Fail: A=%h B=%h Exp=%h Got=%h", w_data_a, w_data_b, Cal_sum(w_data_a, w_data_b), o_result);
//         end
//     end
//     $finish;
// end

// endmodule
`timescale 1ns/1ps
module tb_FPU_32bit();

///////////////////////////////////////////////////////////////////
// Parameter 
///////////////////////////////////////////////////////////////////
parameter SIZE_DATA = 32;
parameter NUM_OP    = 2 ;

///////////////////////////////////////////////////////////////////
// Internal Signal
///////////////////////////////////////////////////////////////////
logic i_clk, i_rst_n;
logic [NUM_OP-1:0]      i_alu_op;
logic [NUM_OP-1:0]      w_alu_op;
logic [SIZE_DATA-1:0]   i_data_a, i_data_b;
logic [SIZE_DATA-1:0]   w_data_a, w_data_b;
logic [SIZE_DATA-1:0]   o_result;

///////////////////////////////////////////////////////////////////
// Submoudle
///////////////////////////////////////////////////////////////////

initial begin
    i_clk = 0;
    forever begin
       #5 i_clk = ~i_clk; 
    end 
end

always_ff @( posedge i_clk or negedge i_rst_n ) begin : process_input
    if(~i_rst_n) begin
        w_alu_op    <= '0;
        w_data_a    <= '0;
        w_data_b    <= '0;
    end else begin
        w_alu_op    <= i_alu_op;
        w_data_a    <= i_data_a;
        w_data_b    <= i_data_b;
    end
end

FPU_32bit u_FPU_32bit (
    .i_alu_op   (w_alu_op[0]),
    .i_data_a   (w_data_a),
    .i_data_b   (w_data_b),
    .o_result   (o_result)
);

// initial begin
//     $dumpfile("tb_FPU_32bit.vcd");
//     $dumpvars(0, tb_FPU_32bit);
// end

initial begin
    i_rst_n = 0;
    i_alu_op = '0;
    i_data_a = '0;
    i_data_b = '0;
    #20;
    i_rst_n = 1;
    repeat (10) begin
        @(posedge i_clk);
        #1;
        i_data_a = $random;
        i_data_b = $random;
        @(posedge i_clk);
        #1;
        $display("A=%h  B=%h  -> Result=%h", w_data_a, w_data_b, o_result);
    end
    $finish;
end

endmodule
