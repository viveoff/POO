//
// Created by Vlad Shorodok on 19.11.2024.
//
#include <iostream>
#include "Aniaml.h"
using namespace std;

int main() {
    Aniaml a1;

    a1.setName("Cat");
    a1.setLegs(4);
    a1.afisare();

    Aniaml a2;
    a2.citire();
    a2.afisare();

    return 0;
}