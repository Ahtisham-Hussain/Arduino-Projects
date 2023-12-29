# Blink an LED

The LED is connected to Arduino pin 11. In the void setup() function, the Arduino pin defined by the LEDpin variable is defined as an OUTPUT pin, rather than an INPUTpin that would be used for input, such as measuring a voltage. In the void loop() function, the state of Arduino pin 11 is repeatedly changed from HIGH to LOW and LOW to HIGH at one-second intervals, which corresponds to changing the output voltage on the pin from 5V to 0V, and so the LED turns on and off.

## Components

- LED
- Resistor (220 ohm)
- Arduino UNO

## Circuit Diagram

![LED_Blinking](Simple LED Blinking\LED Blinking\LED_Blinking.png)
## Project Demo

![Demo](Simple LED Blinking\LED Blinking\Blink_LED.mp4)