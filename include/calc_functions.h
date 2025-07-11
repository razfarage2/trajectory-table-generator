#ifndef CALC_FUNCTIONS_H
#define CALC_FUNCTIONS_H

#include <string>
#include <cmath>

const double GRAVITY = 9.81;
const double PI = 3.14159265358979323846;

double toRadians(double degrees);
double calculateVerticalVelocity(double maxHeight);
double calculateLaunchAngle(double Vy0, double V0);
double calculateHorizontalVelocity(double V0, double teta);

double xAtTime(double vx0, double t);
double yAtTime(double vy0, double t);

double vxAtTime(double vx0);
double vyAtTime(double vy0, double t);

void trajectoryTable(double vx0, double vy0, double timeStep = 0.1);

void runSimulation();

#endif
