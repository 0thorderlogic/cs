`timescale 1ns / 1ps

module halfsubtractor(
    input a,
    input b,
    output d,
    inout c,
    output bout
    );

xor(d,a,b);
not(c,a);
and(bout,c,b);

endmodule
