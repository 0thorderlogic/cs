`timescale 1ns / 1ps

module twoistofour_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire ynot;
	wire yone;
	wire ytwo;
	wire ythree;

	// Bidirs
	wire nota;
	wire notb;

	// Instantiate the Unit Under Test (UUT)
	twoistofour uut (
		.a(a), 
		.b(b), 
		.nota(nota), 
		.notb(notb), 
		.ynot(ynot), 
		.yone(yone), 
		.ytwo(ytwo), 
		.ythree(ythree)
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
		$monitor("a = %d b = %d y0 = %d y1 = %d y2 = %d y3 = %d", a,b,ynot, yone, ytwo, ythree);
		
endmodule

