`timescale 1ns / 1ps

module xun_tb;

	reg a;
	reg b;

	wire p;

	wire m;
	wire n;
	wire o;

	xun uut (
		.a(a), 
		.b(b), 
		.m(m), 
		.n(n), 
		.o(o), 
		.p(p)
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