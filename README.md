# PIC16F877A Sonar Project

This project emulates a mix of sonar and reverse radar found in cars using PIC16F877A microcontroller.

## Components Required
- PIC16F877A microcontroller
- Ultrasonic sensor (HC-SR04)
- Servo motor
- 4 LEDs (2 green, 1 orange, 1 red)
- Buzzer

## Circuit Diagram
[Insert circuit diagram here]

## Pin Connections
- Ultrasonic Sensor:
  - Trig pin to PIC16F877A pin (RA0)
  - Echo pin to PIC16F877A pin (RA1)
- Servo Motor:
  - Signal pin to PIC16F877A pin (RB5)
- LEDs:
  - Green LED 1 to PIC16F877A pin (RB0)
  - Green LED 2 to PIC16F877A pin (RB1)
  - Orange LED to PIC16F877A pin (RB2)
  - Red LED to PIC16F877A pin (RB3)
- Buzzer:
  - Signal pin to PIC16F877A pin (RB4)

## How it Works
1. The ultrasonic sensor is mounted on a servo motor to rotate 270 degrees, mimicking a sonar's scanning motion.
2. When an object is detected, the distance is measured using the ultrasonic sensor.
3. The distance is indicated using 4 LEDs and a buzzer:
   - Green LEDs indicate close distance
   - Orange LED indicates medium distance
   - Red LED indicates far distance
   - Buzzer emits a sound depending on the distance.

## Usage
1. Set up the circuit.
2. Flash the provided main.c code onto the PIC16F877A.
3. Power on the circuit and observe the LEDs and buzzer response as the ultrasonic sensor scans the area.

