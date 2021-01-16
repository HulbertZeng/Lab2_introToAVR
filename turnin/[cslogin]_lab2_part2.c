/*	Author: lab
 *  Partner(s) Name: Hulbert Zeng
 *	Lab Section: 021
 *	Assignment: Lab #2  Exercise #2
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
while(1) {
        PORTC = !(PINA & 0x01) + !(PINA & 0x02) + !(PINA & 0x04) + !(PINA & 0x08);
    }
    return 0;
}


