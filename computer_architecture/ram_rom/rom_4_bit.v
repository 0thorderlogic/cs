module rom_4_bit(
	input clk,
	input en,
	input [3:0] addr,
	output reg [3:0] data
);
always@(clk)begin
	if(en)begin
		case(addr)
			4'b0000:data<=4'b0010;
			4'b0001:data<=4'b1100;
			4'b0010:data<=4'b1111;
			default:data<=4'b0000;
		endcase
	end
end
endmodule