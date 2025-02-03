#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
#include "Disciplina.h"
#include "Profesor.h"


Disciplina::Disciplina( char _den[], Profesor &p) : Profesor( p ), id_disc(++nextID)
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
    sprintf(_buff, "%s %s", Persoana::retNumeComplet(), denumire);
    return _buff;
}
char* Disciplina::retProfesor(void)
{
    /*de completat*/
    return Profesor::retNumeComplet();
}
