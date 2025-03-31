module carry_ripple_adder(
    input [31:0] i_a,
    input [31:0] i_b,
    output wire [31:0] o_sum
);
    wire [31:0] carry;
    
    full_adder FA0 (.i_a(i_a[0]), .i_b(i_b[0]), .i_c(1'b0), .o_s(o_sum[0]), .o_c(carry[0]));
    full_adder FA1 (.i_a(i_a[1]), .i_b(i_b[1]), .i_c(carry[0]), .o_s(o_sum[1]), .o_c(carry[1]));
    full_adder FA2 (.i_a(i_a[2]), .i_b(i_b[2]), .i_c(carry[1]), .o_s(o_sum[2]), .o_c(carry[2]));
    full_adder FA3 (.i_a(i_a[3]), .i_b(i_b[3]), .i_c(carry[2]), .o_s(o_sum[3]), .o_c(carry[3]));
    full_adder FA4 (.i_a(i_a[4]), .i_b(i_b[4]), .i_c(carry[3]), .o_s(o_sum[4]), .o_c(carry[4]));
    full_adder FA5 (.i_a(i_a[5]), .i_b(i_b[5]), .i_c(carry[4]), .o_s(o_sum[5]), .o_c(carry[5]));
    full_adder FA6 (.i_a(i_a[6]), .i_b(i_b[6]), .i_c(carry[5]), .o_s(o_sum[6]), .o_c(carry[6]));
    full_adder FA7 (.i_a(i_a[7]), .i_b(i_b[7]), .i_c(carry[6]), .o_s(o_sum[7]), .o_c(carry[7]));
    full_adder FA8 (.i_a(i_a[8]), .i_b(i_b[8]), .i_c(carry[7]), .o_s(o_sum[8]), .o_c(carry[8]));
    full_adder FA9 (.i_a(i_a[9]), .i_b(i_b[9]), .i_c(carry[8]), .o_s(o_sum[9]), .o_c(carry[9]));
    full_adder FA10 (.i_a(i_a[10]), .i_b(i_b[10]), .i_c(carry[9]), .o_s(o_sum[10]), .o_c(carry[10]));
    full_adder FA11 (.i_a(i_a[11]), .i_b(i_b[11]), .i_c(carry[10]), .o_s(o_sum[11]), .o_c(carry[11]));
    full_adder FA12 (.i_a(i_a[12]), .i_b(i_b[12]), .i_c(carry[11]), .o_s(o_sum[12]), .o_c(carry[12]));
    full_adder FA13 (.i_a(i_a[13]), .i_b(i_b[13]), .i_c(carry[12]), .o_s(o_sum[13]), .o_c(carry[13]));
    full_adder FA14 (.i_a(i_a[14]), .i_b(i_b[14]), .i_c(carry[13]), .o_s(o_sum[14]), .o_c(carry[14]));
    full_adder FA15 (.i_a(i_a[15]), .i_b(i_b[15]), .i_c(carry[14]), .o_s(o_sum[15]), .o_c(carry[15]));
    full_adder FA16 (.i_a(i_a[16]), .i_b(i_b[16]), .i_c(carry[15]), .o_s(o_sum[16]), .o_c(carry[16]));
    full_adder FA17 (.i_a(i_a[17]), .i_b(i_b[17]), .i_c(carry[16]), .o_s(o_sum[17]), .o_c(carry[17]));
    full_adder FA18 (.i_a(i_a[18]), .i_b(i_b[18]), .i_c(carry[17]), .o_s(o_sum[18]), .o_c(carry[18]));
    full_adder FA19 (.i_a(i_a[19]), .i_b(i_b[19]), .i_c(carry[18]), .o_s(o_sum[19]), .o_c(carry[19]));
    full_adder FA20 (.i_a(i_a[20]), .i_b(i_b[20]), .i_c(carry[19]), .o_s(o_sum[20]), .o_c(carry[20]));
    full_adder FA21 (.i_a(i_a[21]), .i_b(i_b[21]), .i_c(carry[20]), .o_s(o_sum[21]), .o_c(carry[21]));
    full_adder FA22 (.i_a(i_a[22]), .i_b(i_b[22]), .i_c(carry[21]), .o_s(o_sum[22]), .o_c(carry[22]));
    full_adder FA23 (.i_a(i_a[23]), .i_b(i_b[23]), .i_c(carry[22]), .o_s(o_sum[23]), .o_c(carry[23]));
    full_adder FA24 (.i_a(i_a[24]), .i_b(i_b[24]), .i_c(carry[23]), .o_s(o_sum[24]), .o_c(carry[24]));
    full_adder FA25 (.i_a(i_a[25]), .i_b(i_b[25]), .i_c(carry[24]), .o_s(o_sum[25]), .o_c(carry[25]));
    full_adder FA26 (.i_a(i_a[26]), .i_b(i_b[26]), .i_c(carry[25]), .o_s(o_sum[26]), .o_c(carry[26]));
    full_adder FA27 (.i_a(i_a[27]), .i_b(i_b[27]), .i_c(carry[26]), .o_s(o_sum[27]), .o_c(carry[27]));
    full_adder FA28 (.i_a(i_a[28]), .i_b(i_b[28]), .i_c(carry[27]), .o_s(o_sum[28]), .o_c(carry[28]));
    full_adder FA29 (.i_a(i_a[29]), .i_b(i_b[29]), .i_c(carry[28]), .o_s(o_sum[29]), .o_c(carry[29]));
    full_adder FA30 (.i_a(i_a[30]), .i_b(i_b[30]), .i_c(carry[29]), .o_s(o_sum[30]), .o_c(carry[30]));
    full_adder FA31 (.i_a(i_a[31]), .i_b(i_b[31]), .i_c(carry[30]), .o_s(o_sum[31]), .o_c(carry[31]));

endmodule
