module carry_select_adder(
    input [31:0] i_a, 
    input [31:0] i_b, 
    output [31:0] o_sum
);

    wire c8, c16, c24;
    wire [7:0] sum_L;

    ripple_carry_adder_8 RCA_L (
        .i_a(i_a[7:0]), .i_b(i_b[7:0]), .i_c(1'b0), .o_sum(sum_L), .o_carry(c8)
    );

    wire [7:0] sum_H0, sum_H1;
    wire c_H0, c_H1;
    ripple_carry_adder_8 RCA_H0 (.i_a(i_a[15:8]), .i_b(i_b[15:8]), .i_c(1'b0), .o_sum(sum_H0), .o_carry(c_H0));
    ripple_carry_adder_8 RCA_H1 (.i_a(i_a[15:8]), .i_b(i_b[15:8]), .i_c(1'b1), .o_sum(sum_H1), .o_carry(c_H1));

    assign o_sum[7:0]   = sum_L;
    assign o_sum[15:8]  = c8 ? sum_H1 : sum_H0;
    assign c16 = c8 ? c_H1 : c_H0;

    wire [7:0] sum_H2_0, sum_H2_1;
    wire c_H2_0, c_H2_1;
    ripple_carry_adder_8 RCA_H2_0 (.i_a(i_a[23:16]), .i_b(i_b[23:16]), .i_c(1'b0), .o_sum(sum_H2_0), .o_carry(c_H2_0));
    ripple_carry_adder_8 RCA_H2_1 (.i_a(i_a[23:16]), .i_b(i_b[23:16]), .i_c(1'b1), .o_sum(sum_H2_1), .o_carry(c_H2_1));

    assign o_sum[23:16] = c16 ? sum_H2_1 : sum_H2_0;
    assign c24 = c16 ? c_H2_1 : c_H2_0;

    wire [7:0] sum_H3_0, sum_H3_1;
    wire c_H3_0, c_H3_1;
    ripple_carry_adder_8 RCA_H3_0 (.i_a(i_a[31:24]), .i_b(i_b[31:24]), .i_c(1'b0), .o_sum(sum_H3_0), .o_carry(c_H3_0));
    ripple_carry_adder_8 RCA_H3_1 (.i_a(i_a[31:24]), .i_b(i_b[31:24]), .i_c(1'b1), .o_sum(sum_H3_1), .o_carry(c_H3_1));

    assign o_sum[31:24] = c24 ? sum_H3_1 : sum_H3_0;
endmodule

module ripple_carry_adder_8 (
    input wire [7:0] i_a, 
    input wire [7:0] i_b, 
    input wire i_c, 
    output wire [7:0] o_sum, 
    output wire o_carry
);
    wire [7:0] carry;

    full_adder FA0 (.i_a(i_a[0]), .i_b(i_b[0]), .i_c(i_c),      .o_s(o_sum[0]), .o_c(carry[0]));
    full_adder FA1 (.i_a(i_a[1]), .i_b(i_b[1]), .i_c(carry[0]), .o_s(o_sum[1]), .o_c(carry[1]));
    full_adder FA2 (.i_a(i_a[2]), .i_b(i_b[2]), .i_c(carry[1]), .o_s(o_sum[2]), .o_c(carry[2]));
    full_adder FA3 (.i_a(i_a[3]), .i_b(i_b[3]), .i_c(carry[2]), .o_s(o_sum[3]), .o_c(carry[3]));
    full_adder FA4 (.i_a(i_a[4]), .i_b(i_b[4]), .i_c(carry[3]), .o_s(o_sum[4]), .o_c(carry[4]));
    full_adder FA5 (.i_a(i_a[5]), .i_b(i_b[5]), .i_c(carry[4]), .o_s(o_sum[5]), .o_c(carry[5]));
    full_adder FA6 (.i_a(i_a[6]), .i_b(i_b[6]), .i_c(carry[5]), .o_s(o_sum[6]), .o_c(carry[6]));
    full_adder FA7 (.i_a(i_a[7]), .i_b(i_b[7]), .i_c(carry[6]), .o_s(o_sum[7]), .o_c(o_carry));
endmodule
