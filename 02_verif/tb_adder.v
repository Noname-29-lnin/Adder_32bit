`timescale 1ns/1ps 
module tb_adder();

reg [31:0] a, b;
reg [31:0] sum;

carry_ripple_adder tb_CRA(
    .i_a    (a),
    .i_b    (b),
    .o_sum  (sum)
)

integer i = 0;
integer tb_sum = 0;
integer cont_pass = 0;

initial begin 
    for(i = 0; i < 100; i ++) begin
        a = random%256;
        b = random%256;

        tb_sum = a + b;
        if(sum == tb_sum) begin 
            cont_pass ++;
        end 
        $display("Test CRA %d: %d + %d = %d,    (%s)", i, a, b, (sum == tb_sum) ? "PASS" : "FAIL");
    end
    $display("Finish the test");
    $display("Total PASS: %d,   Total FALSE: %d", cont_pass, 100 - cont_pass);
    #100 $finish;
end

endmodule

