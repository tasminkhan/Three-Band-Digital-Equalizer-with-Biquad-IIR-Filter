module butter #(parameter N=2, parameter width = 16)(
input logic clk,
input logic rst,
input logic [width-1:0] xin,
output logic [width-1:0] yout
);

//filtercoefficients
parameter signed [width-1:0] bL [0:N] = '{16'sd7, 16'sd15, 16'sd7};
parameter signed [width-1:0] aL [1:N] = '{-16'sd31776, 16'sd15421};
parameter signed [width-1:0] bM [0:N] = '{16'sd7429, 16'sd0, -16'sd7429}; 
parameter signed [width-1:0] aM [1:N] = '{-16'sd17256, 16'sd1525};
parameter signed [width-1:0] bH [0:N] = '{16'sd5505, -16'sd11010, 16'sd5505};
parameter signed [width-1:0] aH [1:N] = '{-16'sd2743, 16'sd2892};

//delay registers
logic signed [width-1:0] x [0:N];    // universal inputs
logic signed [width-1:0] yL [1:N];   // Lowpass reg
logic signed [width-1:0] yM [1:N];   // Bandpass reg
logic signed [width-1:0] yH [1:N];   // Highpass reg

// Memory-mapped registers
logic [7:0] gL, gM, gH;   // gain registers
// gL = 255: Unity gain (1.0×)  
// gL = 128: 0.5× (-6dB cut)
// gL = 64:  0.25× (-12dB cut)
// gL = 0:   Mute

//wire declarations
logic signed [width-1:0] youtL, youtM, youtH;   //wire
logic signed [31:0] sumL, sumM, sumH, sumout;  //wire

// Filter computation (combinational)
always_comb 
  begin
	sumL = bL[0]*x[0] + bL[1]*x[1] + bL[2]*x[2] - aL[1]*yL[1] - aL[2]*yL[2];
	sumM = bM[0]*x[0] + bM[1]*x[1] + bM[2]*x[2] - aM[1]*yM[1] - aM[2]*yM[2];
	sumH = bH[0]*x[0] + bH[1]*x[1] + bH[2]*x[2] - aH[1]*yH[1] - aH[2]*yH[2];
	youtL = sumL >>> 14; youtM = sumM >>> 14; youtH = sumH >>> 14;
   	sumout = (youtL * gL) + (youtM * gM) + (youtH * gH);
   	yout = sumout >>> 8;
  end


always_ff @(posedge clk or posedge rst)
	if (rst) begin
		x[2]  <= 0; x[1]  <= 0; x[0]  <= 0;
		yL[1] <= 0; yM[1] <= 0; yH[1] <= 0;
        yL[2] <= 0; yM[2] <= 0; yH[2] <= 0; 
        
        gL <= 8'd255;
        gM <= 8'd255;
        gH <= 8'd255;
	  end 
	  
	else begin // Handle memory-mapped writes
	    x[2]  <= x[1];  x[1]  <= x[0];  x[0]  <= xin; 
        yL[1] <= youtL; yM[1] <= youtM; yH[1] <= youtH;
        yL[2] <= yL[1]; yM[2] <= yM[1]; yH[2] <= yH[1];          
	end
	  
endmodule
	

