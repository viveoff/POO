//
// Created by Vlad Shorodok on 18.11.2024.
//
#include <iostream>
using namespace std;
#include "xyz/xyz.h"

xyz::xyz(char *a, int b) {
    this->a = new char[strlen(a) + 1];
    strcpy(this->a, a);

    this-> b = b;
}

xyz::~xyz() {
    if (a != nullptr) {
        delete[] this->a;
    }
}

void xyz::setA(char *a) {
    delete[] this->a;
    this->a = new char[strlen(a) + 1];
    strcpy(this->a, a);
}

void xyz::setB(int b) {
    this->b = b;
}

char *xyz::getA() {
    return this->a;
}

int xyz::getB() {
    return this->b;
}

void xyz::Afisare() {
    cout << "Object 1: " << a << "\nObject 2: " << b << endl;

}

