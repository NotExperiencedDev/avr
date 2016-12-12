# avr
It is very simple project (blinking led) with ATMEL/CHIP AVR ATTiny10 (6 pin, very small). 
This project has basically 2 files - main.c, main.h
the main.h contains some defined helpers (to set 0 or 1 on selected port, to setup ports)
Project uses atmel util/delay.h library
Microcontroller runs on 1MHz internal (default) clock.
Led is connected to PB2 port.

All starts on: 
1. http://electronut.in/attiny10-hello/
and
2. http://mirekk36.blogspot.in/2013/07/attiny10-tpi-usbasp-mkavrcalculator.html

To load program i'm using USBASP v 2.0
All done on Linux Mint, in VSCODE, midnight comander, avr gcc

After connecting everything (as on the page from second link) i used command (in project folder):
  makefile -f Makefile-1 load

My makefile is done manually so it is very simple and easy. All uses avr-gcc compiler and avrdude loader.
