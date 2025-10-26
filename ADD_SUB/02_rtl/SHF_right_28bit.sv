module SHF_right_28bit #(
    parameter SIZE_DATA  = 28,
    parameter SIZE_SHIFT = 5  
)(
    input  logic [SIZE_SHIFT-1:0] i_shift_number,
    input  logic [SIZE_DATA-1:0]  i_data, 
    output logic [SIZE_DATA-1:0]  o_data
);
    logic [SIZE_DATA-1:0] stage [SIZE_SHIFT:0];

    assign stage[0] = i_data;

    genvar i;
    generate
        for (i = 0; i < SIZE_SHIFT; i++) begin : GEN_SHIFT
            localparam SHIFT_AMT = (1 << i);
            always_comb begin
                if (i_shift_number[i])
                    stage[i+1] = { {SHIFT_AMT{1'b0}}, stage[i][SIZE_DATA-1:SHIFT_AMT] };
                else
                    stage[i+1] = stage[i];
            end
        end
    endgenerate

    assign o_data = stage[SIZE_SHIFT];
endmodule
