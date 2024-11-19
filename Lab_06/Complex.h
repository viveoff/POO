#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex
{
double re, im;
public:

Complex(double re=0.0,double im=0.0);
Complex operator+(const Complex &c);
Complex operator-(const Complex &c);
Complex operator*(const Complex &c);
Complex operator/(const Complex &c);
friend ostream& operator<<( ostream &c, Complex &str );
friend istream& operator>>( istream &c, Complex &str );
friend bool operator >=(const Complex &c,const Complex &b);
///Complex& operator=(const Complex &c);
};
istream& operator>>( istream &c, Complex &str );
ostream& operator<<(ostream &c,Complex &str);
bool operator>=(const Complex &c,const Complex &b);

#endif // COMPLEX_H
