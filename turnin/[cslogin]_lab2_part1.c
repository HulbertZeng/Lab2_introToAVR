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
    DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
    unsigned char tmpA1 = 0x00; // Temporary variable to hold the value of A1
    unsigned char tmpA0 = 0x00; // Temporary variable to hold the value of A0
while(1) {
	tmpA1 = PINA & 0x02;
	tmpA0 = PINA & 0x01;

        PORTB = !tmpA1 && tmpA0;
    }
    return 0;
}


