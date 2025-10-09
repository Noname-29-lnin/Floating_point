module SHF_shift_right #(
    parameter SIZE_DATA  = 8,
    parameter SIZE_SHIFT = 3  
)(
    input  logic [SIZE_SHIFT-1:0] i_shift_number,
    input  logic [SIZE_DATA-1:0]  i_data        , 
    output logic [SIZE_DATA-1:0]  o_data          
);

    // ----------------------------
    // Barrel Shifter Right
    // ----------------------------
    logic [SIZE_DATA-1:0] stage_data [SIZE_SHIFT:0];

    assign stage_data[0] = i_data;

    genvar i;
    generate
        for (i = 0; i < SIZE_SHIFT; i = i + 1) begin : GEN_SHIFT_STAGE
            localparam SHIFT_VAL = (1 << i);
            always_comb begin
                if (i_shift_number[i])
                    stage_data[i+1] = { {SHIFT_VAL{1'b0}}, stage_data[i][SIZE_DATA-1:SHIFT_VAL] };
                else
                    stage_data[i+1] = stage_data[i];
            end
        end
    endgenerate

    assign o_data = stage_data[SIZE_SHIFT];

endmodule
