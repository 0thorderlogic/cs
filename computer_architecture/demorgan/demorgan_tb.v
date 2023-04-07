`timescale 1ns / 1ps

module dm_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire notd;
	wire c;

	// Bidirs
	wire nota;
	wire notb;
	wire d;

	dm uut (
		.a(a), 
		.b(b), 
		.nota(nota), 
		.notb(notb), 
		.d(d), 
		.notd(notd), 
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
	$monitor("a = %d b = %d notd = %d c = %d", a, b, notd, c);
		
endmodule

