# VEX Robotics — Team 9698B

Competition robot code for VEX Robotics Team 9698B, competing in the **High Stakes** (2024–2025) season.

## Overview

This repository contains the full autonomous and driver-control codebase for our competition robot, developed in C++ using the VEX V5 platform. As Team Captain, I led both the software architecture and mechanical design decisions for the robot across multiple seasons.

## Key Features

- **PID Control** — Custom PID controllers implemented for both drivetrain movement (precise autonomous positioning/turning) and lift/arm mechanism control, improving consistency and accuracy over open-loop control
- **Multiple Autonomous Routines** — 11+ distinct autonomous programs (`src/auto1.cpp`–`auto11.cpp`) built for different starting positions and match strategies
- **Driver Control** — Custom driver-control mapping and logic for competition matches (`src/drivercontrol.cpp`)
- **Modular Codebase** — Separated robot configuration, autonomous logic, driver control, and utility functions for maintainability

## Tech Stack

- **Language:** C++
- **Platform:** VEX V5 (VEXcode)
- **Build:** Makefile-based build system

## Project Structure

├── src/
│ ├── main.cpp # Entry point
│ ├── autonomous.cpp # Autonomous routine selector
│ ├── auto1.cpp – auto11.cpp # Individual autonomous routines
│ ├── drivercontrol.cpp # Driver (tele-op) control logic
│ ├── robot-config.cpp # Robot hardware configuration
│ ├── function.cpp # Shared utility functions
│ └── screen.cpp # V5 brain screen UI
├── include/ # Header files
├── PID.cpp # PID controller (drivetrain + lift/arm)
└── makefile


## Results

- **VEX Robotics World Championship — Division Champion** (2022, 2023, 2024) — three consecutive years

## About

Built and maintained by Minye Zheng, Team Captain, Team 9698B.
