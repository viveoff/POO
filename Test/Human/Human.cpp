//
// Created by Vlad Shorodok on 19.11.2024.
//
#include <iostream>
using namespace std;
#include "Human.h"

Human::Human(char *name, float height) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

    this->height = height;
}

Human::~Human() {
    if (name != nullptr)
        delete[] this->name;
}

void Human::setName(char *name) {
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

void Human::setHeight(float height) {
    this->height = height;
}

char *Human::getName() {
    return this->name;
}

float Human::getHeight() {
    return this->height;
}

void Human::display() {
    cout << "Name: " << name << "\nHeight: " << height << endl;
}


