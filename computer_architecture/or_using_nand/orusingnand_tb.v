`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:16:06 04/06/2023
// Design Name:   orusingnand
// Module Name:   C:/users/orusingnand/orusingnand_tb.v
// Project Name:  orusingnand
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: orusingnand
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module orusingnand_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire c;

	// Bidirs
	wire nota;
	wire notb;

	// Instantiate the Unit Under Test (UUT)
	orusingnand uut (
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

