//
//  Complex.h
//  Test_II
//
//  Created by Vlad Shorodok on 13.01.2025.
//

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0);

    Complex operator+(const Complex& c);
    Complex operator-(const Complex& c);
    Complex operator*(const Complex& c);
    Complex operator/(const Complex& c);

    friend ostream& operator<<(ostream &out, const Complex &c);
};

#endif // COMPLEX_H
