🧺 Microcontroller-Based Washing Machine Simulation Using PicsimLab
This project aims to simulate a washing machine on a virtual microcontroller environment using PicsimLab, showcasing how embedded systems can control a real-world appliance. The simulation replicates common washing machine functions, including program selection, water level control, and cycle progression, giving hands-on experience with appliance automation.

📌 Table of Contents
Features

Project Screens

Architecture

Technologies Used

How to Build and Run

Functional Requirements

Learning Outcomes

Contributing

License

🚀 Features
✅ Power-On Sequence — Simulates initial boot-up of the machine and user confirmation to power on.
✅ Washing Program Selection — Choose from multiple washing modes, scroll and select using keypad inputs.
✅ Water Level Control — Select from multiple water levels depending on laundry load.
✅ Cycle Control (Start/Stop) — User can start, pause, or stop the washing cycle.
✅ Status Display — Shows the current function (Wash, Rinse, Spin) and remaining time on the CLCD.
✅ Door Status Monitoring — Ensures door is closed before operation, buzzer alerts if the door is open.
✅ Program Completion Notification — Clearly informs the user when the program is complete.

🖼️ Project Screens
Here are the simulated screens implemented:

Power On Screen — “Press key5 to Power ON Washing machine”

Powering On Screen — “Powering ON Washing Machine”

Washing Program Menu — shows:

Daily

Heavy

Delicates

Whites

Stain Wash

Eco Cottons

Woolens

Bed Sheets

Rinse + Dry

Dry Only

Wash Only

Aqua Store

Water Level Menu — with options:

Auto

Low

Medium

High

Max

Start/Stop Screen — allows cycle to be started or stopped.

Function Display Screen — shows current operation and timer countdown.

Door Status Screen — alerts if the door is open.

Completion Screen — “Program completed, remove clothes”

👉 If you have screenshots or gifs of your PicsimLab simulation, you can add them under this section for better demonstration.

🏗️ Architecture
The simulated washing machine consists of:

Inputs

SW1: Door sensor

SW4: Navigation/selection

SW5: Power on/start

SW6: Stop/pause

Outputs

CLCD: Program and status messages

Buzzer: Alerts on error conditions (like door open)

Motor: Simulated motor for wash/rinse/spin
🎓 Learning Outcomes
By working on this simulation, you will gain:

Practical exposure to finite state machines in embedded design

Hands-on skills in embedded C programming

Knowledge of peripheral interfacing (LCD, keypad, buzzer)

Introduction to appliance control systems

Embedded simulation workflows with PicsimLab

🤝 Contributing
Contributions, suggestions, and issues are welcome!

Fork the repo

Create a new feature branch

Commit your changes

Open a pull request

Feel free to discuss ideas by raising an issue first.

📄 License
This project is open source under the MIT License — see LICENSE for details.

🔗 References
PicsimLab Documentation

PIC16F877A Datasheet
