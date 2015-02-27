`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:55:13 02/24/2015 
// Design Name: 
// Module Name:    top_tb 
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
module top_tb;
	
	reg pbi, pbr, rst, clr, clk;
	wire winrnd,right,tie;
	
	
	//clock
	always #20  clk <= ~clk;
	
	initial begin
	//initialize 
	pbi = 0;
	pbr = 0;
	rst = 0;
	clr = 0;
	clk = 0;
	
	
	@(posedge clk); #1;	// waits for a clock edge, then moves just past it
	rst = 1;				// put the system in reset
	clr = 1;
		
	@(posedge clk); #1;	
	rst = 0;
	clr = 0;
	
	repeat(10) @(posedge clk); #1;
	pbr=1;
	repeat(6) @(posedge clk); #1;
	pbr=0;
	
	@(posedge clk); #1;		
	clr = 1;				
		
	@(posedge clk); #3;		
	clr = 0;
	
	repeat(10) @(posedge clk); #1;
	pbi=1;
	repeat(6) @(posedge clk); #1;
	pbi=0;
	
	@(posedge clk); #1;		
	clr = 1;				
		
	@(posedge clk); #3;		
	clr = 0;
	
	repeat(10) @(posedge clk); #1;
	pbi=1;
	pbr=1;
	repeat(6) @(posedge clk); #1;
	pbi=0;
	pbr=0;
	
	@(posedge clk); #1;		
	clr = 1;				
		
	@(posedge clk); #3;		
	clr = 0;
	
	repeat(20) @(posedge clk);
	$finish;
	end
	
	//instantiate
	top topinst(.pbi(pbi), .pbr(pbr),.rst(rst),.clk(clk),.clr(clr),.winrnd(winrnd),.tie(tie),.right(right));
	
endmodule
	
