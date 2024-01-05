# Tactile Switch
A switch can be connected to an Arduino pin to turn an LED on or off. When the switch is closed, the digital pin is connected to 5V and the pin state is HIGH. When the switch is open, the 10kΩ pull-down resistor permits a small current to flow between the digital pin and GND, so the pin state is pulled down to LOW
<br>

If the switch and resistor are reversed, relative to the digital pin, then when the switch is open, the digital pin is connected to 5V, through the 10kΩpull-up resistor, and the pin state is HIGH. Use of a pull-down or a pull-up resistor depends on whether the pin state is to be LOW or HIGH when the switch is open. If a pull-down or pull-up resistor was not included, then when the switch is open the digital pin would not be connected to GND or to 5V, so the pin state would be undefined. Incorporation of a switch with the pull-down resistor

## Components

- Push Button
- LED
- Resistor (220 ohm)
- Pull-Up Resistor (10k ohm)
- Arduino UNO

## Circuit Diagram

![LED_switch_with_pulldown_resistor](https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/6e81468a-d128-41f6-b96c-630e0c8cdeeb)

## Project Demo

https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/401894b9-94c2-4819-97e2-a31d9b707a92