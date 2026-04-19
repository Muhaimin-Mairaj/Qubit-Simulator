#include "Complex.h"

// Constructors
Complex::Complex() : real(0.0), imaginary(0.0) {}
Complex::Complex(double r, double i) : real(r), imaginary(i) {}

// operator overloading
void Complex::operator= (const Complex& other) {
    if (this != &other) {
        this->real = other.real;
        this->imaginary = other.imaginary;
    }
}

// friend std::ostream& Complex::operator<< (std::ostream& out, const Complex& other) {
//     out << "( " << other.real << ", " << other.imaginary << "i )";

//     return out;
// }

// Getter
double Complex::getReal () const { return this->real; }
double Complex::getImag () const { return this->imaginary; }
double Complex::getSquare () const {
    return (this->imaginary * this->imaginary) + (this->real * this->real);
}