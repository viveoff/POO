#ifndef EXCEPTIE_H
#define EXCEPTIE_H
#include <iostream>

using namespace std;



class Exceptie {
private:
    char catEx[50];
    char tipEx[50];
public:
    Exceptie(char catEx[50]="n.d", char tipEx[50]="n.d");
    void Print();
    
};
#endif // EXCEPTIE_H
