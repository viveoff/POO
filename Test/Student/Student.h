#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {
private:
    char* nume = nullptr;
    char* grupa = nullptr;
    double media;
public:
    Student(char *nume=(char*)"_NULL_", char *grupa =(char*)"_NULL", double = 0.0);
    ~Student();
    void setNume(char *nume);
    void setGrupa(char *grupa);
    void setMedia(double media);

    char *getNume();
    char *getGrupa();
    double getMedia();
    void afisare();
    void citire();
};


#endif // STUDENT_H
