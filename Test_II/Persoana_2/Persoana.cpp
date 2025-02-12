#include <iostream>
#include "Persoana.h"
#include <fstream>
#include <cstring>
#include "Exceptie.h"

using namespace std;

Persoana::Persoana(char *rasa, int cantitate) {
    try {
        this->rasa = new char[strlen(rasa) + 1];
        strcpy(this->rasa, rasa);
        
        this->cantitate = cantitate;
        if (cantitate < 0)
            throw Exceptie("e", "d");
    } catch(Exceptie e) {
        e.Print();
    }
}
Persoana::~Persoana() {
    if (rasa != nullptr)
        delete [] rasa;
}
Persoana::Persoana(const Persoana &c) {
    if (this->rasa != nullptr)
        delete [] this->rasa;
    this->rasa = new char[strlen(c.rasa) + 1];
    strcpy(this->rasa, rasa);
    
    this->cantitate = c.cantitate;
}
Persoana& Persoana::operator=(const Persoana &c) {
    if (this == &c)
        return *this;
    if (c.rasa != nullptr)
        delete [] c.rasa;
    this->rasa = new char[strlen(c.rasa) + 1];
    strcpy(this->rasa, rasa);
    this->cantitate = cantitate;
    return *this;
}
char *Persoana::toStr() {
    sprintf(buff, "Rasa: %s, Cantitate: %d", rasa, cantitate);
    return buff;
}
istream& operator>>(istream& in, Persoana &c) {
    cout << "Introdu rasa: " << endl;
        
        char buffer[50];
        in >> buffer; // Citire fără getline (atenție: nu citește spații)
        
        c.rasa = new char[strlen(buffer) + 1];
        strcpy(c.rasa, buffer);
        
        cout << "Introdu cantitate: " << endl;
        in >> c.cantitate;
        
        return in;
}
ostream& operator<<(ostream& out, Persoana &c) {
    out << c.toStr() << endl;
    return out;
}
