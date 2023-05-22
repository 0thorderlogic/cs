module adder_8_bit_sim;

	reg [7:0] a;
	reg [7:0] b;

	wire co;
	wire [7:0] s;

	adder_8_bit uut (
	.a(a),
	.b(b),
	.co(co),
	.s(s)
	);
	initial begin

	a = 0;
	b = 0;

	#100;

	a=8'b11110000;
	b=8'b00001111;

	end
initial
	$monitor("a=%b b=%b co=%b s=%b",a,b,co,s);
endmodule
