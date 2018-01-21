#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <iostream>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class ComplexNumber
{
 public:
    ComplexNumber()
      : realPart(0.0), imagPart(0.0) {}

    ComplexNumber(double real, double imag)
          : realPart(real), imagPart(imag) {}

    ComplexNumber(const ComplexNumber &obj);

    friend ComplexNumber operator+ (const ComplexNumber &a, const ComplexNumber &b);
    friend ComplexNumber operator* (const ComplexNumber &a, const ComplexNumber &b);

    friend ostream& operator<<(ostream &out, const ComplexNumber &c);

    ComplexNumber square();
    double magnitude();
    void set(double real, double imag);

 private:
    double realPart;
    double imagPart;
};

#endif
