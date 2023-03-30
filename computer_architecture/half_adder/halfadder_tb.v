`timescale 1ns / 1ps

module halfadder_tb;
	// Inputs
	reg a;
	reg b;

	// Outputs
	wire s;
	wire c;

	// Instantiate the Unit Under Test (UUT)
	halfadder uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		// Initialize Inputs
		a = 0;
		b = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		// Initialize Inputs
		a = 1;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		// Initialize Inputs
		a = 1;
		b = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end

endmodule