//
//  Curicula.cpp
//  Examen_2
//
//  Created by Vlad Shorodok on 03.02.2025.
//
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>

using namespace std;
#include "Curicula.h"
#include "Disciplina.h"

Curicula::Curicula(char _spec[]) : N(0)
{
    /* de tratat posibilele exceptii*/
    strcpy( den_specializ, _spec);
}

void Curicula::Add( int _sem, Disciplina &d, char _tip[] )
{
    /* de tratat posibilele exceptii*/
    sem[N] = _sem;
    id_disc[N] = d.getIDDisc();
    strcpy( tip_disc[N], _tip );
    N++;
}
