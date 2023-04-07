`timescale 1ns / 1ps

module halfsubtractor_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire d;
	wire bout;

	// Bidirs
	wire c;

	halfsubtractor uut (
		.a(a), 
		.b(b), 
		.d(d), 
		.c(c), 
		.bout(bout)
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
	initial 
		$monitor("a = %d b = %d d = %d bout = %d", a, b, d, bout);\
		
endmodule
