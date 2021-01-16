/*	Author: lab
 *  Partner(s) Name: Hulbert Zeng
 *	Lab Section: 021
 *	Assignment: Lab #2  Exercise #4
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
    DDRB = 0x00; PORTB = 0xFF; // Configure port B's 8 pins as inputs
    DDRC = 0x00; PORTC = 0xFF; // Configure port C's 8 pins as inputs
    DDRD = 0xFF; PORTD = 0x00; // Configure port D's 8 pins as outputs, initialize to 0s
    unsigned char ismax = 0;
    unsigned char difference = 0;
    unsigned short total = 0;
while(1) {
	total = PINA + PINB + PINC;
	ismax = total > 140;

	short abs = PINA - PINC;
	difference = abs > 0 ? abs > 80 : ((-1) * abs) > 80;

	while(total > 63) {
	    total /= 2;
	}

	total = total << 2;
	difference = difference << 1;

        PORTD = ismax + difference + total;
    }
    return 0;
}


