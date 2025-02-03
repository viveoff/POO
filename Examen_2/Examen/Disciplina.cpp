//
//  Disciplina.cpp
//  Examen_2
//
//  Created by Vlad Shorodok on 02.02.2025.
//
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "Profesor.h"
#include "Disciplina.h"

Disciplina::Disciplina( char _den[], Profesor &p) : Profesor( p )
{
    //de initializat ID-ul corect
    strcpy(denumire, _den);
}
int Disciplina::getIDDisc(void)
{
    /*de completat*/
    return id_disc;
}
char* Disciplina::retNumeComplet(void)
{
    /*de completat*/
    sprintf(_buff,"%s %s", Persoana::retNumeComplet(), denumire);
    return _buff;
}
char* Disciplina::retProfesor(void)
{
    /*de completat*/
    return Profesor::retNumeComplet();
}
