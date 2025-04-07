module carry_lookahead_adder(
    input  wire [31:0] i_a,
    input  wire [31:0] i_b,
    output wire [31:0] o_sum
);

    wire [31:0] g, p;    // generate và propagate
    wire [31:0] c;       // carry
    wire        c32, P, G;

    // Sinh tín hiệu G, P và tính tổng từng bit
    genvar i;
    generate
        for(i = 0; i < 32; i = i + 1) begin : gen_fulladder
            full_adder FA (
                .i_a(i_a[i]),
                .i_b(i_b[i]),
                .i_c((i == 0) ? 1'b0 : c[i-1]),
                .o_s(o_sum[i]),
                .o_p(p[i]),
                .o_g(g[i])
            );
        end
    endgenerate

    // Tính toàn bộ carry bits
    carry_lookahead_32bit_unit CLA32 (
        .i_c0(1'b0),
        .i_p(p),
        .i_g(g),
        .o_c(c),
        .o_c32(c32),
        .o_p(P),
        .o_g(G)
    );

endmodule


module carry_lookahead_32bit_unit(
    input  wire        i_c0,
    input  wire [31:0] i_p,
    input  wire [31:0] i_g,
    output wire [31:0] o_c,   // C[0] = C1, C[31] = C32
    output wire        o_c32, // Carry out cuối cùng
    output wire        o_p,   // Propagate tổng thể
    output wire        o_g    // Generate tổng thể
);

    assign o_c[0] = i_g[0] | (i_p[0] & i_c0);

    genvar i;
    generate
        for(i = 1; i < 32; i = i + 1) begin : gen_carry
            assign o_c[i] = i_g[i] | (i_p[i] & o_c[i-1]);
        end
    endgenerate

    assign o_c32 = o_c[31];
    assign o_p = &i_p; // Tất cả các bits đều propagate
    
    // Tính toán Generate tổng thể theo cách đệ quy
    wire [31:0] g_level [5:0]; // Các mức cho tính toán tree
    wire [31:0] p_level [5:0];
    
    // Khởi tạo level 0
    assign g_level[0] = i_g;
    assign p_level[0] = i_p;
    
    // Tính toán theo cây nhị phân
    genvar k;
    generate
        for(k = 0; k < 5; k = k + 1) begin : gen_tree
            for(i = 0; i < 32/(1 << (k+1)); i = i + 1) begin : gen_level
                assign p_level[k+1][i] = p_level[k][2*i+1] & p_level[k][2*i];
                assign g_level[k+1][i] = g_level[k][2*i+1] | (p_level[k][2*i+1] & g_level[k][2*i]);
            end
        end
    endgenerate
    
    assign o_g = g_level[5][0]; // Kết quả cuối cùng

endmodule

// module carry_lookahead_adder(
//     input  wire [31:0] i_a,
//     input  wire [31:0] i_b,
//     output wire [31:0] o_sum
// );
//     wire [31:0] P, G, C;
//     
//     // Tính toán Propagate (P) và Generate (G)
//     assign P = i_a ^ i_b; // P[i] = A[i] XOR B[i]
//     assign G = i_a & i_b; // G[i] = A[i] AND B[i]
//     
//     // Tính toán Carry C[i] = G[i-1] + P[i-1] * C[i-1]
//     assign C[0] = 1'b0; // Carry đầu vào
//     assign C[1] = G[0] | (P[0] & C[0]);
//     assign C[2] = G[1] | (P[1] & C[1]);
//     assign C[3] = G[2] | (P[2] & C[2]);
//     assign C[4] = G[3] | (P[3] & C[3]);
//     assign C[5] = G[4] | (P[4] & C[4]);
//     assign C[6] = G[5] | (P[5] & C[5]);
//     assign C[7] = G[6] | (P[6] & C[6]);
//     assign C[8] = G[7] | (P[7] & C[7]);
//     assign C[9] = G[8] | (P[8] & C[8]);
//     assign C[10] = G[9] | (P[9] & C[9]);
//     assign C[11] = G[10] | (P[10] & C[10]);
//     assign C[12] = G[11] | (P[11] & C[11]);
//     assign C[13] = G[12] | (P[12] & C[12]);
//     assign C[14] = G[13] | (P[13] & C[13]);
//     assign C[15] = G[14] | (P[14] & C[14]);
//     assign C[16] = G[15] | (P[15] & C[15]);
//     assign C[17] = G[16] | (P[16] & C[16]);
//     assign C[18] = G[17] | (P[17] & C[17]);
//     assign C[19] = G[18] | (P[18] & C[18]);
//     assign C[20] = G[19] | (P[19] & C[19]);
//     assign C[21] = G[20] | (P[20] & C[20]);
//     assign C[22] = G[21] | (P[21] & C[21]);
//     assign C[23] = G[22] | (P[22] & C[22]);
//     assign C[24] = G[23] | (P[23] & C[23]);
//     assign C[25] = G[24] | (P[24] & C[24]);
//     assign C[26] = G[25] | (P[25] & C[25]);
//     assign C[27] = G[26] | (P[26] & C[26]);
//     assign C[28] = G[27] | (P[27] & C[27]);
//     assign C[29] = G[28] | (P[28] & C[28]);
//     assign C[30] = G[29] | (P[29] & C[29]);
//     assign C[31] = G[30] | (P[30] & C[30]);
//     
//     // Tính tổng đầu ra
//     assign o_sum = P ^ C;
//     
// endmodule
