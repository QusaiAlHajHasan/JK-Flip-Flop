`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:56:31 04/26/2020
// Design Name:   jk_ff
// Module Name:   D:/Study/2019-2020/Second Semester/CPE433 - Advanced Digital/Home Work 2/JK-FF/JK_TB.v
// Project Name:  JK-FF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: jk_ff
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module JK_TB;

	// Inputs
	reg J;
	reg K;
	reg R;
	reg S;
	reg CE;
	reg CLK;

	// Outputs
	wire Q;

	// Instantiate the Unit Under Test (UUT)
	jk_ff uut (
		.J(J), 
		.K(K), 
		.R(R), 
		.S(S), 
		.CE(CE), 
		.CLK(CLK), 
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		J = 0;
		K = 0;
		R = 0;
		S = 0;
		CE = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#10 R = 1; CLK = 0;
		#10 R = 1; CLK = 1;
		#10 R = 0; S = 1; CLK = 0;
		#10 R = 0; S = 1; CLK = 1;
		#10 R = 0; S = 0; CE = 0; CLK = 0;
		#10 R = 0; S = 0; CE = 0; CLK = 1;
		#10 R = 0; S = 0; CE = 1; J = 0; K = 0; CLK = 0;
		#10 R = 0; S = 0; CE = 1; J = 0; K = 0; CLK = 1;
		#10 R = 0; S = 0; CE = 1; J = 0; K = 1; CLK = 0;
		#10 R = 0; S = 0; CE = 1; J = 0; K = 1; CLK = 1;
		#10 R = 0; S = 0; CE = 1; J = 1; K = 0; CLK = 0;
		#10 R = 0; S = 0; CE = 1; J = 1; K = 0; CLK = 1;
		#10 R = 0; S = 0; CE = 1; J = 1; K = 1; CLK = 0;
		#10 R = 0; S = 0; CE = 1; J = 1; K = 1; CLK = 1;
		$finish;
        
		// Add stimulus here

	end
      
endmodule

