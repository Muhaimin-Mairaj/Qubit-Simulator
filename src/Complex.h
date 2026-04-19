#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
    private:
    double real;
    double imaginary;

    public:
    Complex ();
    Complex (double r, double i);

    void operator= (const Complex& other);
    // friend std::ostream& operator<< (std::ostream& out, const Complex& other);

    double getReal () const;
    double getImag () const;
    double getSquare () const;
};

#endif