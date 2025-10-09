module KSA_Black(
  input  logic  i_pj    ,
  input  logic  i_gj    ,
  input  logic  i_pk    ,
  input  logic  i_gk    ,
  output logic  o_g     ,
  output logic  o_p     
);

assign o_g = i_gk | (i_gj & i_pk);
assign o_p = i_pk & i_pj;

endmodule
