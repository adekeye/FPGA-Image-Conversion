`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: AdeKEYE Adegoke 
// 
// Create Date:    13:36:04 03/04/2018 
// Design Name: 
// Module Name:    RGB_2_BW_Final 
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
module RGB_2_BW_Final(
input [7:0] origi_red,
input [7:0] origi_green,
input [7:0] origi_blue,

	
	
	   output wire [14:0] intmod_red,
    	wire [7:0] mod_red,
    	wire [7:0] mod_green,
    	wire [7:0] mod_blue
		
		//wire [7:0] mod_red,wire [7:0] mod_green,wire [7:0] mod_blue,
    );

			assign mod_red = (origi_red >> 3) + (origi_red >> 4) + (origi_red >> 5);
			assign mod_green = ((origi_green >> 1) + (origi_green >> 3)+(origi_green >> 4)+(origi_green >> 5));
			assign mod_blue = (origi_blue >> 4);
	      assign intmod_red = mod_red + mod_green + mod_blue;	
	
endmodule
