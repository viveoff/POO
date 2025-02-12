#include "Student.h"
#include "Persoana.h"
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;


Student::Student (char *rasa, int cantitate, char *nume, char fac[50]): Persoana(rasa, cantitate) {
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
    strcpy(this->fac, fac);
}
Student::~Student() {
    if (nume != nullptr)
        delete [] nume;
}
Student::Student(const Student &c) {
    if (c.nume != nullptr)
        delete [] c.nume;
    this->nume = new char[strlen(c.nume) + 1];
    strcpy(this->nume, c.nume);
    
    strcpy(this->fac, c.fac);
}
Student& Student::operator = (const Student &c) {
    if (this == &c)
        return *this;
    Persoana::operator=(c);
    
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, c.nume);
    
    strcpy(this->fac, c.fac);
    
    return *this;
}
char *Student::toStr() {
    sprintf(buff, "%s, nume: %s, facultate: %s", Persoana::toStr(), nume, fac);
    return buff;
}
istream& operator>>(istream &in,Student &c) {
    in >> (Persoana &)c;
    cout << "Introdu numele : " << endl;
    char buffer[50];
    fflush(stdin);
    in.getline(buffer, 50);
    c.nume = new char[strlen(buffer) + 1];
    strcpy(c.nume, buffer);
    
    cout << "Introdu facultate : " << endl;
    fflush(stdin);
    in.getline(c.fac, 50);
    
    return in;
}
ostream& operator<<(ostream &out,Student &c) {
    out << c.toStr() << endl;
    return out;
}


