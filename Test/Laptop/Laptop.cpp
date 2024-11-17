//
// Created by Vlad Shorodok on 17.11.2024.
//
#include "Laptop.h"
#include <iostream>
#include <cstring>
using namespace std;


// Constructor
Laptop::Laptop(char *nume) {
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

// Destructor
Laptop::~Laptop() {
    if (nume != nullptr)
        delete[] nume;
}

void Laptop::Afisare() {
    cout << "Nume: " << nume << endl;
}

char *Laptop::GetNume() {
    return nume;
}

void Laptop::setNume(char *nume) {
    delete[] this->nume;

    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);
}

