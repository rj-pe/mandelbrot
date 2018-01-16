#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <fstream>
#include <iostream>
#include <string>
#include "complex_number.h"

using namespace std;


ComplexNumber::ComplexNumber(double rr, double ii) 
    : r(rr), i(ii) 
{
}

// 13. Override the operator+ for the ComplexNumber
ComplexNumber operator+ (const ComplexNumber &a, const ComplexNumber &b)
{
    ComplexNumber result;
    result.r = a.r + b.r;
    result.i = a.i + b.i;
    return result;
}
// 12. override the operator* for the Complex Number
ComplexNumber operator* (const ComplexNumber &a, const ComplexNumber &b)
{
    ComplexNumber result;
    result.r = (a.r * b.r) - (a.i * b.i);
    result.i = (a.r * b.i) + (a.i * b.r);
    return result;
}

ComplexNumber::ComplexNumber(const ComplexNumber &obj) 
{
    cout << "Calling copy constructor!" << endl;
    this->r = obj.r;
    this->i = obj.i;
}
// 9. magnitude method to get the magnitued of the complex number
double ComplexNumber::magnitude()
{
    return sqrt( (pow( this->r, 2 ) )+( pow(this->i, 2 ) ));
}

void ComplexNumber::set(double ri, double ii) 
{
    r = ri;
    i = ii;
}
//10. override the stream operator for the ComplexNumber
ostream& operator<< (ostream &out, const ComplexNumber &c)
{
    out << "("<<c.r<< ","<< c.i<<")"<<endl;
    return out;
}

// 11. square method for the complex number that returns the square
ComplexNumber ComplexNumber::square()
{
    ComplexNumber result;
    result.r=( this->r*this->r )-( this->i*this->i );
    result.i=( this->r * this->i ) + ( this->i * this->r );
    return result;
}