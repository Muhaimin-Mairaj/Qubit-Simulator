#include <iostream>
#include <Eigen/Dense>
#include "QubitRegister.h"
#include "Gate.h"
#include "GateFactory.h"
#include "Circuit.h"

int main () {
    std::cout << "Qubit Simulator\n";
    std::cout << "Compiler check, 1, 2, 3!\n";

    std::cout << "Size of Complex:\t" << sizeof(std::complex<double>) << "\n";
    return 0;
}