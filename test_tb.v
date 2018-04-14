`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:49:23 03/04/2018
// Design Name:   RGB_2_BW_Final
// Module Name:   C:/Users/olaolu-Goke/Desktop/RGB2BW/RGB_2_BW_Final/test_tb.v
// Project Name:  RGB_2_BW_Final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RGB_2_BW_Final
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_tb;

	// Inputs
	reg [7:0] origi_red;
	reg [7:0] origi_green;
	reg [7:0] origi_blue;

	// Outputs
	wire [14:0] intmod_red;

	// Instantiate the Unit Under Test (UUT)
	RGB_2_BW_Final uut (
		.origi_red(origi_red), 
		.origi_green(origi_green), 
		.origi_blue(origi_blue), 
		.intmod_red(intmod_red)
	);

	initial begin
		// Initialize Inputs
		origi_red = 0;
		origi_green = 0;
		origi_blue = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

