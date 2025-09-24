`timescale 1ns / 1ps

module tb #(parameter width = 16);

    logic clk;
    logic rst;
    logic signed [width-1:0] xin;   
    logic signed [width-1:0] yout;  

    integer file, outfile, status; 
	integer sample_count = 0;
	integer MAX_SAMPLES = 1000;                    

    butter dut ( .clk(clk), .rst(rst), .xin(xin), .yout(yout));

    always #20 clk =~clk;
    initial begin
        clk = 0;
        rst = 1;
        xin = 0;

	//input and output text files
        file = $fopen("input_signal2.txt", "r");
        if (file == 0) begin
            $display("Error opening input");
            $finish;
        end
        outfile = $fopen("filtered_signal2.txt", "w");

        #40 rst = 0;  

        while (sample_count < MAX_SAMPLES) begin
   	    @(posedge clk);
  	    status = $fscanf(file, "%d", xin);
   	    if (status != 1) begin
	      $display("Processing sample %d of %d",sample_count, MAX_SAMPLES);
	       break;
	    end  
  	    sample_count = sample_count + 1;
    
  	    @(negedge clk);
  	    $fwrite(outfile, "%d\n", yout);
	  end

        $fclose(file);
        $fclose(outfile);
    	$finish;
    end
endmodule



