#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>

using namespace std;
#include "Exceptie.h"
#include "Persoana.h"
#include "Profesor.h"
#include "Student.h"
#include "Disciplina.h"
#include "Curicula.h"

const int NrCuricule = 2;
const int NrStudenti = 20;
const int NrProfesori = 18;
const int NrDiscipline = 18;

int Profesor::nextID = 0;/*init membru static*/
int Disciplina::nextID = 0;




int main()
{
    cout << "[MODEL EXAMEN POO - 2015]" << endl;
    cout << "\nINTRODUCERE DATE" << endl;
    try
    {
        Persoana p1("Ionescu", "Ion", "20.03.1992"), p2("Popescu", "Vasile", "10.04.1993"), p3/*de continuat*/;
        cin>>p3;
        Student  *st[NrStudenti];
        st[0] = new Student( p1, "01/C", "Calculatoare" );
        st[1] = new Student( p2, "02/C", "Calculatoare" );
        st[2] = new Student( p3, "01/AIA", "Automatica" );
        /*de continuat*/

        Persoana pp1("MARINESCU", "Vasile", "23.09.1972"), pp2("CORBU", "Stefan", "11.02.1973"), pp3/*de continuat*/;
        cin>>pp3;
        Profesor *pr[NrProfesori];
        pr[0] = new Profesor( pp1, "s.l.");
        pr[1] = new Profesor( pp2, "profesor");
        pr[2] = new Profesor( pp3, "conferentiar" );
        /*de continuat*/

        Disciplina *disc[ NrDiscipline ];
        disc[0] = new Disciplina("PCLP I", *pr[0]);
        disc[1] = new Disciplina("Fizica", *pr[2]);
        disc[2] = new Disciplina("Analiza matematica", *pr[2]);
        /*de continuat*/

        cout<<"\tTeste POLIMORFISM:"<<endl;
        Persoana *pers[4];
        pers[0] = &p1;
        pers[1] = st[1];
        pers[2] = pr[2];
        pers[3] = disc[1];
        cout<<"\tPersoana  : "<<pers[0]->retNumeComplet()<<endl;
        cout<<"\tStudentul : "<<pers[1]->retNumeComplet()<<endl;
        cout<<"\tProfesorul: "<<pers[2]->retNumeComplet()<<endl;
        cout<<"\tDisciplina: "<<pers[3]->retNumeComplet()<<endl;
        cout<<"\tEND Teste POLIMORFISM!"<<endl;

        Curicula *curicula[ NrCuricule ];
        curicula[0] = new Curicula( "Calculatoare" );
        curicula[0]->Add(1, *disc[0], "Obligatorie");
        curicula[0]->Add(1, *disc[1], "Obligatorie");
        curicula[0]->Add(5, *disc[2], "Optionala");
        /*de continuat*/

        curicula[1] = new Curicula( "Automatica" );
        curicula[1]->Add(1, *disc[1], "Obligatorie");
        curicula[1]->Add(1, *disc[2], "Obligatorie");
        /*de continuat*/
    }
    catch(Exceptie ex)
    {
        ex.Print();
        exit( -2 );
    }
    catch(...)
    {
        cout<<"Exceptie nedefinita!"<<endl;
        exit( -1 );
    }
    cout << "\nCALCULE PROBLEMA" << endl;
    cout <<"\tAfisare curicula"<<endl;
    //curicula[0]->PrintCuricula();
    //curicula[0]->PrintCuricula();

    cout <<"\tAfisare curicula pe semestrul 3"<<endl;
    //curicula[0]->PrintCuriculaSem( 3 );

    cout <<"\tCauta toti profesorii ce contin subsirul 'MARI' in NUME"<<endl;
    //curicula[0]->PrintProfesori("MARI");

    cout <<"\tAfisare curicula pentru un student"<<endl;
    //Curicula::PrintCuriculaStud( curicula, st[1] );

    cout <<"\tAdministrare Note Student"<<endl;
    //st[0].introduNote( curicula, /*sem*/1 );
    //st[0].introduNote( curicula, /*sem*/2 );
    //st[0].situatieScolara( curicula );

    cout <<"\tAnaliza curicule"<<endl;
    //Curicula::AnalizaIdentic( curicula[0], curicula[1] );
    //Curicula::AnalizaDiferit( curicula[0], curicula[1] );

    cout <<"[END SUBIECT]"<<endl;
    return 0;
}
