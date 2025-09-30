

# Three Band Digital Audio Equalizer Peripheral with biquad IIR filters implemented for RISC-V TinyQV CPU

- [Read the documentation for project](docs/info.md)

## What is TinyQV

[TinyQV](https://github.com/TinyTapeout/ttsky25a-tinyQV) is a Risc-V CPU designed for Tiny Tapeout. This repository contains the standalone peripheral design witb necessary code for SPI communication with cpu by a custom python class. This does not use the CPU commands to communicate. FOr the full project implemented with RISC-V commands, see this link [ttsky25a-tinyQVb_Digital-Equalizer](https://github.com/tasminkhan/ttsky25a-tinyQVb_Digital-Equalizer.git).

## What does this peripheral do?

A peripheral provides some additional functionality to the CPU. The peripheral is allocated a range in the system's memory map, so that the CPU can read data from and write data to the peripheral. This allows the TinyQV CPU to communicate with the peripheral. The module written for the peripheral is [here](src/peripheral.v).

The equalizer processes 16-bit digital audio signals through three parallel biquad IIR filters with independent control of bass (low), mid (bandpass), and treble (high) frequency bands. 
- Low-pass filter (Bass): 300 Hz cutoff
- Band-pass filter (Mid): 300 Hz - 10 kHz
- High-pass filter (Treble): 10 kHz cutoff
The filtered outputs are combined to produce the final equalized signal. The design assumes a 44.1 kHz sampling frequency, standard for digital audio.

## Design Process

### Initial Design

- Filter coefficients were calculated in MATLAB using standard **Butterworth filter** design functions for the target cutoff frequencies
- Coefficients were then scaled by 2^14 to convert from floating-point to **fixed-point arithmatic** representation suitable for hardware implementation
- Early prototyping done in **Vivado Xilinx** using SystemVerilog for quick iteration and visualization producing along with test [vectors](https://github.com/tasminkhan/Three-Band-Digital-Equalizer-with-Biquad-IIR-Filter/tree/2f834cafcb0823aef5aa384bd94849cc316f1970/vectors).

### Implementation 

- The design module is compiled using **Icarus Verilog** with a **Makefile-based build system** for automated compilation and simulation workflows.

### Testing

- Testing is performed using **cocotb**. Test code is written in **Python**, enabling straightforward verification of peripheral functionality through a high-level interface. The test suite is organized and executed using **pytest** for structured test management and reporting.

## Key Design Decisions

- **Single-Cycle Latency:** Output is ready one clock cycle after input is written, enabling real-time processing
- **16-bit data path with 32-bit internal precision** to prevent overflow during filter computation
- **Memory-mapped register interface** for seamless CPU integration and control

### How to Use

- Reset the peripheral to initialize all registers
- Write input sample to address 0x08 (triggers processing)
- Read output from address 0x00 on the next clock cycle
- Adjust gains by writing to address 0x04 with appropriate control bits
