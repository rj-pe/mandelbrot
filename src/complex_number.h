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
    ComplexNumber(double real = 0, double imag = 0);

    ComplexNumber(const ComplexNumber &obj);

    friend ComplexNumber operator+ (const ComplexNumber &a, const ComplexNumber &b);
    friend ComplexNumber operator* (const ComplexNumber &a, const ComplexNumber &b);

    friend ostream&      operator<<(ostream &out, const ComplexNumber &c);

    ComplexNumber square();
    double magnitude();
    void set(double ri, double ii);

 private:
    double r;
    double i;
};

#endif