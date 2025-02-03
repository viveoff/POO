#ifndef CURICULA_H
#define CURICULA_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "Disciplina.h"
#include "Exceptie.h"

class Curicula
{
    int N;                  /*numarul total de discipline*/
    char den_specializ[50]; /*Specializare*/
    int  sem[20];           /*semestre: 1/2/3/4/5/6/7/8...*/
    int  id_disc[20];       /*id-uri discipline din curicula*/
    char tip_disc[20][10];  /*Obigatorie/Facultativa/Optionala ...*/
public:
    Curicula(char _spec[]) : N(0)
    {
        /* de tratat posibilele exceptii*/
        if( strcmp(_spec, "Calculatoare") != 0 && strcmp(_spec, "Automatica") != 0)
            throw Exceptie("Curicula", "Specialitate incorecta"); //Exceptie: titlu incorect

    strcpy(den_specializ, _spec);
    }
    void Add( int _sem, Disciplina &d, char _tip[] )
    {
        /* de tratat posibilele exceptii*/
        sem[N] = _sem;
        id_disc[N] = d.getIDDisc();
        strcpy( tip_disc[N], _tip );
        N++;
    }
};
/*

void PrintCuricula(Disciplina *d[], int NrD)
{
    cout << den_spec << endl;
    for (int j = 0; j < nrD; j++)
        cout << d[j]->retNumeComplet() << endl;
}
*/

#endif // CURICULA_H
