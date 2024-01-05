#  LED Switch Only When Pressed

It would be more useful to turn the LED on or off only when the switch is pressed. The states of the switch and LED are stored as variables, switchState and LEDState, respectively. When the switch is initially pressed the switch state changes from LOW to HIGH and the state of the LED is updated from either LOW (off ) to HIGH (on) or from HIGH to LOW. The switchState variable is also updated when the switch is initially pressed, but if the switch is continuously pressed, then the switch state does not change. Releasing the switch changes the switch state from HIGH to LOW and the switchState variable is updated, but there is no change in the LED state. The void loop() function continues to read the switch pin.

## Components

- Push Button
- LED
- Resistor (220 ohm)
- Pull-Up Resistor (10k ohm)
- Arduino UNO

## Circuit Diagram

![LED_Switch_Only_When_Pressed](https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/731c86ef-e264-4423-ae14-a3494bec6d0e)

## Project Demo

https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/1e02cfc6-ab82-4fad-89d2-2e9ac5e6dd89