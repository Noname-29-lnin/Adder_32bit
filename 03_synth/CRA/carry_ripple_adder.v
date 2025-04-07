module carry_ripple_adder(
    input  wire [31:0] i_a,
    input  wire [31:0] i_b,
    output wire [31:0] o_sum
);
    wire [31:0] carry;

    genvar i;
    generate
        for (i = 0; i < 32; i = i + 1) begin : ripple_adder
            if (i == 0) begin
                full_adder FA (
                    .i_a(i_a[i]),
                    .i_b(i_b[i]),
                    .i_c(1'b0),
                    .o_s(o_sum[i]),
                    .o_c(carry[i])
                );
            end else begin
                full_adder FA (
                    .i_a(i_a[i]),
                    .i_b(i_b[i]),
                    .i_c(carry[i - 1]),
                    .o_s(o_sum[i]),
                    .o_c(carry[i])
                );
            end
        end
    endgenerate
endmodule
