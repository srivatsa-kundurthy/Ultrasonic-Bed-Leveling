# Ultrasonic Bed Leveling
## Problem
Having a level bed is a primary dependency (hassle) of 3D printing. The simplest solution is a manual bed leveling algorithm, in which a human checks the bed and adjusts the distance between the hotend and the surface by hand. Naturally, this process is tedious and less reliable. There are also a number of sensors available to auto-level the bed. This project attempts to find a low-cost bed-leveling solution.
## Approach
Ultrasonic sensors are low-cost and easily accessible. This is a project in which we attempt to implement in ultrasonic sensor to level a 3D printer bed. 
1. Write a program to collect and store sensor data.
2. Use the dataset to train a regression-based machine learning model capable of estimating the actual distance between the sensor and the bed. This system accounts for anticipated sensor error due to heating and warping.
3. Integrate the sensor into 3D printers seamlessly via Marlin.
