#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "Persoana.h"

class Student : public Persoana
{
    char nr_mat[20];    /*numar matricol*/
    char specializ[20]; /*Specializare*/
    char _buff[500]; /* utilizat pentru constructii de siruri returnate */
public:
    Student(Persoana &_pers, char _nr_mat[], char _spec[]) :Persoana(_pers)
    {
        /*de completat*/
        strcpy(nr_mat, _nr_mat);
        strcpy(specializ, _spec);

    }
    char* retNumeComplet(void)
    {
        sprintf(_buff, "%s %s", Persoana::retNumeComplet(), specializ);
        return _buff;
    }
    char* retNrMat(void)
    {
        /*de completat*/
        return nr_mat;
    }
    char* retSpec(void)
    {
        /*de completat*/
        return specializ;
    }
};


#endif // STUDENT_H
