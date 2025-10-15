`timescale 1ns/1ps

module tb_LOPD_unit();

parameter SIZE_DATA     = 32;
parameter SIZE_LOP      = $clog2(SIZE_DATA);

logic i_clk, i_rst_n;
logic [SIZE_DATA-1:0]   i_addr;
logic [SIZE_DATA-1:0]   i_data;
logic [SIZE_DATA-1:0]   o_addr;  
logic [SIZE_LOP-1:0]    o_one_position;
logic                   o_zero_flag;

LOPD_unit #(
    .SIZE_DATA  (SIZE_DATA),
    .SIZE_LOP   (SIZE_LOP)
) DUT (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_addr         (i_addr),
    .i_data         (i_data),
    .o_addr         (o_addr),
    .o_one_position (o_one_position),
    .o_zero_flag    (o_zero_flag) 
);

initial begin
    i_clk = 0;
    forever begin
        #5 i_clk = ~i_clk;
    end
end

initial begin
    $dumpfile("tb_LOPD_unit.vcd");
    $dumpvars(0, tb_LOPD_unit);
end

initial begin
    i_rst_n = 0;
    i_addr = '0;
    i_data = '0;
    #100;
    // Test zero flag
    i_rst_n = 1;
    #100;
    // Test addr
    repeat (2) begin
        @(posedge i_clk);
        #1;
        i_addr = 3;
        i_data = $urandom_range(0, SIZE_DATA);
    end
    #100;
    $finish;
end
initial begin
    $monitor("i_addr = %d | i_data = %b | o_addr = %d | o_one_position = %d | o_zero_flag = %b |",
                i_addr, i_data, o_addr, o_one_position, o_zero_flag);
end

endmodule
