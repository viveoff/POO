#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>


using namespace std;

class Student
{
private:
    char *name=nullptr;
    char *prenume=nullptr;
    int nr_mat;
    double media;
public:
    Student(char *name=(char*)"_NULL_",char *prenume=(char*)"_NULL_",int nr_mat=0,double media=0.0);
    ~Student();
    void Print();
    char* GetNume() const;
    Student(const Student &u);
    double GetMedia() const;

};
bool ComparN(const Student &a,const Student &b);
bool comparMed(const Student &a, const Student &b);


#endif // STUDENT_H
