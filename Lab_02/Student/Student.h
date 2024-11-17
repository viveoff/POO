#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
private:
    char *name = nullptr;
    char *prenume = nullptr;
    int nr_mat;
    double media;
public:
    Student(char *name = (char*)"_NULL_", char *prenume = (char*)"_NULL_", int nr_mat = 0, double media = 0.0);
    ~Student();
    void Print();
    char* GetNume() const;
    char* GetPrenume() const;
    int GetNrMat() const;
    double GetMedia() const;
    Student(const Student &u);
};

#endif // STUDENT_H