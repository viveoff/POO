//
// Created by Vlad Shorodok on 04.11.2024.
//
#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

Student::Student(char *name, char *prenume, int id_student, double media) {
    this -> name = new char[strlen(name) + 1];
    strcpy(this-> name, name);

    this -> prenume = new char[strlen(prenume) + 1];
    strcpy(this-> prenume, prenume);

    this -> media = media;
    this -> id_student = id_student;
}

Student::~Student() {
    if (name != nullptr)
        delete[] name;
    if (prenume != nullptr)
        delete[] prenume;
}

void Student::Print() const {
    cout << "Nume: " << name
         << "\nPrenume: " << prenume
         << "\nID Student: " << id_student
         << "\nMedia: " << endl;
}

char *Student::GetNume() const {
    return name;
}

Student::Student(const Student &otherStudent) {
    name = new char[strlen(otherStudent.name) + 1];
    strcpy(name, otherStudent.name);

    prenume = new char[strlen(otherStudent.prenume) + 1];
    strcpy(prenume, otherStudent.prenume);

    media = otherStudent.media;
    id_student = otherStudent.id_student;
}

double Student::GetMedia() const {
    return media;
}

bool comparaMedie(const Student &a, const Student &b) {
    return a.GetMedia() < b.GetMedia();
}

bool comparaNume(const Student &a, const Student &b) {
    return strcmp(a.GetNume(), b.GetNume()) < 0; // Return true if a's name is less than b's
}






