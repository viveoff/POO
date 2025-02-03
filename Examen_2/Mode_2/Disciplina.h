#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
#include "Profesor.h"


class Disciplina : public Profesor /* profesorului titular*/
{
    static int nextID;
    int id_disc;
    char denumire[20];
    char _buff[500];
public:
    Disciplina( char _den[], Profesor &p);
    int getIDDisc(void);
    char* retNumeComplet(void);
    char* retProfesor(void);
};


#endif // DISCIPLINA_H
