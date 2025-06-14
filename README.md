# Gesture-Controlled Robot Arm

Welcome to the **Gesture-Controlled Robot Arm** project! This system lets you intuitively control a radio‑controlled robotic arm using hand gestures. It integrates machine learning–based gesture recognition with real‑time hardware actuation via an Arduino board and servo motors.

## 🌟 Project Overview

In this ICPS (Introduction to Cyber-Physical Systems) coursework project, we:

- **Implemented hand gesture recognition** using the MediaPipe model in Python
- **Integrated hardware and software** to build a seamless, real‑time control system
- **Demonstrated simplified human‑machine interaction** through intuitive gesture controls

The architecture uses:

1. **MediaPipe** (open‑source gesture detection, available on GitHub) to capture and classify hand poses
2. A **Python script** that translates recognized gestures into Arduino commands via serial communication
3. **Servo motors** connected to a radio‑controlled arm bot’s joystick, moving the joysticks to manipulate the arm

## 🚀 Features

- Real‑time hand gesture detection
- Wireless control of a robotic arm via servo‑driven joysticks
- Modular design: easily swap out the gesture model or modify hardware components

## 📋 Hardware Components

- Arduino UNO (or compatible board)
- 2× Servo motors (to manipulate joystick axes)
- Radio‑controlled robotic arm bot with a USB‑powered remote controller
- USB A‑to‑B cable for Arduino connection to host PC

## 🛠️ Software Components

- Python 3.8+
- [MediaPipe Hands](https://github.com/google/mediapipe) for gesture recognition
- `pyserial` library for serial communication to Arduino
- Arduino IDE for uploading the servo‑control sketch

## 🔧 Installation & Setup

1. **Clone the repository**

   ```
   git clone https://github.com/ymidhileshkumar/gesture-controlled-robot.git
   cd gesture-controlled-robot
   ```

2. **Upload Arduino code**

   - **Attach the servo motors** to the joystick arms of your radio‑controlled remote controller. Secure the horns so that motor rotations translate to joystick movements.
   - Navigate to the Arduino sketch folder:
     ```bash
     cd arduino_servo_motor
     ```
   - Open `arduino_servo_motor.ino` in the Arduino IDE.
   - Select your board (e.g. Arduino UNO) and the correct COM port.
   - Click **Upload** to flash the sketch to your Arduino.
   - Return to the project root:
     ```bash
     cd ..
     ```

3. **Create and activate a virtual environment** (recommended) **Create and activate a virtual environment** (recommended)

   ```
   python3 -m venv venv
   source venv/bin/activate    # macOS/Linux
   venv\Scripts\activate     # Windows
   ```

4. **Install Python dependencies**

   ```bash
   pip install pyserial mediapipe
   ```

## ▶️ Usage

1. Connect your Arduino board to your PC via USB.
2. Power on the radio‑controlled arm bot and ensure its remote controller is functional.
3. Run the Python gesture‑recognition script:
   ```bash
   python gesture_control.py
   ```
4. Position your hand in front of the webcam. The system will detect gestures and send corresponding servo commands to the Arduino.
5. Watch the robotic arm move in real time based on your hand gestures!



