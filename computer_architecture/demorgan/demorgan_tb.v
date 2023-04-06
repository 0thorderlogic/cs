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

	// Instantiate the Unit Under Test (UUT)
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
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;

		a = 0;
		b = 1;

		// Wait 100 ns for global reset to finish
		#100;

		a = 1;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;

		a = 1;
		b = 1;

		// Wait 100 ns for global reset to finish
		#100;

		// Add stimulus here

	end
      
	initial 
	$monitor("a = %d b = %d notd = %d c = %d", a, b, notd, c);
		
endmodule

