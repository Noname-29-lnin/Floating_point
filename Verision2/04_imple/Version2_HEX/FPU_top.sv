module FPU_top #(
    parameter SIZE_SW   = 18    ,
    parameter SIZE_BTN  = 4     ,
    parameter SIZE_LEDR = 18    ,
    parameter SIZE_LEDG = 4     ,
    parameter SIZE_7SEG = 7      
)(
    input logic                             CLOCK_27    ,
    input logic [SIZE_SW-1:0]               SW          ,
    input logic [SIZE_BTN-1:0]              BTN         ,

    output logic [SIZE_LEDR-1:0]            LEDR        ,
    output logic [SIZE_LEDG-1:0]            LEDG        ,
    output logic [SIZE_7SEG-1:0]            HEX0        ,
    output logic [SIZE_7SEG-1:0]            HEX1        ,
    output logic [SIZE_7SEG-1:0]            HEX2        ,
    output logic [SIZE_7SEG-1:0]            HEX3        ,
    output logic [SIZE_7SEG-1:0]            HEX4        ,
    output logic [SIZE_7SEG-1:0]            HEX5        ,
    output logic [SIZE_7SEG-1:0]            HEX6        ,
    output logic [SIZE_7SEG-1:0]            HEX7         
);

localparam SIZE_DATA = 32;
logic i_clk;
assign i_clk = CLOCK_27;
logic i_rst_n;
assign i_rst_n = SW[17];
logic [SIZE_DATA-1:0] w_i_data;
logic [SIZE_DATA-1:0] w_o_data;
logic                 w_i_hex_en;
logic                 w_i_valid;
logic                 w_i_add_sub;
logic                 w_o_add_sub;

UART_SS_detect_edge #(
    .POS_EDGE   (1)   // 1: posedge, 0: negedge
) SSDE_I_VALID_UNIT (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_signal       (BTN[0]), // save_data
    .o_signal       (w_i_valid)
);
UART_SS_detect_edge #(
    .POS_EDGE   (1)   // 1: posedge, 0: negedge
) SSDE_ADD_SUB_UNIT (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_signal       (BTN[1]), // save_data
    .o_signal       (w_i_add_sub)
);

always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_input_logic
    if(~i_rst_n) begin
        w_i_data        <= '0;
    end else if(w_i_valid) begin
        w_i_data        <= SW[16:0]; 
    end
end
assign LEDR = SW;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_output_valid_logic
    if(~i_rst_n) begin
        w_i_hex_en        <= '0;
    end else begin
        w_i_hex_en        <= w_i_valid; 
    end
end
TFF T_FF_UNIT (
				.t      (w_i_add_sub), 
				.clk    (i_clk), 
				.clrn   (1'b1), 
				.prn    (1'b1), 
				.q      (w_o_add_sub)
				);
assign LEDG[1] = w_o_add_sub;
FPU_unit #(
    .NUM_OP     (1)
) FPU_UNIT (
    .i_add_sub       (w_o_add_sub),
    .i_32_a          (32'h41200000),
    .i_32_b          ({w_i_data, 15'b0}),
    .o_32_s          (w_o_data),

    .o_ov_flag       (LEDG[3]),
    .o_un_flag       (LEDG[2]) 
);

assign LEDG[0] = w_i_valid;
HEX_block #(
    .SIZE_HEX       (SIZE_7SEG),
    .SIZE_DATA      (SIZE_DATA),
    .TYPE_ANODE     (0) // 0: Common Cathode, 1: Common Anode
) HEX_BLOCK_UNIT (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_hex_en       (w_o_data),
    .i_hex_data     (w_i_hex_en),

    .o_hex_0        (HEX0),
    .o_hex_1        (HEX1),
    .o_hex_2        (HEX2),
    .o_hex_3        (HEX3),
    .o_hex_4        (HEX4),
    .o_hex_5        (HEX5),
    .o_hex_6        (HEX6),
    .o_hex_7        (HEX7)
);


endmodule
