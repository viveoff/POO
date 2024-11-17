//
// Created by Vlad Shorodok on 17.11.2024.
//
#include <iostream>
#include "Patrat.h"
using namespace std;

Patrat::Patrat(double latura) {
    this->latura = latura;
}

Patrat::~Patrat() {

}

void Patrat::setLatura(double latura) {
    this->latura = latura;
}

double Patrat::getLatura() {
    return this->latura;
}

double Patrat::calculeazaAria() {
    return this->latura * this->latura;
}

double Patrat::calculeazaPerimetru() {
    return 4 * this->latura;
}

void Patrat::afisare() {
    cout << "Latura patrat: " << latura << endl;
    cout << "Aria: " << calculeazaAria() << ", Perimetru: " << calculeazaPerimetru() << endl;
}



