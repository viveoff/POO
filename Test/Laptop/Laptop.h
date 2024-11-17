//
// Created by Vlad Shorodok on 17.11.2024.
//

#ifndef LAPTOP_H
#define LAPTOP_H
#include <iostream>
using namespace std;

class Laptop {
private:
    char *nume = nullptr;
public:
    Laptop(char *nume = (char*)"_NULL_");
    ~Laptop();
    void Afisare();
    char *GetNume();
    void setNume(char *nume);
};

#endif //LAPTOP_H
