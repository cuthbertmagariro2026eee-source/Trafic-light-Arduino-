# Trafic-light-Arduino-

![Traffic Light Circuit](Traffic%20light%20circuit.png)

[View Tinkercad Simulation](https://www.tinkercad.com/things/jvwMJBakMIX-grand-gaaris/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=sLJFn93tyWuxLVJgVh8_In1K1WBNB3CH_9RXyY5Y1xI)
# 4-Way Traffic Light System (Tinkercad Simulation)
## 📌 Project Overview
This project is a software-based simulation of a traffic light control system using an Arduino Uno. It was built and tested using Autodesk Tinkercad. The system cycles through standard traffic light sequences (Green -> Yellow -> Red) using timed delays.

## 🛠️ Components Used
*   Arduino Uno R3
*   3x LEDs (Red, Yellow, Green)
*   3x 220Ω Resistors
*   Jumper wires

## ⚙️ How It Works
The Arduino is programmed in C/C++. Three digital pins (2, 3, and 4) are configured as outputs. The `loop()` function creates an infinite sequence:
1.  **Green Light**: ON for 5 seconds.
2.  **Yellow Light**: ON for 2 seconds.
3.  **Red Light**: ON for 5 seconds.
The cycle then repeats automatically.

## 🚀 How to Run the Simulation
1. Click this link to open the live simulation: **[Open Tinkercad Simulation](https://www.tinkercad.com/things/jvwMJBakMIX-grand-gaaris/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=sLJFn93tyWuxLVJgVh8_In1K1WBNB3CH_9RXyY5Y1xI)**
2. Click the "Start Simulation" button.
3. Watch the LEDs cycle through the traffic sequence.

## 👨‍💻 Author
Cuthbert Tadiwa Magariro
*First-year Electrical and Electronics Engineering Student at Sri Eshwar College of Engineering*
