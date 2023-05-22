module multiplexer_2t01_using_switch(
	input [1:0] s,
	input [3:0] a,
	output reg d
);
always@(s)
case(s)
	0:d=a[0];
	1:d=a[1];
	2:d=a[2];
	3:d=a[3];

	endcase

endmodule