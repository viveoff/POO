#include "Disciplina.h"
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "Profesor.h"
#include "Persoana.h"

using namespace std;
Disciplina::Disciplina( char _den[], Profesor &p) : Profesor( p ),id_disc(++nextID)
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
        sprintf(buff,"%s %s",Persoana::retNumeComplet(),denumire);
        return buff;
    }
    char* Disciplina::retProfesor(void)
    {
        /*de completat*/
        return Profesor::retNumeComplet();
    }
