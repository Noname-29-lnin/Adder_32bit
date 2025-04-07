module full_adder(
    input  wire i_a,
    input  wire i_b,
    input  wire i_c,
    output wire o_s,
    output wire o_p,
    output wire o_g
);
    assign o_g = i_a & i_b;
    assign o_p = i_a ^ i_b;
    assign o_s = o_p ^ i_c;
endmodule
