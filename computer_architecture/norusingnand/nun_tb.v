`timescale 1ns / 1ps

module nun_tb;

	reg a;
	reg b;

	wire f;

	wire m;
	wire n;
	wire o;

	nun uut (
		.a(a), 
		.b(b), 
		.m(m), 
		.n(n), 
		.o(o), 
		.f(f)
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