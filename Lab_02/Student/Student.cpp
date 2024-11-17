#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

Student::Student(char *name, char *prenume, int nr_mat, double media)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->prenume = new char[strlen(prenume) + 1];
    strcpy(this->prenume, prenume);
    this->media = media;
    this->nr_mat = nr_mat;
}

Student::~Student()
{
    if (name != nullptr)
        delete[] name;
    if (prenume != nullptr)
        delete[] prenume;
}

void Student::Print()
{
    cout << " Nume:" << name
         << "\n Prenume:" << prenume
         << "\n Nr de matricol:" << nr_mat
         << "\n Media:" << media << endl;
}

char* Student::GetNume() const
{
    return name;
}

char* Student::GetPrenume() const
{
    return prenume;
}

int Student::GetNrMat() const
{
    return nr_mat;
}

double Student::GetMedia() const
{
    return media;
}

Student::Student(const Student &u)
{
    name = new char[strlen(u.name) + 1];
    strcpy(name, u.name);
    prenume = new char[strlen(u.prenume) + 1];
    strcpy(prenume, u.prenume);
    media = u.media;
    nr_mat = u.nr_mat;
}