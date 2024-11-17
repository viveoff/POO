//
// Created by Vlad Shorodok on 17.11.2024.
//
#include <iostream>
#include "Laptop.h"
using namespace std;


int main() {
    Laptop l1("Macbook Air");
    l1.Afisare();

    Laptop l2;
    l2.setNume((char*)"Dell XPS-15");
    l2.Afisare();
    return 0;
}
