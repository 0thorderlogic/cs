`timescale 1ns / 1ps

module xnun_tb;

	reg a;
	reg b;

	wire q;

	wire m;
	wire n;
	wire o;
	wire p;

	xnun uut (
		.a(a), 
		.b(b), 
		.m(m), 
		.n(n), 
		.o(o), 
		.p(p), 
		.q(q)
	);

	initial begin
		a = 0;
		b = 0;

		#100;

		a = 0;
		b = 1;

		#100;

		a = 1;
		b = 0;

		#100;

		a = 1;
		b = 1;

		#100;

	end
      
endmodule
