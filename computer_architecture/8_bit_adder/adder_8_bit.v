module adder_8_bit(
	input [7:0] a,
	input [7:0] b,
	output co,
	output [7:0] s
	);
	
	assign{co,s}=a+b;

endmodule
