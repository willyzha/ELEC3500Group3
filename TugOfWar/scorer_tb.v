`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:15:37 03/02/2015 
// Design Name: 
// Module Name:    scorer_tb 
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
module scorer_tb;
	reg pbl, pbr, rst, clr, clk;
	reg LEDS_ON, winspeed, speed_right, speed_tie, fake;
	wire [6:0] score, fake_score;
	wire winrnd,right,tie;
	//instantiate
	top top_inst(.pbi(pbl), .pbr(pbr),.rst(rst),.clk(clk),.clr(clr),.winrnd(winrnd),.tie(tie),.right(right));
	
	scorer scorer_inst(.winrnd(winrnd), 
							.right(right), 
							.leds_on(LEDS_ON), 
							.tie(tie), 
							.clk(clk), 
							.rst(rst), 
							.fake(fake), 
							.score(score), 
							.fake_score(fake_score), 
							.speed_tie(speed_tie), 
							.speed_right(speed_right), 
							.winspeed(winspeed));

	//clock
	always #20 clk <= ~clk;
	
		initial begin
		LEDS_ON=1;
		winspeed=0;
		speed_right=0;
		speed_tie=0;
		fake=0;
		clk=0;
		rst=0;
		pbl=0;
		pbr=0;
		
		@(posedge clk); #1;
		rst = 1;
		clr = 1;
		@(posedge clk); #1;
		rst = 0;
		clr = 0;		
		repeat(4) @(posedge clk);
		
		//N to L1
		repeat(4) @(posedge clk); #1;
		pbl=1;
		repeat(2) @(posedge clk); #1;
		pbl=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//L1 to L2
		repeat(4) @(posedge clk); #1;
		pbl=1;
		repeat(2) @(posedge clk); #1;
		pbl=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//L2 to L3 (a)
		repeat(4) @(posedge clk); #1;
		pbl=1;
		repeat(2) @(posedge clk); #1;
		pbl=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//L3 to L2
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//L2 to L1 (b)
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//L1 to N
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//N to R1
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//R1 to R2
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//R2 to R3
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		
		//R3 to R1 (c)
		repeat(4) @(posedge clk); #1;
		pbl=1;
		repeat(2) @(posedge clk); #1;
		pbl=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//R1 to R2
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//R2 to R3
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//R3 to R2 (d) Jumping the light
		LEDS_ON = 0;
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		LEDS_ON = 1;
		
		//R2 to R3
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		//R2 to RWIN (e) win
		repeat(4) @(posedge clk); #1;
		pbr=1;
		repeat(2) @(posedge clk); #1;
		pbr=0;
		
		repeat(3) @(posedge clk); #1;
		clr = 1;
		@(posedge clk); #1;
		clr = 0;
		
		repeat(20) @(posedge clk);
		$finish;
		
	end
	

endmodule
