`timescale 1ns / 1ps

module fs_tb;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire d;
	wire bout;

	// Bidirs
	wire r;
	wire notr;
	wire nota;
	wire n;
	wire m;

	// Instantiate the Unit Under Test (UUT)
	fs uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.r(r), 
		.notr(notr), 
		.nota(nota), 
		.n(n), 
		.m(m), 
		.d(d), 
		.bout(bout)
	);

	initial begin
		// Initialize Inputs
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
      
	initial 
	$monitor("a = %d b = %d c = %d d = %d bout = %d", a, b, c, d, bout);
	
	endmodule

