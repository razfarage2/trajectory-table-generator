# Projectile Trajectory Simulator (C++)

A clean, physics-based C++ console application that calculates and displays a projectile's motion over time. Based on user input (initial velocity and launch angle), it simulates and prints a time-stepped table of position and velocity.

---

## What It Does

- Asks the user for:
  - Initial velocity (in meters per second)
  - Launch angle (in degrees)
- Computes:
  - Vertical and horizontal velocity components
  - Position and velocity at each time step
- Displays:
  - A trajectory table until the projectile hits the ground

---

## Sample Output

Time(s) X(m) Y(m) Vx(m/s) Vy(m/s)
0.00 0.00 0.00 70.71 70.71
0.10 7.07 6.97 70.71 69.73
0.20 14.14 13.85 70.71 68.75

---

## Concepts Used

- **Kinematic Equations** for 2D projectile motion:
  - \( v_y(t) = v_{y0} - g \cdot t \)
  - \( y(t) = v_{y0} \cdot t - \frac{1}{2} g t^2 \)
  - \( x(t) = v_{x0} \cdot t \)
  
- **Trigonometry** for decomposing velocity:
  - \( v_{x0} = v_0 \cdot \cos(\theta) \)
  - \( v_{y0} = v_0 \cdot \sin(\theta) \)

---

## Project Structure
project/
├── include/
├─────calc_functions.h
├── src/
├───── calc_functions.cpp
├───── main.cpp # Entry point with main()
├── README.md # You're reading this


## Author
Developed by Raz Farage as part of a study for learning CPP and mathematics and physics.