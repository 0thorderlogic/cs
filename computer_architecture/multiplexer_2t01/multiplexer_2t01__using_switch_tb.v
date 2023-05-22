module multiplexer_2to1_using_switch_sim;

	reg [1:0] s;
	reg [3:0] a;

	wire d;

	multiplexer_2t01_using_switch uut (
	.s(s),
	.a(a),
	.d(d)
	);

	integer i;

	initial begin
	s = 0;
	a = 4'b1010;
	for(i=1;i<4;i=i+1)
	#100 s=a[i];

	end
	initial
		$monitor("a=%b s=%b d=%b",a,s,d);
endmodule