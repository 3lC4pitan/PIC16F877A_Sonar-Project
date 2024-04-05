/*
 * File:   main.c
 * Author: nmeda
 *
 * Created on March 18, 2024, 2:15 AM
 */


#include <xc.h>
#include "config.h"
#include <pic16f877a.h>
#include <stdint.h>

// Define pins for LEDs and buzzer
#define LED_GREEN_1 PORTBbits.RB0
#define LED_GREEN_2 PORTBbits.RB1
#define LED_ORANGE PORTBbits.RB2
#define LED_RED PORTBbits.RB3
#define BUZZER PORTBbits.RB4

void delay_ms(uint16_t ms) {
    while (ms--) {
        __delay_ms(1);
    }
}

// Function to initialize peripherals
void initialize() {
    // Configure RB0-RB4 as outputs
    TRISB = 0x00;

    // Initialize servo motor control
}

// Function to read distance from ultrasonic sensor
uint16_t readDistance() {
    //TODO:
    // Implement code to trigger ultrasonic sensor and measure distance
    // Return distance in millimeters
}

// Function to indicate distance using LEDs and buzzer
void indicateDistance(uint16_t distance) {
    if (distance < 100) {
        LED_GREEN_1 = 1;
        LED_GREEN_2 = 1;
        LED_ORANGE = 0;
        LED_RED = 0;
        BUZZER = 1; // Emit a sound
        delay_ms(100); // Adjust delay as needed
        BUZZER = 0;
    } else if (distance >= 100 && distance < 200) {
        LED_GREEN_1 = 1;
        LED_GREEN_2 = 0;
        LED_ORANGE = 1;
        LED_RED = 0;
        BUZZER = 0;
    } else if (distance >= 200 && distance < 300) {
        LED_GREEN_1 = 0;
        LED_GREEN_2 = 1;
        LED_ORANGE = 1;
        LED_RED = 0;
        BUZZER = 0;
    } else {
        LED_GREEN_1 = 0;
        LED_GREEN_2 = 0;
        LED_ORANGE = 0;
        LED_RED = 1;
        BUZZER = 0;
    }
}

int main() {
    initialize();

    while (1) {
        // Rotate servo motor to scan
        // Read distance from ultrasonic sensor

        uint16_t distance = readDistance();

        // Indicate distance using LEDs and buzzer
        indicateDistance(distance);
    }

    return 0;
}
