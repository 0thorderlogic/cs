`timescale 1ns / 1ps

module fulladder_tb;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire s;

	// Bidirs
	wire f;
	wire m;
	wire n;
	wire cout;

	fulladder uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.f(f), 
		.m(m), 
		.n(n), 
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