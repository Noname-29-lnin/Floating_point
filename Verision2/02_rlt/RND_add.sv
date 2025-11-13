module RND_add (
    input logic [23:0]     i_data  ,
    input logic                     i_carry ,
    output logic [23:0]    o_data  ,
    output logic                    o_carry  
);

// logic [23:0] w_carry;
// assign w_carry[0] = i_data[0] & i_carry;
// assign o_data[0] = i_data[0] ^ i_carry;

// genvar i;
// generate
//     for(i = 1; i < SIZE_DATA; i++) begin : proc_propage_one
//         RND_propagate RND_P_UNIT (
//             .i_data_1       (i_data[i]),
//             .i_data_0       (i_data[i-1]),
//             .i_carry        (w_carry[i-1]),
//             .o_data         (o_data[i]),
//             .o_carry        (w_carry[i]) 
//         );
//     end
// endgenerate
// assign o_carry = w_carry[23];
    logic [23:0] w_carry;
    assign w_carry[0] = i_carry;
    genvar i;
    generate
        for (i = 1; i < 24; i++) begin : proc_propage_one
            assign w_carry[i] = (&i_data[i-1:0]) & w_carry[0];
        end
    endgenerate
    assign o_data = i_data ^ w_carry;
    assign o_carry = (&i_data) & w_carry[0];

endmodule

// module RND_propagate (
//     input  logic [3:0]  a       ,
//     input  logic        cin     ,
//     output logic [3:0]  sum     ,
//     ouptut logic        o_carry  
// );
//     logic [3:0] w_c;

//     // always_comb begin
//         assign w_c[0] = cin;
//         assign w_c[1] = (a[0] & w_c[0]);
//         assign w_c[2] = (a[1] & a[0] & w_c[0]);
//         assign w_c[3] = (a[2] & a[1] & a[0] & w_c[0]);
//     // end
    
//     assign sum = a ^ w_c;
//     assign o_carry = a[3] & a[2] & a[1] & a[0] & w_c[0];
// endmodule

