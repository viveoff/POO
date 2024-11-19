//
// Created by Vlad Shorodok on 19.11.2024.
//

#include "Country.h"
#include <iostream>
using namespace std;

Country::Country(char *name, float population) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

    this->population = population;
}

Country::~Country() {
    if (name != nullptr)
        delete[] this->name;
}

void Country::setName(char *name) {
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

void Country::setPopulation(float population) {
    this->population = population;
}

char *Country::getName() {
    return this->name;
}

float Country::getPopulation() {
    return this->population;
}

void Country::display() {
    cout << "Country: " << name << "\nPopulation: " << population << " millions" << endl;
}










