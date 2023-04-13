`timescale 1ns / 1ps

module xnun(
    input a,
    input b,
    inout m,
    inout n,
    inout o,
    inout p,
    output q
    );

nand(m,a,b);
nand(n,a,m);
nand(o,m,b);
nand(p,n,o);
nand(q,p,p);

endmodule
