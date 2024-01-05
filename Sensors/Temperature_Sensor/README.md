# Temperature Sensor

The LM35DZ is a precision temperature sensor with an operating temperature range of 0°C to 100°C that outputs 10mV for every degree Celsius increase in temperature. The maximum output voltage of the LM35DZ sensor is 100 × 10mV, or one volt. The Arduino analog-to-digital conversion (ADC) converts a voltage to a digital value between 0 and 1023. When the default ADC maximum voltage of 5V is equated to a value of 1023, the range of output voltages from the LM35DZ sensor has an analog equivalent of 0 to 205 (= 1023/5). If the ADC maximum voltage is set to 1.1V rather than 5V, then the output voltages from the LM35DZ sensor map to an analog range of 0 to 930 (= 1023/1.1),providing greater resolution for the temperature sensor. For example, a temperature increase of 1°C corresponds to an increased analog reading of 9 rather than only 2, with ADC maximum voltages of 1.1V and 5V, respectively. The ADC voltage can be reduced from 5V to 1.1V with the analogReference(INTERNAL) instruction.
<br>

The Arduino has three analog reference values:
- analogReference(DEFAULT)  equates 5V to 1023 = 210-1
- analogReference(INTERNAL) equates 1.1V to 1023
- analogReference(EXTERNAL) equates 3.3V to 1023 when the 3.3V pin is connected to the AREF pin
<br>

After setting the ADC reference voltage to 1.1V, the temperature in degrees Celsius is the temperature sensor’s reading multiplied by 110.0/1023. The reading is divided by 1023 and multiplied by 1100 to convert the reading to mV, and then divided by 10 to convert mV to °C. The LM35DZ temperature sensor must be connected correctly, as in, with the right-hand side of the flat side connected to 5V; otherwise, the LM35DZ temperature sensor rapidly overheats. The temperature sensor’s output pin is connected to one of the Arduino’s six analog input pins, marked A0 to A5

## Components

- LM35DZ
- Arduino UNO

## Circuit Diagram

![Temperature_Sensor](https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/3e358bf2-0f52-45ab-a38f-ebdeccb061ca)

## Project Demo

https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/8cbe21dc-065e-4f81-b26c-c0e5b39fe78d