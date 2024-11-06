//
// Created by Vlad Shorodok on 04.11.2024.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {
private:
    char *name = nullptr;
    char *prenume = nullptr;
    int id_student;
    double media;
public:
    Student(char *name = (char*)"_NULL", char *prenume = (char*)"_NULL_",
        int id_student = 0, double media = 0.0);
    ~Student();
    void Print() const;
    char *GetNume() const;
    Student(const Student &otherStudent);
    double GetMedia() const;
};

bool comparaNume(const Student &a, const Student &b);
bool comparaMedie(const Student &a, const Student &b);

#endif //STUDENT_H
