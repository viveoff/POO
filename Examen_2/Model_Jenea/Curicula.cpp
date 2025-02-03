#include "Curicula.h"
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "Disciplina.h"

using namespace std;
Curicula::Curicula(char _spec[]) : N(0)
    {
        /* de tratat posibilele exceptii*/
        strcpy( den_specializ, _spec);
    }
    void Curicula::Add( int _sem, Disciplina &d, char _tip[] )
    {
        /* de tratat posibilele exceptii*/
        sem[N] = _sem;
        id_disc[N] = d.getIDDisc();
        strcpy( tip_disc[N], _tip );
        N++;
    }
    void Curicula::PrintCuricula(Disciplina *d[], int nr)///nr numarul total de discipline
    {
        cout<<"\n\tCuricula specializarea: "<<den_specializ<<endl;
        cout<<"\nSEM |  TIP          | DISCIPLINA "<<endl;
        for( int i = 0; i < N; i++ )
        {
            cout<<sem[i]<<"   |  "<<tip_disc[i]<<"  |  "<<id_disc[i]<<"| ";
            for(int j=0; j<nr; j++)
            {
                if(d[j]->getIDDisc()==id_disc[i])
                {
                    cout<<d[j]->retNumeComplet()<<endl;
                    break;
                }
            }
        }
    }
