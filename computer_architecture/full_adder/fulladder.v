`timescale 1ns / 1ps

module fulladder(
    input a,
    input b,
    input c,
    inout f,
    inout m,
    inout n,
    output s,
    inout cout
    );
	 xor(f,a,b);
	 xor(s,f,c);
	 and(m,f,c);
	 and(n,a,b);
	 or(cout,m,n);

endmodule

// software in lab used is called Xilinx Vivado