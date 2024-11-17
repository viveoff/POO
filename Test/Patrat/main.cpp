//
// Created by Vlad Shorodok on 17.11.2024.
//
#include <iostream>
#include "Patrat.h"
using namespace std;

int main() {
    Patrat p1;
    p1.setLatura(5);
    p1.afisare();

    Patrat p2(10);
    p2.afisare();
}