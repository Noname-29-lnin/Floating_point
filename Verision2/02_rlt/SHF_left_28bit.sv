module SHF_left_28bit (
    input  logic [4:0] i_shift_number,
    input  logic [27:0]  i_data, 
    output logic [27:0]  o_data
);

localparam  SIZE_DATA  = 28;
localparam  SIZE_SHIFT = 5 ;

    logic [SIZE_DATA-1:0] stage [SIZE_SHIFT:0];

    assign stage[0] = i_data;

    genvar i;
    generate
        for (i = 0; i < SIZE_SHIFT; i++) begin : GEN_SHIFT
            localparam SHIFT_AMT = (1 << i);
            always_comb begin
                if (i_shift_number[i])
                    stage[i+1] = { stage[i][SIZE_DATA-1-SHIFT_AMT:0], {SHIFT_AMT{1'b0}} };
                else
                    stage[i+1] = stage[i];
            end
        end
    endgenerate

    assign o_data = stage[SIZE_SHIFT];
endmodule
