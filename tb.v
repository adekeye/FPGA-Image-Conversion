`timescale 1ps / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:38:38 03/04/2018
// Design Name:   RGB_2_BW_Final
// Module Name:   C:/Users/olaolu-Goke/Desktop/RGB2BW/RGB_2_BW_Final/tb.v
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
`define INPUT_FILEPATH "RGBData23.txt"
`define OUTPUT_FILEPATH "ConvertedWins.txt"
module tb;

	// Inputs
	reg [7:0] origi_red;
	reg [7:0] origi_green;
	reg [7:0] origi_blue;
	integer status,i,fid_in,fid_out;
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
		   fid_in  = $fopen(`INPUT_FILEPATH, "r");
			fid_out = $fopen(`OUTPUT_FILEPATH);
			for(i=0;i<16384;i=i+1)
	  begin
		status=$fscanf(fid_in, "%d %d %d", origi_red, origi_green, origi_blue);
           #1; 
         $fwrite(fid_out, "%d\n", intmod_red[14:0]);
			 end
		$fclose(fid_out);
 
	end
      
endmodule

