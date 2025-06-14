Gesture-Controlled Robot Arm

Welcome to the Gesture-Controlled Robot Arm project! This system lets you intuitively control a radio‑controlled robotic arm using hand gestures. It integrates machine learning–based gesture recognition with real‑time hardware actuation via an Arduino board and servo motors.

🌟 Project Overview

In this ICPS (Introduction to Cyber-Physical Systems) coursework project, we:

Implemented hand gesture recognition using the MediaPipe model in Python

Integrated hardware and software to build a seamless, real‑time control system

Demonstrated simplified human‑machine interaction through intuitive gesture controls

The architecture uses:

MediaPipe (open‑source gesture detection, available on GitHub) to capture and classify hand poses

A Python script that translates recognized gestures into Arduino commands via serial communication

Servo motors connected to a radio‑controlled arm bot’s joystick, moving the joysticks to manipulate the arm

🚀 Features

Real‑time hand gesture detection

Wireless control of a robotic arm via servo‑driven joysticks

Modular design: easily swap out the gesture model or modify hardware components

📋 Hardware Components

Arduino UNO (or compatible board)

2× Servo motors (to manipulate joystick axes)

Radio‑controlled robotic arm bot with a USB‑powered remote controller

Cable for Arduino connection to host PC

🛠️ Software Components

Python 3.8+

MediaPipe Hands for gesture recognition

pyserial library for serial communication to Arduino

Arduino IDE for uploading the servo‑control sketch

🔧 Installation & Setup

Clone the repository

git clone https://github.com/ymidhileshkumar/gesture-controlled-robot.git
cd gesture-controlled-robot

Upload Arduino code

Navigate to the Arduino sketch folder:

cd arduino_servo_motor

Open arduino_servo_motor.ino in the Arduino IDE.

Select your board (e.g. Arduino UNO) and the correct COM port.

Click Upload to flash the sketch to your Arduino.

Return to the project root:

cd ..

Create and activate a virtual environment (recommended)

python3 -m venv venv
source venv/bin/activate    # macOS/Linux
venv\Scripts\activate     # Windows

Install Python dependencies

pip install pyserial mediapipe

 Usage

Connect your Arduino board to your PC via USB.

Power on the radio‑controlled arm bot and ensure its remote controller is functional.

Run the Python gesture‑recognition script:

python gesture_control.py

Position your hand in front of the webcam. The system will detect gestures and send corresponding servo commands to the Arduino.

Watch the robotic arm move in real time based on your hand gestures!
