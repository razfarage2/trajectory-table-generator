#include <iostream>
#include "calc_functions.h"

int main() {
    try {
        runSimulation();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    } catch (...) {
        std::cerr << "Unknown error occurred.\n";
        return 1;
    }

    return 0;
}