#include <iostream>
#include <cstring>
#include "Student.h"
using namespace std;

Student::Student(char *nume, char *grupa, double media) {
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);

    this->grupa = new char[strlen(grupa) + 1];
    strcpy(this->grupa, grupa);

    this->media = media;
}

Student::~Student() {
    if (nume != nullptr)
        delete[] this->nume;
    if (grupa!= nullptr)
        delete[] this->grupa;
}

void Student::setNume(char *nume) {
    delete[] this->nume;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

void Student::setGrupa(char *grupa) {
    delete[] this->grupa;
    this->grupa = new char[strlen(grupa) + 1];
    strcpy(this->grupa, grupa);
}

void Student::setMedia(double media) {
    this -> media = media;
}



char *Student::getNume() {
    return this->nume;
}

char *Student::getGrupa() {
    return this -> grupa;
}

double Student::getMedia() {
    return this -> media;
}


void Student::afisare() {
    cout << "Nume: " << nume << ", Grupa: " << grupa << ", Media: " << media << endl;

}

void Student::citire() {
    char* temp;

    // Citire nume
    cout << "Introduceți numele studentului: ";
    temp = new char[100];
    cin.getline(temp, 100);
    setNume(temp);
    delete[] temp;

    // Citire grupă
    cout << "Introduceți grupa studentului: ";
    temp = new char[100];
    cin.getline(temp, 100);
    setGrupa(temp);
    delete[] temp;

    // Citire media
    cout << "Introduceți media studentului: ";
    cin >> media;
    cin.ignore(); // Curățăm buffer-ul
}




