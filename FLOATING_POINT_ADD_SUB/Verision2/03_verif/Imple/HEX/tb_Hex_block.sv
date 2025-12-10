`timescale 1ns/1ps

module tb_HEX_block();

logic           i_clk;
logic           i_rst_n;
logic           i_tx_en;
logic [7:0]     i_tx_data;
logic           o_tx_serial;
logic           o_tx_done;
logic           i_rx_en;
logic [31:0]    o_rx_data_a;
logic [31:0]    o_rx_data_b;
logic [31:0]    i_hex_data;
logic           o_rx_done;

UART_Tx_block #(
    .SIZE_DATA          (8),
    .BAUDRATE_VALUE     (325)
) UART_TX (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_tx_en            (i_tx_en),
    .i_tx_data          (i_tx_data),
    .o_tx_serial        (o_tx_serial),
    .o_tx_done          (o_tx_done)
);

UART_Rx_block #(
    .SIZE_DATA          (32)
) UART_RX (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_rx_en            (i_rx_en),
    .i_rx_data          (o_tx_serial),

    .o_data_a           (o_rx_data_a),
    .o_data_b           (o_rx_data_b),
    .o_done             (o_rx_done) 
);

logic [6:0]      o_hex_0;
logic [6:0]      o_hex_1;
logic [6:0]      o_hex_2;
logic [6:0]      o_hex_3;
logic [6:0]      o_hex_4;
logic [6:0]      o_hex_5;
logic [6:0]      o_hex_6;
logic [6:0]      o_hex_7;

HEX_block #(
    .SIZE_HEX       (7),
    .SIZE_DATA      (32),
    .TYPE_ANODE     (1) // 0: Common Cathode, 1: Common Anode
) DUT (
    .i_clk              (i_clk),
    .i_rst_n            (i_rst_n),
    .i_hex_en           (o_rx_done),
    .i_hex_data         (i_hex_data),

    .o_hex_0            (o_hex_0),
    .o_hex_1            (o_hex_1),
    .o_hex_2            (o_hex_2),
    .o_hex_3            (o_hex_3),
    .o_hex_4            (o_hex_4),
    .o_hex_5            (o_hex_5),
    .o_hex_6            (o_hex_6),
    .o_hex_7            (o_hex_7)
);


initial begin
    i_clk = 1'b0;
    forever begin
        #5 i_clk = ~i_clk;
    end
end

initial begin
    $dumpfile("tb_HEX_block.vcd");
    $dumpvars(0, tb_HEX_block);
end
task automatic Trans_Value(
    input logic [31:0]  t_i_data
);
    begin
        @(posedge i_clk);
            i_tx_en = 1;
            i_rx_en = 1;
            i_tx_data = t_i_data[31:24];
        //     #500000;
            @(posedge o_tx_done);
        @(posedge i_clk);
            i_tx_en = 1;
            i_rx_en = 1;
            i_tx_data = t_i_data[23:16];
            @(posedge o_tx_done);
            // #50000;
        @(posedge i_clk);
            i_tx_en = 1;
            i_rx_en = 1;
            i_tx_data = t_i_data[15:8];
            // #50000;
            @(posedge o_tx_done);
        @(posedge i_clk);
            i_tx_en = 1;
            i_rx_en = 1;
            i_tx_data = t_i_data[7:0];
            @(posedge o_tx_done);
            // #50000;
        @(posedge i_clk);
            i_tx_en = 0;
            i_rx_en = 1;
            i_tx_data = 0;
    end
endtask //automatic
// Function giải mã mã 7-seg sang ký tự (dành cho common anode hoặc cathode)
function automatic string decode_hex7(
    input logic [6:0] seg,
    input bit type_anode
);
    logic [6:0] s;
    begin
        // Nếu là anode thì đảo bit (vì 0 sáng, 1 tắt)
        s = (type_anode) ? ~seg : seg;

        case (s)
            7'b0111111: decode_hex7 = "0";
            7'b0000110: decode_hex7 = "1";
            7'b1011011: decode_hex7 = "2";
            7'b1001111: decode_hex7 = "3";
            7'b1100110: decode_hex7 = "4";
            7'b1101101: decode_hex7 = "5";
            7'b1111101: decode_hex7 = "6";
            7'b0000111: decode_hex7 = "7";
            7'b1111111: decode_hex7 = "8";
            7'b1101111: decode_hex7 = "9";
            7'b1110111: decode_hex7 = "A";
            7'b1111100: decode_hex7 = "b";
            7'b0111001: decode_hex7 = "C";
            7'b1011110: decode_hex7 = "d";
            7'b1111001: decode_hex7 = "E";
            7'b1110001: decode_hex7 = "F";
            default:    decode_hex7 = "?";
        endcase
    end
endfunction

initial begin
    i_rst_n = 0;
    i_tx_en = 0;
    i_rx_en = 0;
    i_tx_data = 0;
    #100;
    i_rst_n = 1;
    #100;
    Trans_Value(32'hc0b0c0a6);
    #100;
    Trans_Value(32'hc0b0c0a6);
    #100;
    $display("DATA_A = %h", o_rx_data_a);
    $display("DATA_B = %h", o_rx_data_b);
    #1000;
    i_hex_data = o_rx_data_a;
    $display("------------- DATA_A -------------");
    $display("[%0t] HEX output:", $time);
    $display("HEX0=%b (%s)  HEX1=%b (%s)  HEX2=%b (%s)  HEX3=%b (%s)",
            o_hex_0, decode_hex7(o_hex_0, 1),
            o_hex_1, decode_hex7(o_hex_1, 1),
            o_hex_2, decode_hex7(o_hex_2, 1),
            o_hex_3, decode_hex7(o_hex_3, 1));
    $display("HEX4=%b (%s)  HEX5=%b (%s)  HEX6=%b (%s)  HEX7=%b (%s)",
            o_hex_4, decode_hex7(o_hex_4, 1),
            o_hex_5, decode_hex7(o_hex_5, 1),
            o_hex_6, decode_hex7(o_hex_6, 1),
            o_hex_7, decode_hex7(o_hex_7, 1));
    $display("-------------------------------------------------------------");
    @(posedge i_clk);
    i_hex_data = o_rx_data_b;
    @(posedge i_clk);
    $display("------------- DATA_B -------------");
    $display("[%0t] HEX output:", $time);
    $display("HEX0=%b (%s)  HEX1=%b (%s)  HEX2=%b (%s)  HEX3=%b (%s)",
            o_hex_0, decode_hex7(o_hex_0, 1),
            o_hex_1, decode_hex7(o_hex_1, 1),
            o_hex_2, decode_hex7(o_hex_2, 1),
            o_hex_3, decode_hex7(o_hex_3, 1));
    $display("HEX4=%b (%s)  HEX5=%b (%s)  HEX6=%b (%s)  HEX7=%b (%s)",
            o_hex_4, decode_hex7(o_hex_4, 1),
            o_hex_5, decode_hex7(o_hex_5, 1),
            o_hex_6, decode_hex7(o_hex_6, 1),
            o_hex_7, decode_hex7(o_hex_7, 1));
    $display("-------------------------------------------------------------");
    #10000;
    $display("Finsish");
    #100;
    $finish;
end

always @(posedge o_tx_done)
    $display("[%0t] TX done!", $time);

endmodule
