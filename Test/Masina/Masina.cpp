//
// Created by Vlad Shorodok on 18.11.2024.
//

#include <iostream>
#include "Masina.h"
using namespace std;

Masina::Masina(char *nume, double motor) {
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);

    this->motor = motor;
}

Masina::~Masina() {
    if (nume != nullptr) {
        delete[] nume;
    }
}

void Masina::setNume(char *nume) {
    delete[] this->nume;
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

void Masina::setMotor(double motor) {
    this->motor = motor;
}

char *Masina::getNume() {
    return this->nume;
}

double Masina::getMotor() {
    return this->motor;
}

void Masina::Afisare() {
    cout << "Nume: " << nume << "\nMotor: " << motor << endl;
}




