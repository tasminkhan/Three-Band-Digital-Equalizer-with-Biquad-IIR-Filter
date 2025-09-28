`timescale 1ns / 1ps
module tb #(parameter width = 16);
    logic clk;
    logic rst;
    logic state;
    logic signed [31:0] xin;   
    logic signed [31:0] yout;  
    
    logic [5:0]   address;      
    logic [1:0] data_write_n; 
    logic [1:0] data_read_n;
    integer file, outfile, status; 
	integer sample_count = 0;
	integer MAX_SAMPLES = 1000;                    
    butter dut ( .clk(clk), .rst_n(rst), .data_in(xin), .data_out(yout), .address(address), .data_write_n(data_write_n), .data_read_n(data_read_n), .current_state(state));
    always #8 clk =~clk;
    initial begin
        clk = 0;
        rst = 0;
        xin = 0;
        address = 6'h10;
        data_write_n = 2'b01;
	//input and output text files
        file = $fopen("input_signal2.txt", "r");
        if (file == 0) begin
            $display("Error opening input");
            $finish;
        end
        outfile = $fopen("treble boost.txt", "w");
        #35 rst = 1;  
        
        // Set gain control before processing samples
        address = 6'h14;
        // For Bass boost (only low-pass filter active):
        // xin = 32'h070000FF;  // gL=255, gM=0, gH=0

        // For Mid boost (only mid-pass filter active):
        // xin = 32'h0700FF00;  // gL=0, gM=255, gH=0

        // For Treble boost (only high-pass filter active):
        xin = 32'h07FF0000;  // gL=0, gM=0, gH=255
        
        data_write_n = 2'b10;  // 32-bit write
        @(posedge clk);
        #5;
        
        while (sample_count < MAX_SAMPLES) begin
             status = $fscanf(file, "%d", xin);
   	         if (status != 1) begin
	           $display("Processing sample %d of %d",sample_count, MAX_SAMPLES);
	           break;
	         end 
	         address = 6'h10;
	         #1;
   	         @(posedge clk);
  	          
  	         address = 6'h0;
  	         #1;
  	         @(posedge clk);
  	         $fwrite(outfile, "%d,%d\n", $signed(xin[15:0]), $signed(yout[15:0]));
  	         
  	         sample_count = sample_count + 1;
	    end
        $fclose(file);
        $fclose(outfile);
        
        #35
    	$finish;
    end
endmodule