`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:43:12 02/24/2015 
// Design Name: 
// Module Name:    top 
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
module top(
    input pbi,
    input pbr,
    input rst,
    input clk,
    input clr,
    output winrnd, 
	 output tie,
	 output right
    );
	 
	 
	PBL pbl_1(.pbi(pbi),.pbr(pbr),.rst(rst),.clr(clr),.push(push),.tie(tie),.right(right));
	Synchronizer sync_1(push,clk,rst,sypush);
	OPP opp_1(sypush,clk,rst,winrnd);
	 
	//if(right&winrnd)
	//pushCount();

endmodule
