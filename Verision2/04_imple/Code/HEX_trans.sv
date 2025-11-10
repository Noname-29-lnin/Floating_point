module HEX_trans #(
    parameter TYPE_ANODE = 1 // 0: Common Cathode, 1: Common Anode
)(
    input  logic [3:0] i_hex_data,
    output logic [6:0] o_hex
);

generate
    // -------------------------------
    // Common Anode type (0 -> LIGHT)
    // -------------------------------
    if (TYPE_ANODE) begin : gen_anode
        always_comb begin
            case (i_hex_data)
                4'h0: o_hex = 7'b1000000;
                4'h1: o_hex = 7'b1111001;
                4'h2: o_hex = 7'b0100100;
                4'h3: o_hex = 7'b0110000;
                4'h4: o_hex = 7'b0011001;
                4'h5: o_hex = 7'b0010010;
                4'h6: o_hex = 7'b0000010;
                4'h7: o_hex = 7'b1111000;
                4'h8: o_hex = 7'b0000000;
                4'h9: o_hex = 7'b0010000;
                4'hA: o_hex = 7'b0001000;
                4'hB: o_hex = 7'b0000011;
                4'hC: o_hex = 7'b1000110;
                4'hD: o_hex = 7'b0100001;
                4'hE: o_hex = 7'b0000110;
                4'hF: o_hex = 7'b0001110;
                default: o_hex = 7'b1111111;
            endcase
        end
    end

    // -------------------------------
    // Common Cathode type (1 -> LIGHT)
    // -------------------------------
    else begin : gen_cathode
        always_comb begin
            case (i_hex_data)
                4'h0: o_hex = 7'b0111111;
                4'h1: o_hex = 7'b0000110;
                4'h2: o_hex = 7'b1011011;
                4'h3: o_hex = 7'b1001111;
                4'h4: o_hex = 7'b1100110;
                4'h5: o_hex = 7'b1101101;
                4'h6: o_hex = 7'b1111101;
                4'h7: o_hex = 7'b0000111;
                4'h8: o_hex = 7'b1111111;
                4'h9: o_hex = 7'b1101111;
                4'hA: o_hex = 7'b1110111;
                4'hB: o_hex = 7'b1111100;
                4'hC: o_hex = 7'b0111001;
                4'hD: o_hex = 7'b1011110;
                4'hE: o_hex = 7'b1111001;
                4'hF: o_hex = 7'b1110001;
                default: o_hex = 7'b0000000;
            endcase
        end
    end
endgenerate

endmodule
