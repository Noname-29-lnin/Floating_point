module KSA_Black(
  input  logic  i_pj    , // i_p(j)
  input  logic  i_gj    , // i_g(j)
  input  logic  i_pk    , // i_p(k)
  input  logic  i_gk    , // i_g(k)
  output logic  o_p     , // o_p(i)(j)
  output logic  o_g       // o_p(i)(j)
);

assign o_g = i_gk | (i_gj & i_pk);
assign o_p = i_pk & i_pj;

endmodule
