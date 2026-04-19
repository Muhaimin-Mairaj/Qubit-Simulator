// #include <vector>
#include <cmath>
#include <Eigen/Dense>
#include "QubitRegister.h"

typedef std::complex<double> Complex;
typedef Eigen::VectorXcd StateVector;

// Constructors
QubitRegister::QubitRegister () : numOfQubits(1) {
    state = StateVector::Zero(1);
    state(0) = 1.0;
}

QubitRegister::QubitRegister (int size) : numOfQubits(size) {
    state = StateVector::Zero(1 << size);
    state(0) = 1.0;
}