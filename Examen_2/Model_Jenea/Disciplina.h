#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "Profesor.h"
#include "Persoana.h"

using namespace std;
class Disciplina : public Profesor /* profesorului titular*/
{
    static int nextID;
    int id_disc;
    char denumire[20];
    char buff[500];

public:
    Disciplina( char _den[], Profesor &p) ;
    int getIDDisc(void);
    char* retNumeComplet(void);
    char* retProfesor(void);
};

#endif // DISCIPLINA_H
