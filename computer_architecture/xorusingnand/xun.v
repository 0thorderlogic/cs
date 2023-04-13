`timescale 1ns / 1ps

module xun(
    input a,
    input b,
    inout m,
    inout n,
    inout o,
    output p
    );

nand(m,a,b);
nand(n,a,m);
nand(o,m,b);
nand(p,n,o);

endmodule