// #include <vector>
#include <cmath>
#include <Eigen/Dense>
#include "QubitRegister.h"
#include <cstdlib>
#include <ctime>

typedef std::complex<double> Complex;
typedef Eigen::VectorXcd StateVector;

// Constructors
QubitRegister::QubitRegister () : numOfQubits(1) {
    state = StateVector::Zero(2);
    state(0) = 1.0;
}

QubitRegister::QubitRegister (int size) : numOfQubits(size) {
    state = StateVector::Zero(1 << size);
    state(0) = 1.0;
}

// implementing the randomize() function
void QubitRegister::randomize(){
    double random;
    for (int i = 0; i < (1 << numOfQubits); i++){
        random = rand() % 100;
        random /= 99;
        state(i) = random;
    }

    normalize();
}

// Implementing the normalize function
void QubitRegister::normalize(){
    double sum = 0;
    for (int i = 0; i < (1 << numOfQubits); i++){
        // sum += state(i).abs();
        sum += std::abs(state(i));
    }
    for (int i = 0; i < (1 << numOfQubits); i++){
        state(i) = state(i)/sum;
    }
}

//operator overloading
std::ostream& operator<<(std::ostream& out, const QubitRegister& other) {
    for (int i = 0; i < (1 << other.numOfQubits); i++){
        // out << other.state(i).abs() << std::endl;
        out << std::abs(other.state(i)) << std::endl;
    }

    return out;
}

