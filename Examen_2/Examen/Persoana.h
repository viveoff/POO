//
//  Persoana.h
//  Examen_2
//
//  Created by Vlad Shorodok on 02.02.2025.
//
#ifndef PERSOANA_H
#define PERSOANA_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include <fstream>

class Persoana
{
protected:
    char nume[20], prenume[20], data_n[20]; /*dd.mm.yyyy*/
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Persoana( char _nume[]="", char _prenume[]="", char _data_n[]="");
    char* retDataNastere(void);
    virtual char* retNumeComplet(void);
    friend istream& operator>>(istream &c, Persoana &p);
    friend ostream& operator<<(ostream &c, Persoana &p);
    void citireFisier(fstream &in);
    static void sirPersoana(Persoana p[], int nr);
};

#endif // PERSOANA_H
