//
// Created by Vlad Shorodok on 19.11.2024.
//
#include "Country.h"
#include <iostream>
using namespace std;

int main() {
    Country c1;
    c1.setName("Romania");
    c1.setPopulation(20);
    c1.display();

    cout << c1.getName();
    cout << c1.getPopulation();
    return 0;
}