module SUM_cla4bit (
    input  logic [3:0]  a,
    input  logic [3:0]  b,
    input  logic        cin,
    output logic [3:0]  sum,
    output logic        cout,
    output logic        o_p,
    output logic        o_g
);
    logic [3:0] g, p;
    logic [3:0] c;
    
    assign g = a & b;
    assign p = a ^ b;

    assign c[0] = cin;
    assign c[1] = g[0] | (p[0] & c[0]);
    assign c[2] = g[1] | (p[1] & g[0]) | (p[1] & p[0] & c[0]);
    assign c[3] = g[2] | (p[2] & g[1]) | (p[2] & p[1] & g[0]) 
                         | (p[2] & p[1] & p[0] & c[0]);

    assign cout = g[3] | (p[3] & c[3]);

    assign sum = p ^ c; // sum_i = p_i ^ c_i

    assign o_p = p[3];
    assign o_g = g[3];

endmodule