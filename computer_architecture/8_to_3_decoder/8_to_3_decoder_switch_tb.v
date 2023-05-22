module decoder_3to8_using_switch_sim;
	reg [2:0] s;

	Page | 56
	wire [7:0] d;

	decoder_3to8_using_switch uut (
	.s(s),
	.d(d)
	);
	integer i;
	initial begin

	s = 0;

	#100;
	for(i=1;i<8;i=i+1)
	#100
	s=i;

end
	initial $monitor("s=%b\t d=%b",s,d);
endmodule 