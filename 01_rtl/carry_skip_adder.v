module carry_skip_adder(
    input  wire [31:0] i_a,
    input  wire [31:0] i_b,
    output wire [31:0] o_sum
);
    wire [7:0] group_P;
    wire [7:0] group_Carry;
    wire [31:0] c_internal;

    assign group_Carry[0] = 1'b0;

    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : CSKA_BLOCK
            wire [3:0] a_block = i_a[i*4 +: 4];
            wire [3:0] b_block = i_b[i*4 +: 4];
            wire [3:0] sum_block;
            wire [3:0] carry_block;
            wire [3:0] p_bit;

            ripple_carry_4bit_adder rca (
                .A(a_block),
                .B(b_block),
                .Cin(group_Carry[i]),
                .S(sum_block),
                .Cout_block(carry_block),
                .P_out(p_bit)
            );

            assign o_sum[i*4 +: 4] = sum_block;
            assign group_P[i] = &p_bit;

            if (i < 7) begin
                assign group_Carry[i+1] = group_P[i] ? group_Carry[i] : carry_block[3];
            end
        end
    endgenerate
endmodule

module ripple_carry_4bit_adder(
    input  wire [3:0] A,
    input  wire [3:0] B,
    input  wire       Cin,
    output wire [3:0] S,
    output wire [3:0] Cout_block,
    output wire [3:0] P_out
);
    wire [3:0] carry;

    full_adder FA0 (.i_a(A[0]), .i_b(B[0]), .i_c(Cin),         .o_s(S[0]), .o_c(carry[0]));
    full_adder FA1 (.i_a(A[1]), .i_b(B[1]), .i_c(carry[0]),    .o_s(S[1]), .o_c(carry[1]));
    full_adder FA2 (.i_a(A[2]), .i_b(B[2]), .i_c(carry[1]),    .o_s(S[2]), .o_c(carry[2]));
    full_adder FA3 (.i_a(A[3]), .i_b(B[3]), .i_c(carry[2]),    .o_s(S[3]), .o_c(carry[3]));

    assign Cout_block = carry;
    assign P_out = A ^ B;
endmodule
