module ram_4_bit(
	input clk,
	input en,
	input wr,
	input [3:0] di,
	input [4:0] addr,
	output reg [3:0] dout
);
reg[3:0] RAM[31:0];

always@(clk)begin
	if(en)begin
		if(wr)begin
			RAM[addr]<=di;
			end
			dout<=RAM[addr];
		end
	end
endmodule
