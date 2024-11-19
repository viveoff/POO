//
// Created by Vlad Shorodok on 19.11.2024.
//

#include <iostream>
#include "Aniaml.h"
using namespace std;

Aniaml::Aniaml(char *name, double legs) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

    this->legs = legs;
}

Aniaml::~Aniaml() {
    if (name != nullptr)
        delete[] this->name;
}

void Aniaml::setName(char *name) {
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

void Aniaml::setLegs(double legs) {
    this->legs = legs;
}

char *Aniaml::getName() {
    return this->name;
}
double Aniaml::getLegs() {
    return this->legs;
}

void Aniaml::afisare() {
    cout << "Name: " << name << "\nLegs: " << legs << endl;
}

void Aniaml::citire() {
    char *temp;

    cout << "Nume: ";
    temp = new char[100];
    cin.getline(temp, 100);
    setName(temp);
    delete[] temp;

    cout << "Numar piciare: ";
    cin >> legs;
    cin.ignore();
}






