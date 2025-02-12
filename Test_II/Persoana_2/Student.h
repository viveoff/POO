#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Persoana.h"

class Student: public Persoana {
private:
    char *nume;
    char fac[50];
    char buff[500];
public:
    Student (char *rasa=(char*)"_NULL_", int cantitate = 0, char *nume = (char*)"_NULL_", char fac[50]="n.d");
    ~Student();
    Student(const Student &c);
    Student& operator = (const Student &c);
    char *toStr() override;
    friend istream& operator>>(istream &in,Student &c);
    friend ostream& operator<<(ostream &out,Student &c);
};




#endif // STUDENT_H

