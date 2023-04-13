`timescale 1ns / 1ps

module notusingnand_tb;

	reg a;

	wire nota;

	notusingnand uut (
		.a(a), 
		.nota(nota)
	);

	initial begin
		a = 0;

		#100;
		
		a = 1;

		#100;

	end
      
endmodule