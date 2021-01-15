/*	Author: lab
 *  Partner(s) Name: Hulbert Zeng
 *	Lab Section: 021
 *	Assignment: Lab #2  Exercise #Prelab
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
    DDRC = 0xFF; PORTC = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
    unsigned char cntavail;
    unsigned char isfull;
while(1) {
	isfull = (PINA == 0x0F) << 7;
	cntavail = PINA;

        PORTC = cntavail + isfull;
    }
    return 0;
}


