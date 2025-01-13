//
//  Complex.cpp
//  Test_II
//
//  Created by Vlad Shorodok on 13.01.2025.
//

#include "Complex.h"

Complex::Complex(float r, float i) : real(r), imag(i) {}

Complex Complex::operator+(const Complex& c) {
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(const Complex& c) {
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator*(const Complex& c) {
    return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

Complex Complex::operator/(const Complex& c) {
    float denominator = c.real * c.real + c.imag * c.imag;
    return Complex((real * c.real + imag * c.imag) / denominator,
                   (imag * c.real - real * c.imag) / denominator);
}

ostream& operator<<(ostream &out, const Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}
