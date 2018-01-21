#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <fstream>
#include <iostream>
#include <string>
#include "complex_number.h"

using namespace std;


// 13. Override the operator+ for the ComplexNumber
ComplexNumber operator+ (const ComplexNumber &a, const ComplexNumber &b)
{
    ComplexNumber result;
    result.realPart = a.realPart + b.realPart;
    result.imagPart = a.imagPart + b.imagPart;
    return result;
}
// 12. override the operator* for the Complex Number
ComplexNumber operator* (const ComplexNumber &a, const ComplexNumber &b)
{
    ComplexNumber result;
    result.realPart = (a.realPart * b.realPart) - (a.imagPart * b.imagPart);
    result.imagPart = (a.realPart * b.imagPart) + (a.imagPart * b.realPart);
    return result;
}

ComplexNumber::ComplexNumber(const ComplexNumber &obj)
{
    cout << "Calling copy constructor!" << endl;
    this->realPart = obj.realPart;
    this->imagPart = obj.imagPart;
}
// 9. magnitude method to get the magnitued of the complex number
double ComplexNumber::magnitude()
{
    return sqrt( (pow( this->realPart, 2 ) )+( pow(this->imagPart, 2 ) ));
}

void ComplexNumber::set(double real, double imag)
{
    realPart = real;
    imagPart = imag;
}
//10. override the stream operator for the ComplexNumber
ostream& operator<< (ostream &out, const ComplexNumber &c)
{
    out << "("<<c.realPart<< ","<< c.imagPart<<")"<<endl;
    return out;
}

// 11. square method for the complex number that returns the square
ComplexNumber ComplexNumber::square()
{
    ComplexNumber result;
    result.realPart   =   (this->realPart * this->realPart)
                      -   (this->imagPart * this->imagPart);
    result.imagPart = (this->realPart * this->imagPart)
                                + (this->imagPart * this->realPart);
    return result;
}
