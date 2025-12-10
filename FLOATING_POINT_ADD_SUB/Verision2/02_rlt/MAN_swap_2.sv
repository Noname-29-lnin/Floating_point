module MAN_swap_2 (
    // input logic                     i_sign_a    ,
    // input logic                     i_sign_b    ,
    input logic [27:0]         i_man_a     ,
    input logic [27:0]         i_man_b     ,

    // i_compare = 1 -> a < b
    input logic                     i_compare   ,

    // output logic                    o_sign_max  ,
    // output logic                    o_sign_min  ,
    output logic [27:0]     o_man_max   ,
    output logic [27:0]     o_man_min   
);

// logic [SIZE_MAN:0] w_a, w_b;
// assign w_a = {i_sign_a, i_man_a};
// assign w_b = {i_sign_b, i_man_b};

// logic [SIZE_MAN:0] w_max, w_min;
assign o_man_max    = i_compare ? i_man_b : i_man_a;
assign o_man_min    = i_compare ? i_man_a : i_man_b;

// assign o_sign_max   = w_max[SIZE_MAN];
// assign o_sign_min   = w_min[SIZE_MAN];
// assign o_man_max    = w_max[23:0];
// assign o_man_min    = w_min[23:0];

endmodule
