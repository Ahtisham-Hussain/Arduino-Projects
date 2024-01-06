# Light Dependent Resistor

A light dependent resistor (LDR), or photoresistor, is used to quantify incident light, as the resistance of the LDR decreases with increasing incident light. The LDR is combined with a 4.7kΩ resistor to form a voltage divider. The voltage divider’s output voltage, reflecting the LDR resistance, is converted by the Arduino’s analog to digital converter (ADC) to a digital value. The LDR’s resistance is between 3kΩ and 5kΩ in average daylight, so a 4.7kΩ resistor provides a balanced resistance for the voltage divider. Like any resistor, an LDR can be connected either way around in a circuit.
<br>

The LDR can be used to change the brightness of an LED, depending on the incident light, such as a night light. The LED is turned on only when the light intensity is low, with a threshold of 500 for the voltage divider reading. A high LED brightness is required in low light conditions, so the voltage divider reading is inversely mapped to the LED brightness, with low readings corresponding to high LED brightness.

## Components

- LED
- Resistor (220 ohm and 4.7 ohm)
- LDR (Light Dependent Resistor)
- Arduino UNO

## Circuit Diagram

![Light_Dependent_Resistor](https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/ee12ecb5-ca7f-43bf-93ce-8dc8af277b31)

## Project Demo

https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/4164870e-6955-4daf-ba6e-6cc87532fa11