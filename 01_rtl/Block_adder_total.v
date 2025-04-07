module Block_adder_total(
    input [31:0]           i_a     ,
    input [31:0]           i_b     ,
    output wire [31:0]     o_CRA   ,
    output wire [31:0]     o_CLA   ,
    output wire [31:0]     o_CSA   ,
    output wire [31:0]     o_CSKA  ,
    output wire [31:0]     o_KSA
);

carry_ripple_adder CRA(
    .i_a    (i_a),
    .i_b    (i_b),
    .o_sum  (o_CRA)
);

carry_lookahead_adder CLA(
    .i_a        (i_a),
    .i_b        (i_b),
    .o_sum      (o_CLA)
);

carry_select_adder CSA(
    .i_a        (i_a),
    .i_b        (i_b),
    .o_sum      (o_CSA)
);

carry_skip_adder CSKA(
    .i_a        (i_a),
    .i_b        (i_b),
    .o_sum      (o_CSKA)
);

kogge_stone_adder KSA(
    .i_a        (i_a),
    .i_b        (i_b),
    .o_sum      (o_KSA)
);

endmodule
