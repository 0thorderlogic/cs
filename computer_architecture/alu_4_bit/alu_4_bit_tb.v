module alu_4_bit_sim;

	reg [3:0] a;
	reg [3:0] b;
	reg [1:0] f;

	wire [3:0] y;

	alu_4_bit uut (
	.a(a),
	.b(b),
	.f(f),
	.y(y)
	);
	initial begin

	a = 2'b00;
	b = 2'b01;
	f = 2'b00;
	#100;

	f = 2'b01;
	#100

	f = 2'b10;
	#100

	f = 2'b11;
end
initial
	$monitor("a=%b b=%b f=%b y=%b",a,b,f,y);
endmodule