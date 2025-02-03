#include "Profesor.h"

#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "Persoana.h"
#include "Exceptie.h"

using namespace std;
Profesor::Profesor( Persoana &p, char _titlu[]) : Persoana(p), id_prof( ++nextID )
    {
        if( strcmp(_titlu, "profesor") != 0 && strcmp(_titlu, "conferentiar") != 0
                && strcmp(_titlu, "s.l." ) && strcmp(_titlu, "asistent" ) != 0 )
            throw Exceptie("PROFESOR", "Titlu incorect"); //Exceptie: titlu incorect

        strcpy(titlu, _titlu);
    }
    int Profesor::getIDProf(void)
    {
        return id_prof;
    }
    char* Profesor::retNumeComplet(void)
    {
        return strcat( strcat( strcat( strcat( strcpy(_buff, titlu)," "), nume), " "), prenume);
    }
