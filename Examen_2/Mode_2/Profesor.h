#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
#include "Persoana.h"

class Profesor : public Persoana
{
    static int nextID;
    int id_prof;
    char titlu[20]; /* profesor / conferentiar / s.l. / asistent */
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Profesor( Persoana &p, char _titlu[]);
    int getIDProf(void);
    char* retNumeComplet(void);
};

#endif // PROFESOR_H
