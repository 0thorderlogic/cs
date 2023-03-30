`timescale 1ns / 1ps

module halfadder_tb;
	reg a;
	reg b;

	wire s;
	wire c;

	halfadder uut (
		.a(a), 
		.b(b), 
		.s(s), 
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

endmodule