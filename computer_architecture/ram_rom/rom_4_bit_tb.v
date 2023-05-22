module rom_4_bit_sim;

	reg clk;
	reg en;
	reg [3:0] addr;

	wire [3:0] data;

	rom_4_bit uut (
		.clk(clk),
		.en(en),
		.addr(addr),
		.data(data)
	);

	initial begin

	clk = 0;
	en = 1;
	addr = 4'b0000;
	#100;

	clk = 1;
	addr = 4'b0001;
	#100;

	clk = 0;
	addr = 4'b0010;
	#100;

	clk = 1;
	en = 0;
	addr = 4'b0001;
	#100;

	clk = 0;
	en = 1;
	addr = 4'b1111;
	end
		initial
	$monitor("Clock=%b Enable=%b Address=%b Data=%b",clk,en,addr,data);
endmodule