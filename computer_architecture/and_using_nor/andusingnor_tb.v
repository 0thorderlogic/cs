`timescale 1ns / 1ps

module andusingnor_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire c;

	// Bidirs
	wire nota;
	wire notb;

	andfusingnor uut (
		.a(a), 
		.b(b), 
		.nota(nota), 
		.notb(notb), 
		.c(c)
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
	$monitor("a = %d b = %d c = %d", a, b, c);
endmodule

