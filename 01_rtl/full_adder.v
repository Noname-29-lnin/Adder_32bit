module full_adder(
    input   i_a,
    input   i_b,
    input   i_c,
    
    output  o_s,
    output  o_c
);

assign o_s = i_a ^ i_b ^ i_c;
assign o_c = (i_a & i_b) | (i_a & i_c) | (i_b & i_c);

endmodule 

