module butter #(parameter N=2, parameter width = 16)(
input logic clk,
input logic rst,
output logic [width-1:0] yout,

input logic [5:0]   address,      // Address within this peripheral's address space
input logic [31:0]  data_in,      // Data in to the peripheral, bottom 8, 16 or all 32 bits are valid on write.
    
input logic [1:0] data_write_n, // 11 = no write, 00 = 8-bits, 01 = 16-bits, 10 = 32-bits
input logic [1:0] data_read_n  // 11 = no read,  00 = 8-bits, 01 = 16-bits, 10 = 32-bits
    
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
logic filter_en, filter_rst;  // filter  control reg
logic [7:0] gL, gM, gH;       // gain registers
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


// Memory-mapped register interface
// Address Map:


always_ff @(posedge clk or posedge rst)
	if (rst) begin
		x[2]  <= 0; x[1]  <= 0; x[0]  <= 0;
		yL[1] <= 0; yM[1] <= 0; yH[1] <= 0;
        yL[2] <= 0; yM[2] <= 0; yH[2] <= 0; 
        
        gL <= 8'd255;
        gM <= 8'd255;
        gH <= 8'd255;
        
        filter_en  <= 1'b0;
	  end 
	  
	else begin // Handle memory-mapped writes
	   if (~(&data_write_n)) begin
	       case (address)
	       
               6'h00: begin 
                    x[2]  <= x[1];  x[1]  <= x[0];  x[0]  <= data_in[15:0];
                    yL[1] <= youtL; yM[1] <= youtM; yH[1] <= youtH;
                    yL[2] <= yL[1]; yM[2] <= yM[1]; yH[2] <= yH[1];  
               end 
               
               6'h04: begin
                    if (data_in [28]) 
                        gL <= data_in[7:0]; 
                    if (data_in [29]) 
                        gM <= data_in[15:8];
                    if (data_in [30]) 
                        gH <= data_in[23:16];
                    if (data_in[31]) begin
                       x[2]  <= 0; x[1]  <= 0; x[0]  <= 0;
		               yL[1] <= 0; yM[1] <= 0; yH[1] <= 0;
                       yL[2] <= 0; yM[2] <= 0; yH[2] <= 0; 
                    end 
               end           
               
          endcase
       end           
	end
	  
endmodule
	

