`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:12:10 11/28/2021 
// Design Name: 
// Module Name:    RS 
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
module RS(S,R,Q,Qb);
	input R,S;
	output Q,Qb;
	reg Q,Qb;
	always@(R or S)
	begin
		if(R&(~S))
		begin
			Q<=0;
			Qb<=1;
		end
		else if((~R)&S)
		begin
			Q<=1;
			Qb<=0;
		end
		else if(R&S)
		begin
			Q<=1;
			Qb<=1;
		end
		else
		begin
			Q<=Q;
			Qb<=Qb;
		end
	end
endmodule
