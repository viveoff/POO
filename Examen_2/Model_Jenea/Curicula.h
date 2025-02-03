#ifndef CURICULA_H
#define CURICULA_H
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "Disciplina.h"


using namespace std;

class Curicula
{
    int N;                  /*numarul total de discipline*/
    char den_specializ[50]; /*Specializare*/
    int  sem[20];           /*semestre: 1/2/3/4/5/6/7/8...*/
    int  id_disc[20];       /*id-uri discipline din curicula*/
    char tip_disc[20][10];  /*Obigatorie/Facultativa/Optionala ...*/
public:
    Curicula(char _spec[]);
    void Add( int _sem, Disciplina &d, char _tip[] );
    void PrintCuricula(Disciplina *d[], int nr);
};

#endif // CURICULA_H
