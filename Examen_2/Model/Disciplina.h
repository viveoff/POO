#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "Profesor.h"
#include "Exceptie.h"

class Disciplina : public Profesor /* profesorului titular*/
{
    static int nextID;
    int id_disc;
    char denumire[20];
    char _buff[500];
public:
    Disciplina( char _den[], Profesor &p) : Profesor( p ), id_disc(++nextID)
    {
        //de initializat ID-ul corect
        strcpy(denumire, _den);
    }
    int getIDDisc(void)
    {
        /*de completat*/
        return id_disc;
    }
    char* retNumeComplet(void)
    {
        /*de completat*/
        sprintf(_buff, "%s %s", Persoana::retNumeComplet(), denumire);
        return _buff;
    }
    char* retProfesor(void)
    {
        /*de completat*/
        return Profesor::retNumeComplet();
    }
};

#endif // DISCIPLINA_H
