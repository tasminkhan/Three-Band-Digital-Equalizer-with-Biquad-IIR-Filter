clc
clear all

fs = 44000;

% Load all three CSV files
bassData = readmatrix('bass boost.txt');
midData = readmatrix('mid boost.txt');  
trebleData = readmatrix('treble boost.txt');

% Extract signals (input should be same in all files, so take from first)
inputSignal = bassData(:, 1);     % First column is input
bassOutput = bassData(:, 2);      % Bass filtered output
midOutput = midData(:, 2);        % Mid filtered output  
trebleOutput = trebleData(:, 2);  % Treble filtered output

% Time vector for plotting with respect to time
N = length(inputSignal); % Number of samples
time = (0:N-1) / fs; % Time vector

% Create figure with 4 subplots
figure('Position', [100, 100, 1000, 800]);

subplot(4, 1, 1);
plot(time, inputSignal, 'k-', 'LineWidth', 1.5);
title('Input Signal (Time Domain)', 'FontSize', 12, 'FontWeight', 'bold');
xlabel('Time (seconds)');
ylabel('Amplitude');
grid on;

subplot(4, 1, 2);
plot(time, bassOutput, 'r-', 'LineWidth', 1.5);
title('Bass Boost Output (Time Domain)', 'FontSize', 12, 'FontWeight', 'bold');
xlabel('Time (seconds)');
ylabel('Amplitude');
grid on;

subplot(4, 1, 3);
plot(time, midOutput, 'g-', 'LineWidth', 1.5);
title('Mid Boost Output (Time Domain)', 'FontSize', 12, 'FontWeight', 'bold');
xlabel('Time (seconds)');
ylabel('Amplitude');
grid on;

subplot(4, 1, 4);
plot(time, trebleOutput, 'b-', 'LineWidth', 1.5);
title('Treble Boost Output (Time Domain)', 'FontSize', 12, 'FontWeight', 'bold');
xlabel('Time (seconds)');
ylabel('Amplitude');
grid on;

% Create second figure for frequency domain analysis
figure('Position', [200, 200, 1000, 800]);

% FFT parameters
nfft = 2^nextpow2(N);
frequencies = (0:nfft/2-1) * fs / nfft / 1000; % Convert to kHz

% Compute FFTs
inputFFT = abs(fft(inputSignal, nfft));
bassFFT = abs(fft(bassOutput, nfft));
midFFT = abs(fft(midOutput, nfft));
trebleFFT = abs(fft(trebleOutput, nfft));

% Take only positive frequencies
inputSpectrum = inputFFT(1:nfft/2);
bassSpectrum = bassFFT(1:nfft/2);
midSpectrum = midFFT(1:nfft/2);
trebleSpectrum = trebleFFT(1:nfft/2);

% Convert to dB (avoid log of zero)
inputSpectrum_dB = 20*log10(inputSpectrum + eps);
bassSpectrum_dB = 20*log10(bassSpectrum + eps);
midSpectrum_dB = 20*log10(midSpectrum + eps);
trebleSpectrum_dB = 20*log10(trebleSpectrum + eps);

% Plot frequency domain
subplot(4, 1, 1);
semilogx(frequencies, inputSpectrum_dB, 'k-', 'LineWidth', 1.5);
title('Input Signal Spectrum', 'FontSize', 12, 'FontWeight', 'bold');
xlabel('Frequency (kHz)');
ylabel('Magnitude (dB)');
grid on;
xlim([0.1 fs/2000]);

subplot(4, 1, 2);
semilogx(frequencies, bassSpectrum_dB, 'r-', 'LineWidth', 1.5);
title('Bass Boost Spectrum', 'FontSize', 12, 'FontWeight', 'bold');
xlabel('Frequency (kHz)');
ylabel('Magnitude (dB)');
grid on;
xlim([0.1 fs/2000]);

subplot(4, 1, 3);
semilogx(frequencies, midSpectrum_dB, 'g-', 'LineWidth', 1.5);
title('Mid Boost Spectrum', 'FontSize', 12, 'FontWeight', 'bold');
xlabel('Frequency (kHz)');
ylabel('Magnitude (dB)');
grid on;
xlim([0.1 fs/2000]);

subplot(4, 1, 4);
semilogx(frequencies, trebleSpectrum_dB, 'b-', 'LineWidth', 1.5);
title('Treble Boost Spectrum', 'FontSize', 12, 'FontWeight', 'bold');
xlabel('Frequency (kHz)');
ylabel('Magnitude (dB)');
grid on;
xlim([0.1 fs/2000]);