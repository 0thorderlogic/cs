`timescale 1ns / 1ps

module fa_tb;

	reg a;
	reg b;
	reg c;

	wire s;
	wire cout;

	wire m;
	wire n;
	wire o;
	wire p;
	wire q;
	wire t;
	wire r;

	fa uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.m(m), 
		.n(n), 
		.o(o), 
		.p(p), 
		.q(q), 
		.t(t), 
		.r(r), 
		.s(s), 
		.cout(cout)
	);

	initial begin

		a = 0;
		b = 0;
		c = 0;

		#100;
        
		a = 0;
		b = 0;
		c = 1;

		#100;
        
		a = 0;
		b = 1;
		c = 0;

		#100;
        
		a = 0;
		b = 1;
		c = 1;

		#100;
        
		a = 1;
		b = 0;
		c = 0;

		#100;
        
		a = 1;
		b = 0;
		c = 1;

		#100;
        
		a = 1;
		b = 1;
		c = 0;

		#100;
        
		a = 1;
		b = 1;
		c = 1;

		#100;

	end
      
endmodule