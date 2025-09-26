clc
clear all
%%
flow = 300;
fmid = 1000;
fhigh = 10000;
fs = 44000;

[blow,alow]   = butter(2,flow/(fs/2),"low")
[bmid,amid]   = butter(1,[flow/(fs/2),fhigh/(fs/2)],"bandpass")
[bhigh,ahigh] = butter(2,fhigh/(fs/2),"high")

scale_bits = 14;
bflow = round(blow * 2^scale_bits) 
aflow = round(alow * 2^scale_bits)
bfmid = round(bmid * 2^scale_bits) 
afmid = round(amid * 2^scale_bits)
bfhigh = round(bhigh * 2^scale_bits) 
afhigh = round(ahigh * 2^scale_bits)
%%
figure
subplot(3,2,1)
zplane(blow,alow)
title('Lowpass in floating point');
subplot(3,2,2)
zplane(bflow,aflow)
title('Lowpass in fixed point');

subplot(3,2,3)
zplane(bmid,amid)
title('Bandpass in floating point');
subplot(3,2,4)
zplane(bfmid,afmid)
title('Bandpass in fixed point');

subplot(3,2,5)
zplane(bhigh,ahigh)
title('Highpass in floating point');
subplot(3,2,6)
zplane(bfhigh,afhigh)
title('Highpass in fixed point');

%%
[Hlow, flow] = freqz(blow, alow, [], fs);
[Hmid, fmid] = freqz(bmid, amid, [], fs);
[Hhigh, fhigh] = freqz(bhigh, ahigh, [], fs);

figure;
subplot(3,1,1)
plot(flow,20*log10(abs(Hlow)));
ylim([-10 10]);
title('Low pass');

subplot(3,1,2)
plot(fmid,20*log10(abs(Hmid)));
ylim([-10 10]);
title('Band pass');

subplot(3,1,3)
plot(fhigh,20*log10(abs(Hhigh)));
ylim([-10 10]);
title('High pass');
%%
Ts=1/fs;
n=0:999;
t=n*Ts;
x=0.33*sin(2*pi*150*t)+0.33*sin(2*pi*1000*t)+0.33*sin(2*pi*15000*t);

xq = (x) * (2^15); % 15 bit signal
xq_int = round(xq); % quantization
fid = fopen('C:\Education\VLSI\eqv\eqv\eqv.sim\sim_1\behav\xsim\input_signal2.txt','w');
fprintf(fid,"%d\n",xq_int);
fclose(fid);

%%

% Load the quantized signal (from your previous step)
quantizedSignal = dlmread('C:\Education\VLSI\eqv\eqv\eqv.sim\sim_1\behav\xsim\input_signal2.txt'); 

% Load the simulation results (output from the filter)
simResults = dlmread('C:\Education\VLSI\eqv\eqv\eqv.sim\sim_1\behav\xsim\filtered_signal2.txt');  

% Time vector for plotting with respect to time
N = length(quantizedSignal);  % Number of samples
time = (0:N-1) / fs;          % Time vector

%% Plot the signals with respect to time in a new figure
figure;
subplot(2, 1, 1);  
plot(time, quantizedSignal);
title('Quantized Input Signal (Time Domain)');
xlabel('Time (seconds)');
ylabel('Amplitude');
grid on;


subplot(2, 1, 2); 
plot(time, simResults);
title('Filtered Results (Time Domain)');
xlabel('Time (seconds)');
ylabel('Amplitude');
grid on;