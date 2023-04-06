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

	// Instantiate the Unit Under Test (UUT)
	halfsubtractor uut (
		.a(a), 
		.b(b), 
		.d(d), 
		.c(c), 
		.bout(bout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
       
		 		// Initialize Inputs
		a = 0;
		b = 1;
		// Wait 100 ns for global reset to finish

		#100;
		
				// Initialize Inputs
		a = 1;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
				// Initialize Inputs
		a = 1;
		b = 1;

		// Wait 100 ns for global reset to finish
		#100;
		 
		// Add stimulus here

	end
	initial 
		$monitor("a = %d b = %d d = %d bout = %d", a, b, d, bout);\
		
endmodule
