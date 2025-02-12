#ifndef PERSOANA_H
#define PERSOANA_H
#include <fstream>
#include <iostream>

using namespace std;

class Persoana {
private:
    char *rasa = nullptr;
    int cantitate;
    char buff[500];
public:
    Persoana(char *rasa=(char*)"_NULL_", int cantitate = 0);
    ~Persoana();
    Persoana(const Persoana &c);
    Persoana& operator=(const Persoana &c);
    virtual char *toStr();
    friend istream& operator>>(istream& in, Persoana &c);
    friend ostream& operator<<(ostream& out, Persoana &c);
};





#endif // PERSOANA_H
