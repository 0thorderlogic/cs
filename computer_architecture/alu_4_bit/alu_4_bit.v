module alu_4_bit(
	input [3:0] a,
	input [3:0] b,
	input [1:0] f,
	output reg [3:0] y
);

always@(a or b or f)
begin
case(f)
	2'b00:y=a+b;
	2'b01:y=a-b;
	2'b10:y=a&b;
	2'b11:y=a^b;
	default:y=4'b0000;
endcase
	end
endmodule