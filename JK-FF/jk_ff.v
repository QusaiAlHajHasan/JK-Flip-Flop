`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:49 04/26/2020 
// Design Name: 
// Module Name:    jk_ff 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module jk_ff(J, K, R, S, CE, CLK, Q);

input J, K, R, S, CE, CLK;
output reg Q;

initial
begin
Q = 0;
end

always @(posedge CLK)
begin
	if(R == 1)
		Q = 0;
	else
		if(S == 1)
			Q = 1;
		else
			if(CE == 1)
				if(J == 0 && K == 0)
					Q = Q;
				else if(J == 0 && K == 1)
					Q = 0;
				else if(J == 1 && K == 0)
					Q = 1;
				else
					Q = ~Q;
			else
				Q = Q;
end

endmodule
