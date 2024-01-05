# Hardware Switch Debounce

When a switch is pressed, the springy nature of the metal used in the contact points can cause the contact points to touch several times; in other words, to bounce, before making a permanent contact. The Arduino 
clock speed of 16MHz equates to 16 million operations per second, so a bouncing switch contact appears to the microcontroller as having closed and opened several times when the switch is pressed. For example, when 
an LED is controlled by a switch, sometimes the LED does not turn on or off when the switch is pressed. The switch can be debounced by two software methods or by a hardware solution.
<br>

The hardware solution is to include a capacitor across the switch. The capacitor charges while the switch is not pressed. When the switch is pressed, the capacitor discharges and the switch signal to the Arduino is HIGH. While the switch bounces, the capacitor maintains the switch signal at HIGH. With the hardware solution, there is no need for the software debouncing sketch. One resistor-capacitor combination is a 10kΩ pull-down resistor and 10μF capacitor.
<br>

The rate, RC, at which a capacitor charges or discharges depends on the resistance (R) of the resistor and the capacitance (C) of the capacitor. The voltage across the capacitor after t seconds of charging is V(1 − e−t/RC), where V is the supply voltage, and after t seconds of discharging the voltage across the capacitor is V(e−t/RC). The higher the RC value, the longer the debounce delay. After the initial switch press and the capacitor discharge, the capacitor has recharged to 50% of capacity and the switch signal is again HIGH after a debounce delay of RC × ln(2) seconds. The debounce delay time can be expressed as 0.693 × RC or RC/1.44 seconds.
<br>

With the resistor-capacitor combination of a 10kΩ resistor and a 10μF capacitor, the debounce delay is 69ms. There are many resistor-capacitor combinations that achieve a given debounce delay lasting RC × ln(2) seconds, but a large resistor should be used to minimize the current through the resistor.

## Components

- Push Button
- LED
- Capacitor (10uF)
- Resistor (220 ohm)
- Pull-Up Resistor (10k ohm)
- Arduino UNO

## Circuit Diagram

![Hardware_Switch_Debounce](https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/0d86e91d-82a9-402d-a545-7bc17fb1e12e)

## Project Demo

https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/de666fc3-ea13-4d6c-96fc-cd0d9f33c661