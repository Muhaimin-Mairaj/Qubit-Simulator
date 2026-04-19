#ifndef QUBIT_REGISTER_H
#define QUBIT_REGISTER_H

#include <Eigen/Dense>

typedef std::complex<double> Complex;
typedef Eigen::VectorXcd StateVector;

class QubitRegister {
    private:
    int numOfQubits;
    StateVector state;

    public:
    QubitRegister();
    QubitRegister(int size);
};

#endif