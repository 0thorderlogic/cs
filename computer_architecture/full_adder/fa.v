`timescale 1ns / 1ps

module fa(
    input a,
    input b,
    input c,
    inout m,
    inout n,
    inout o,
    inout p,
	 inout q,
	 inout t,
    inout r,
    output s,
    output cout
    );

nand(m,a,b);
nand(n,m,a);
nand(o,m,b);
nand(p,o,n);
nand(r,p,c);
nand(t,p,r);
nand(q,r,c);
nand(s,t,q);
nand(cout,r,m);

endmodule