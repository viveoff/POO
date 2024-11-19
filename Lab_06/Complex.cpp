#include "Complex.h"
#include <iostream>

#include <math.h>
using namespace std;
Complex::Complex(double re,double im)
{
    this->re=re;
    this->im=im;
}
ostream& operator<<(ostream &c,Complex &str)
{
    c<<"Nr: "<<str.re<<"+"<<"("<<str.im<<")"<<"i";
    return c;
}
istream& operator>>(istream &c,Complex &str)
{
    cout<<"Introdu nr.compex.Partea reala si partea imaginare(re,im):"<<endl;
    c>>str.re;
    c>>str.im;
    return c;
}
Complex Complex::operator+(const Complex &c)
{
    return Complex(re+c.re,im+c.im);
}
Complex Complex::operator-(const Complex &c)
{
    return Complex(re-c.re,im-c.im);
}
Complex Complex::operator*(const Complex &c)
{
    return Complex((re*c.re-im*c.im),(re*c.im+im*c.re));
}
Complex Complex::operator/(const Complex &c) {
    double denominator = pow(c.re, 2) + pow(c.im, 2);

    double realPart = (re * c.re + im * c.im) / denominator;
    double imaginaryPart = (im * c.re - re * c.im) / denominator;

    return Complex(realPart, imaginaryPart);
}
bool operator >=(const Complex &c,const Complex &b)
{
    return(c.re>=b.re && c.im>=b.im);
}
/*Complex& Complex::operator=(const Complex &c)
{
    if (this == &c)  // Prevenirea auto-atribuirea
    {
        return *this;  // Dacă obiectul curent este același cu cel atribuit, returnăm *this
    }

    // Atribuim valorile părților reale și imaginare ale obiectului 'c' în obiectul curent
    this->re = c.re;
    this->im = c.im;

    return *this;  // Returnăm referința la obiectul curent
}*/


