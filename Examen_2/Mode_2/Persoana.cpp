#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
#include "Persoana.h"
#include "Exceptie.h"
#include <fstream>


Persoana::Persoana( char _nume[], char _prenume[], char _data_n[])
{
    strcpy(nume, _nume);
    strcpy(prenume, _prenume);
    
    int nr, d, m, y;
    nr = sscanf(_data_n, "%2d.%2d.%4d", &d, &m, &y );
    if ((nr != 3 || m > 12 || d > 31) && strlen(nume) > 0)
        throw Exceptie("PERSOANA", "data incorecta");
    strcpy(data_n, _data_n);
}
char* Persoana::retDataNastere(void)
{
    /*de completat*/
    return data_n;
}
char* Persoana::retNumeComplet(void)
{
    /*de completat*/
    sprintf(_buff,"%s %s", nume, prenume);
    return _buff;
}
istream& operator>>(istream &c, Persoana &p)
{
    /*de completat*/
    c >> p.nume >> p.prenume >> p.data_n;
    return c;
}

void Persoana::citireFisier(fstream &in) {
    in >> nume >> prenume >> data_n;
}

ostream& operator<<(ostream &c, const Persoana &p) {
    c << p.nume << " " << p.prenume << " " << p.data_n; // Adăugăm spații
    return c;
}

void Persoana::sirPersoana(Persoana p[], int nr) {
    cout << "Citire fisier:" << endl;
    for (int i = 0; i < nr; i++) {
        cout << p[i] << endl;
    }
}
