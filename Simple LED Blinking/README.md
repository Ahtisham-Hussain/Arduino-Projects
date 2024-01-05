# the Blink Sketch
The blink sketch can be changed to make a separate LED blink rather than the LED on the Arduino. The 
Arduino supplies a regulated 5V output from the pin marked 5V, but a resistor is required to ensure that the current does not exceed the LED’s maximum permitted current of 20mA. Without the resistor, the high current would damage the LED.
<br>
Using Ohm’s law, which states voltage equals the product of current and resistance, or V = I × R, the value of the resistor (R) can be determined,given the known voltage (V) and current (I). The forward voltage drop across the LED is 2V, which is the minimum voltage required to turn on the LED.
<br>
An LED is a diode, which allows current to pass in one direction only. The long leg of the LED is the anode and the flat side of the LED is on the cathode side. LEDs contain semiconductor material, which determines the wavelength of light emitted: red, green, blue, or yellow. The forward voltage drop of red, yellow, and green LEDs is lower than for blue and white LEDs: 2.0V and 2.9V, respectively.
<br>
![Arduino_LEDOn_5VFixed_InsertLED](https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/08841edb-5e68-4eea-92e3-29992fdc1f6e)

## ## Table of Contents
<br>
| S.NO | Topic | Project Description |
|-|-|-|
| 1 |     LED Blinking       | https://github.com/Ahtisham-Hussain/Arduino-Projects/tree/main/Simple%20LED%20Blinking/LED%20Blinking |
| 2 | LED_Brightness_and_PWM | https://github.com/Ahtisham-Hussain/Arduino-Projects/tree/main/Simple%20LED%20Blinking/LED_Brightness_and_PWM |