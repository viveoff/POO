//
//  Persoana.cpp
//  Examen_2
//
//  Created by Vlad Shorodok on 02.02.2025.
//
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "Persoana.h"
#include "Exceptie.h"

Persoana::Persoana( char _nume[], char _prenume[], char _data_n[])
{
    /*de completat*/
    strcpy(nume, _nume);
    strcpy(prenume, _prenume);
    
    int nr, d, m, y;
    nr = sscanf(_data_n, "%2d.%2d.%4d", &d, &m, &y);
    if ((nr != 3 || m > 12 || d > 31) && strlen(nume) > 0)
        throw Exceptie("PERSOANA", "Data nastere incorecta");
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
    cout << "Citire date " << endl;
    c >> p.nume >> p.prenume >> p.data_n;
    return c;
    
}


