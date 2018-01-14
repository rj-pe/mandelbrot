#include <iostream>
#include <cmath>
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



// 12. override the operator* for the Complex Number



// 11. square method for the complex number that returns the square


// 10. override the stream operator for the ComplexNumber


ComplexNumber::ComplexNumber(const ComplexNumber &obj) {
    cout << "Calling copy constructor!" << endl;
    this->r = obj.r;
    this->i = obj.i;
}

// 9. magnitude method to get the magnitued of the complex number
