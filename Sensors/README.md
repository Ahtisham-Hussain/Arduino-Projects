# Sensors
Sensors can be connected to the Arduino to measure aspects of the environment with sensor information displayed on the serial monitor or on the serial plotter. The Arduino can perform an instruction depending 
on the sensor signal being above or below a given threshold, such as turning on a light when a room is dark. This session describes several sensors with accompanying sketches to demonstrate uses of the sensors. 
In subsequent seesion, projects include one or more sensors.

## Signal acquisition pipeline
Let’s examine the entire signal acquisition pipeline from raw physical signal to the digitized representation. We’ll learn more about signals and signal processing in the Signals lessons.
<br>
- First, there exists some physical phenomena that exists in the world (Stage 1).
- We need to develop and/or utilize a method to sense that phenomena and output an electrical signal (which will be readable by a computer) (Stage 2).
- Some sensor chips process this electrical signal (e.g., smooth, filter, amplify)—Stage 3.
- In Stage 4, an analog-to-digital converter (ADC) converts the electrical signal to bits (a process called quantization).
- Finally, in Stage 5, we can process and analyze the digitized signal using digital signal processing (DSP) techniques and machine learning.
<br>

<img width="1500" alt="SignalAcquisitionPipeline_Wikipedia" src="https://github.com/Ahtisham-Hussain/Chap01/assets/154002517/1a35924f-229c-4a14-9dc9-f8c206a2718a">

## Table of Content

| S.NO | Topic | Project Description |
|-|-|-|
| 1 | Humidity_Sensor | https://github.com/Ahtisham-Hussain/Arduino-Projects/tree/main/Sensors/Humidity_Sensor |
| 2 | Light_Dependent_Resistor | https://github.com/Ahtisham-Hussain/Arduino-Projects/tree/main/Sensors/Light_Dependent_Resistor |
| 3 | Light_Dependent_Resistor_and_Several_LEDs | https://github.com/Ahtisham-Hussain/Arduino-Projects/tree/main/Sensors/Light_Dependent_Resistor_and_Several_LEDs |
| 4 | Temperature_Sensor | https://github.com/Ahtisham-Hussain/Arduino-Projects/tree/main/Sensors/Temperature_Sensor |