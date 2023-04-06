`timescale 1ns / 1ps

module fs(
    input a,
    input b,
    input c,
    inout r,
    inout notr,
    inout nota,
	 inout n,
	 inout m,
    output d,
    output bout
    );
xor(r,a,b);
not(nota,a);
xor(d,r,c);
not(notr,r);
and(n,notr,c);
and(m,nota,b);
or(bout,m,n);

endmodule
