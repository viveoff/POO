//
//  Curicula.cpp
//  Examen_2
//
//  Created by Vlad Shorodok on 02.02.2025.
//
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "Disciplina.h"
#include "Exceptie.h"
#include "Curicula.h"

Curicula::Curicula(char _spec[]) : N(0)
{
    /* de tratat posibilele exceptii*/
    if (strlen(_spec) >= 50)
        throw Exceptie("Curicula", "Denumire pre lunga");
    strcpy( den_specializ, _spec);
}
void Curicula::Add( int _sem, Disciplina &d, char _tip[] )
{
    /* de tratat posibilele exceptii*/
    if (N >= 100)
        throw Exceptie("Curicula", "nr maxim de discipline");
    if (_sem <= 0)
        throw Exceptie("Curicula", "Semestru invalid");
    sem[N] = _sem;
    id_disc[N] = d.getIDDisc();
    strcpy( tip_disc[N], _tip );
    N++;
}
