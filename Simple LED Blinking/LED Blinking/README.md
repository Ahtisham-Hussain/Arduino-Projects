# Blink an LED

The LED is connected to Arduino pin 11. In the void setup() function, the Arduino pin defined by the LEDpin variable is defined as an OUTPUT pin, rather than an INPUTpin that would be used for input, such as measuring a voltage. In the void loop() function, the state of Arduino pin 11 is repeatedly changed from HIGH to LOW and LOW to HIGH at one-second intervals, which corresponds to changing the output voltage on the pin from 5V to 0V, and so the LED turns on and off.

## Components

- LED
- Resistor (220 ohm)
- Arduino UNO

## Circuit Diagram

![LED_Blinking](https://github.com/Ahtisham-Hussain/Arduino-Projects/assets/154002517/0a7b56eb-92ee-4b7e-a462-9b0af6406844)

## Project Demo

https://github.com/Ahtisham-Hussain/Arduino-Projects/assets/154002517/7556e999-e708-45b1-a034-4bfa236545d2