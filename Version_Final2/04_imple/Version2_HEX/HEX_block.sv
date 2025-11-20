module HEX_block #(
    parameter SIZE_HEX   = 7,
    parameter SIZE_DATA  = 32,
    parameter TYPE_ANODE = 1 // 0: Common Cathode, 1: Common Anode
)(
    input  logic                     i_clk,
    input  logic                     i_rst_n,
    input  logic                     i_hex_en,
    input  logic [SIZE_DATA-1:0]     i_hex_data,

    output logic [SIZE_HEX-1:0]      o_hex_0,
    output logic [SIZE_HEX-1:0]      o_hex_1,
    output logic [SIZE_HEX-1:0]      o_hex_2,
    output logic [SIZE_HEX-1:0]      o_hex_3,
    output logic [SIZE_HEX-1:0]      o_hex_4,
    output logic [SIZE_HEX-1:0]      o_hex_5,
    output logic [SIZE_HEX-1:0]      o_hex_6,
    output logic [SIZE_HEX-1:0]      o_hex_7
);

    logic [SIZE_HEX-1:0] w_hex [7:0];
    genvar i;
    generate
        for (i = 0; i < 8; i++) begin : gen_hex
            HEX_trans #(
                .TYPE_ANODE(TYPE_ANODE)
            ) u_hex_trans (
                .i_hex_data(i_hex_data[i*4 +: 4]),
                .o_hex(w_hex[i])
            );
        end
    endgenerate

    logic w_hex_en_0, w_hex_en_1;

    always_ff @( posedge i_clk or negedge i_rst_n ) begin 
        if(~i_rst_n) begin
            w_hex_en_0      <= '0; 
        end else begin
            w_hex_en_0      <= i_hex_en;
        end
    end

    always_ff @( posedge i_clk or negedge i_rst_n ) begin 
        if(~i_rst_n) begin
            w_hex_en_1      <= '0;
        end else begin
            w_hex_en_1      <= w_hex_en_0;
        end
    end

    always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_output_hex
        if (~i_rst_n) begin
            o_hex_0 <= (TYPE_ANODE) ? 7'b1111111 : 7'b0000000;
            o_hex_1 <= (TYPE_ANODE) ? 7'b1111111 : 7'b0000000;
            o_hex_2 <= (TYPE_ANODE) ? 7'b1111111 : 7'b0000000;
            o_hex_3 <= (TYPE_ANODE) ? 7'b1111111 : 7'b0000000;
            o_hex_4 <= (TYPE_ANODE) ? 7'b1111111 : 7'b0000000;
            o_hex_5 <= (TYPE_ANODE) ? 7'b1111111 : 7'b0000000;
            o_hex_6 <= (TYPE_ANODE) ? 7'b1111111 : 7'b0000000;
            o_hex_7 <= (TYPE_ANODE) ? 7'b1111111 : 7'b0000000;
        end 
        else if (w_hex_en_1) begin
            o_hex_0 <= w_hex[0];
            o_hex_1 <= w_hex[1];
            o_hex_2 <= w_hex[2];
            o_hex_3 <= w_hex[3];
            o_hex_4 <= w_hex[4];
            o_hex_5 <= w_hex[5];
            o_hex_6 <= w_hex[6];
            o_hex_7 <= w_hex[7];
        end
    end

endmodule
