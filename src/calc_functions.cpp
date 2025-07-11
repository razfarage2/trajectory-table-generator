#include "calc_functions.h"
#include <iostream>
#include <iomanip>

double toRadians(double degrees) {
    return degrees * (PI / 180.0);
}

double calculateVerticalVelocity(double V0, double angleRadians) {
    return V0 * sin(angleRadians);
}

double calculateHorizontalVelocity(double V0, double angleRadians) {
    return V0 * cos(angleRadians);
}

double xAtTime(double Vx0, double t) {
    return Vx0 * t;
}

double yAtTime(double Vy0, double t) {
    return (Vy0 * t) - (0.5 * GRAVITY * t * t);
}

double vxAtTime(double Vx0) {
    return Vx0;
}

double vyAtTime(double Vy0, double t) {
    return Vy0 - (GRAVITY * t);
}

void trajectoryTable(double vx0, double vy0, double timeStep) {
    double t = 0.0;
    double x = 0.0;
    double y = 0.0;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "\nTime(s)\tX(m)\tY(m)\tVx(m/s)\tVy(m/s)\n";
    std::cout << "-------------------------------------------\n";

    while (true) {
        x = xAtTime(vx0, t);
        y = yAtTime(vy0, t);
        double vx = vxAtTime(vx0);
        double vy = vyAtTime(vy0, t);

        if (y < 0) break;

        std::cout << t << "\t" << x << "\t" << y << "\t" << vx << "\t" << vy << "\n";
        t += timeStep;
    }

    std::cout << "\nSimulation complete. Press Enter to exit...";
    std::cin.ignore();
    std::cin.get();
}

void runSimulation() {
    double initialVelocity, angleDegrees;

    std::cout << "Enter initial velocity (m/s): ";
    std::cin >> initialVelocity;

    std::cout << "Enter launch angle (degrees): ";
    std::cin >> angleDegrees;

    if (initialVelocity <= 0 || angleDegrees <= 0 || angleDegrees >= 90) {
        throw std::invalid_argument("Velocity must be > 0 and angle must be between 0 and 90 degrees.");
    }

    double angleRadians = toRadians(angleDegrees);
    double Vy0 = calculateVerticalVelocity(initialVelocity, angleRadians);
    double Vx0 = calculateHorizontalVelocity(initialVelocity, angleRadians);

    std::cout << "\nGenerating trajectory table...\n";
    trajectoryTable(Vx0, Vy0, 0.1);
}