module carry_lookahead_adder(
    input  wire [31:0] i_a,
    input  wire [31:0] i_b,
    output wire [31:0] o_sum
);
    wire [31:0] carry;
    wire [31:0] P, G;

    // Chia thành 8 nhóm CLA 4-bit
    carry_lookahead_unit CLA0 (.A(i_a[3:0]),   .B(i_b[3:0]),   .C_in(1'b0),      .P(P[3:0]),   .G(G[3:0]),   .Carry(carry[3:0]));
    carry_lookahead_unit CLA1 (.A(i_a[7:4]),   .B(i_b[7:4]),   .C_in(carry[3]),  .P(P[7:4]),   .G(G[7:4]),   .Carry(carry[7:4]));
    carry_lookahead_unit CLA2 (.A(i_a[11:8]),  .B(i_b[11:8]),  .C_in(carry[7]),  .P(P[11:8]),  .G(G[11:8]),  .Carry(carry[11:8]));
    carry_lookahead_unit CLA3 (.A(i_a[15:12]), .B(i_b[15:12]), .C_in(carry[11]), .P(P[15:12]), .G(G[15:12]), .Carry(carry[15:12]));
    carry_lookahead_unit CLA4 (.A(i_a[19:16]), .B(i_b[19:16]), .C_in(carry[15]), .P(P[19:16]), .G(G[19:16]), .Carry(carry[19:16]));
    carry_lookahead_unit CLA5 (.A(i_a[23:20]), .B(i_b[23:20]), .C_in(carry[19]), .P(P[23:20]), .G(G[23:20]), .Carry(carry[23:20]));
    carry_lookahead_unit CLA6 (.A(i_a[27:24]), .B(i_b[27:24]), .C_in(carry[23]), .P(P[27:24]), .G(G[27:24]), .Carry(carry[27:24]));
    carry_lookahead_unit CLA7 (.A(i_a[31:28]), .B(i_b[31:28]), .C_in(carry[27]), .P(P[31:28]), .G(G[31:28]), .Carry(carry[31:28]));

    full_adder FA0  (.i_a(i_a[0]),  .i_b(i_b[0]),  .i_c(1'b0),      .o_s(o_sum[0]),  .o_c());
    full_adder FA1  (.i_a(i_a[1]),  .i_b(i_b[1]),  .i_c(carry[0]),  .o_s(o_sum[1]),  .o_c());
    full_adder FA2  (.i_a(i_a[2]),  .i_b(i_b[2]),  .i_c(carry[1]),  .o_s(o_sum[2]),  .o_c());
    full_adder FA3  (.i_a(i_a[3]),  .i_b(i_b[3]),  .i_c(carry[2]),  .o_s(o_sum[3]),  .o_c());
    full_adder FA4  (.i_a(i_a[4]),  .i_b(i_b[4]),  .i_c(carry[3]),  .o_s(o_sum[4]),  .o_c());
    full_adder FA5  (.i_a(i_a[5]),  .i_b(i_b[5]),  .i_c(carry[4]),  .o_s(o_sum[5]),  .o_c());
    full_adder FA6  (.i_a(i_a[6]),  .i_b(i_b[6]),  .i_c(carry[5]),  .o_s(o_sum[6]),  .o_c());
    full_adder FA7  (.i_a(i_a[7]),  .i_b(i_b[7]),  .i_c(carry[6]),  .o_s(o_sum[7]),  .o_c());
    full_adder FA8  (.i_a(i_a[8]),  .i_b(i_b[8]),  .i_c(carry[7]),  .o_s(o_sum[8]),  .o_c());
    full_adder FA9  (.i_a(i_a[9]),  .i_b(i_b[9]),  .i_c(carry[8]),  .o_s(o_sum[9]),  .o_c());
    full_adder FA10 (.i_a(i_a[10]), .i_b(i_b[10]), .i_c(carry[9]),  .o_s(o_sum[10]), .o_c());
    full_adder FA11 (.i_a(i_a[11]), .i_b(i_b[11]), .i_c(carry[10]), .o_s(o_sum[11]), .o_c());
    full_adder FA12 (.i_a(i_a[12]), .i_b(i_b[12]), .i_c(carry[11]), .o_s(o_sum[12]), .o_c());
    full_adder FA13 (.i_a(i_a[13]), .i_b(i_b[13]), .i_c(carry[12]), .o_s(o_sum[13]), .o_c());
    full_adder FA14 (.i_a(i_a[14]), .i_b(i_b[14]), .i_c(carry[13]), .o_s(o_sum[14]), .o_c());
    full_adder FA15 (.i_a(i_a[15]), .i_b(i_b[15]), .i_c(carry[14]), .o_s(o_sum[15]), .o_c());

endmodule

module carry_lookahead_unit(
    input  wire [3:0] A,
    input  wire [3:0] B,
    input  wire C_in,
    output wire [3:0] P,
    output wire [3:0] G,
    output wire [3:0] Carry
);
    // Tính toán các giá trị Propagate và Generate
    assign P = A ^ B;  // Propagate (P)
    assign G = A & B;  // Generate (G)

    // Tính toán các bit carry thông qua thuật toán C[i] = G[i] + P[i].C[i-1]
    assign Carry[0] = C_in;
    assign Carry[1] = G[0] | (P[0] & C_in);
    assign Carry[2] = G[1] | (P[1] & G[0]) | (P[1] & P[0] & C_in);
    assign Carry[3] = G[2] | (P[2] & G[1]) | (P[2] & P[1] & G[0]) | (P[2] & P[1] & P[0] & C_in);
endmodule
