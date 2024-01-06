# Light Dependent Resistor and Several LEDs

A light dependent resistor can be used to turn on a number of LEDs, depending on the ambient light, with a brighter light turning on more LEDs. The LEDs do not have to be connected to Arduino PWM pins, as the LEDs are only turned on or off. The map() function converts the output from the voltage divider to the number of LEDs to be turned on, equal to the level variable. In the sketch, level LEDs are turned on and (nLEDs – level) LEDs are turned off, where nLEDs is the total number of LEDs. The maximum value of level is the number of LEDs plus one, so that no LEDs are turned on in very low ambient light.

## Components

- 5 set of LED's
- Resistor (220 ohm and 4.7 ohm)
- LDR (Light Dependent Resistor)
- Arduino UNO

## Circuit Diagram

![Light_Dependent_Resistor_and_Several_LEDs](https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/b03d8792-e9cc-4e3a-b2cd-b6e62920bd38)

## Project Demo

https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/4a9260db-656e-4af6-a185-ea95ad8f276f