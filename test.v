`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:13:14 11/28/2021
// Design Name:   RS
// Module Name:   D:/szdl/RS/test.v
// Project Name:  RS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg S;
	reg R;

	// Outputs
	wire Q;
	wire Qb;

	// Instantiate the Unit Under Test (UUT)
	RS uut (
		.S(S), 
		.R(R), 
		.Q(Q), 
		.Qb(Qb)
	);

	initial begin
		// Initialize Inputs
		S = 1;
		R = 0;

		// Wait 100 ns for global reset to finish
		#100;
      S = 0;
		R = 0;

		// Wait 100 ns for global reset to finish
		#100;
		S = 0;
		R = 1;

		// Wait 100 ns for global reset to finish
		#100;
		S = 1;
		R = 1;

		// Wait 100 ns for global reset to finish
		#100;
		S = 0;
		R = 0;

		// Wait 100 ns for global reset to finish
		#100;
		S = 1;
		R = 0;

		// Wait 100 ns for global reset to finish
		#100;
		S = 0;
		R = 1;

		// Wait 100 ns for global reset to finish
		#100;
		S = 0;
		R = 0;
		// Add stimulus here

	end
      
endmodule

