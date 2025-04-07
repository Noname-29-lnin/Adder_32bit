module kogge_stone_adder(
    input  wire [31:0] i_a,
    input  wire [31:0] i_b,
    output wire [31:0] o_sum
);
    wire [31:0] G, P;         // Generate & Propagate
    wire [31:0] C;            // Carry (C[0] là carry-in = 0)

    assign P = i_a ^ i_b;
    assign G = i_a & i_b;

    wire [31:0] G1, P1;
    wire [31:0] G2, P2;
    wire [31:0] G3, P3;
    wire [31:0] G4, P4;
    wire [31:0] G5, P5;

    genvar i;

    // Stage 1: Distance = 1
    generate
        for (i = 0; i < 32; i = i + 1) begin
            if (i == 0) begin
                assign G1[i] = G[i];
                assign P1[i] = P[i];
            end else begin
                assign G1[i] = G[i] | (P[i] & G[i - 1]);
                assign P1[i] = P[i] & P[i - 1];
            end
        end
    endgenerate

    // Stage 2: Distance = 2
    generate
        for (i = 0; i < 32; i = i + 1) begin
            if (i < 2) begin
                assign G2[i] = G1[i];
                assign P2[i] = P1[i];
            end else begin
                assign G2[i] = G1[i] | (P1[i] & G1[i - 2]);
                assign P2[i] = P1[i] & P1[i - 2];
            end
        end
    endgenerate

    // Stage 3: Distance = 4
    generate
        for (i = 0; i < 32; i = i + 1) begin
            if (i < 4) begin
                assign G3[i] = G2[i];
                assign P3[i] = P2[i];
            end else begin
                assign G3[i] = G2[i] | (P2[i] & G2[i - 4]);
                assign P3[i] = P2[i] & P2[i - 4];
            end
        end
    endgenerate

    // Stage 4: Distance = 8
    generate
        for (i = 0; i < 32; i = i + 1) begin
            if (i < 8) begin
                assign G4[i] = G3[i];
                assign P4[i] = P3[i];
            end else begin
                assign G4[i] = G3[i] | (P3[i] & G3[i - 8]);
                assign P4[i] = P3[i] & P3[i - 8];
            end
        end
    endgenerate

    // Stage 5: Distance = 16
    generate
        for (i = 0; i < 32; i = i + 1) begin
            if (i < 16) begin
                assign G5[i] = G4[i];
                assign P5[i] = P4[i];
            end else begin
                assign G5[i] = G4[i] | (P4[i] & G4[i - 16]);
                assign P5[i] = P4[i] & P4[i - 16];
            end
        end
    endgenerate

    // Carry calculation
    assign C[0] = 1'b0; // carry-in = 0
    generate
        for (i = 1; i < 32; i = i + 1) begin
            assign C[i] = G5[i - 1];
        end
    endgenerate

    // Final sum
    assign o_sum = P ^ C;
endmodule
