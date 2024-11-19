//
// Created by Vlad Shorodok on 18.11.2024.
//
#include <iostream>
#include "Vector.h"
using namespace std;

Vector::Vector(int dimensiune) {
    this->dimensiune = dimensiune;
    this->elemente = new int[dimensiune];
    for (int i = 0; i < dimensiune; i++) {
        elemente[i] = 0;
    }
}

Vector::~Vector() {
    if (elemente != nullptr) {
        delete[] elemente;
    }
}

void Vector::setElemente(int *elemente, int dimensiune) {
    delete[] this->elemente;
    this->dimensiune = dimensiune;
    this->elemente = new int[dimensiune];
    for (int i = 0; i < dimensiune; i++) {
        this->elemente[i] = elemente[i];
    }
}

void Vector::setDimensiune(int dimensiune) {
    delete[] this->elemente;
    this->dimensiune = dimensiune;
    this->elemente = new int[dimensiune];
}

int *Vector::getElemente() {
    return this->elemente;
}

int Vector::getDimensiune() {
    return this->dimensiune;
}

void Vector::citireElemente() {
    cout << "Introdu: " << dimensiune << " elemente:\n";
    for (int i = 0; i < dimensiune; i++) {
        cout << "Elementul: " << i + 1 << ": ";
        cin >> elemente[i];
    }
}

void Vector::afisareElemente() {
    cout << "Elementele vectorului sunt: ";
    for (int i = 0; i < dimensiune; i++) {
        cout << elemente[i] << " ";
    }
    cout << endl;
}




