module ram_4_bit_sim;
	reg clk;
	reg en;
	reg wr;
	reg [3:0] di;
	reg [4:0] addr;
	
	wire [3:0] dout;
	
	ram_4_bit uut (
	.clk(clk),
	.en(en),
	.wr(wr),
	.di(di),
	.addr(addr),
	.dout(dout)
	);
	initial begin
	
	clk = 0;
	en = 1;
	wr = 0;
	di = 0;
	addr = 4'b0000;
	
	#100;
	Page | 66
	clk = 1;
	wr = 1;
	di = 4'b0110;
	#100;
	
	clk = 0;
	di = 4'b1110;
	addr = 4'b0001;
	#100;
	
	clk = 1;
	wr = 0;
	addr = 4'b0000;
	#100;
	clk = 0;
	addr = 4'b0001;
	end
	initial
		$monitor("Enable=%b Write=%b Address=%b Data=%b",en,wr,addr,(wr)?di:dout);
endmodule