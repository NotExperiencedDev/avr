#ifndef MAIN_H_
#define MAIN_H_

#include <avr/io.h>

#define PORTSETUP DDRB |= (1<<PB2) | (1<<PB1);
#define PINON(PORT, PIN) PORT |= 1 << PIN
#define PINOFF(PORT, PIN) PORT &= ~(1 << PIN) 

#define SETBIT(VAR, BIT) PINON(VAR, BIT)
#define CLEARBIT(VAR, BIT) PINOFF(VAR, BIT)


#endif /*MAIN_H_*/