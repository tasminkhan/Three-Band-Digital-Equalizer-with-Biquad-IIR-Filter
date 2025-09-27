`timescale 1ns / 1ps

module tb #(parameter width = 16);

    logic clk;
    logic rst;
    logic signed [31:0] xin;   
    logic signed [31:0] yout;  
    
    logic [5:0]   address;      

    logic [1:0] data_write_n; 
    logic [1:0] data_read_n;

    integer file, outfile, status; 
	integer sample_count = 0;
	integer MAX_SAMPLES = 1000;                    

    butter dut ( .clk(clk), .rst_n(rst), .data_in(xin), .data_out(yout), .address(address), .data_write_n(data_write_n), .data_read_n(data_read_n));

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
        outfile = $fopen("filtered_signal2.txt", "w");

        #40 rst = 1;  

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
  	         $fwrite(outfile, "%d\n", yout);
  	         
  	         sample_count = sample_count + 1;
	    end

        $fclose(file);
        $fclose(outfile);
    	$finish;
    end
endmodule



