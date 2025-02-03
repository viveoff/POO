#include <iostream>
#include <stdlib.h>
#include <string.h>


using namespace std;
#include "Exceptie.h"
#include "Persoana.h"
#include "Student.h"
#include "Profesor.h"
#include "Disciplina.h"
#include "Curicula.h"
#include <fstream>

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
    Student  *st[NrStudenti];
    Profesor *pr[NrProfesori];
    Disciplina *disc[ NrDiscipline ];
    Persoana *pers[6];
    Curicula *curicula[ NrCuricule ];
    try
    {
        Persoana p1("Ionescu", "Ion", "20.03.1992"), p2("Popescu", "Vasile", "10.04.1993"), p3, p4("Ivan", "ES", "11.02.2020"), p5("Q", "W", "14.02.2005"), p6("Ed", "sa", "13.10.2020");
        cin>>p3;
        Persoana p7("Ionescu", "Ion", "20.03.1992"), p8("Popescu", "Vasile", "10.04.1993"), p9, p10("Ivan", "ES", "12.01.2020"), p11("Q", "W", "13.04.2021"), p12("Ed", "sa", "10.02.2020");
        st[0] = new Student( p1, "01/C", "Calculatoare" );
        st[1] = new Student( p2, "02/C", "Calculatoare" );
        st[2] = new Student( p3, "01/AIA", "Automatica" );
        st[3] = new Student( p5, "01/AIA", "Automatica" );
        st[4] = new Student( p6, "01/AIA", "Automatica" );
        st[5] = new Student( p7, "01/C", "Calculatoare" );
        st[6] = new Student( p8, "02/C", "Calculatoare" );
        st[7] = new Student( p9, "01/AIA", "Automatica" );
        st[8] = new Student( p10, "01/AIA", "Automatica" );
        st[9] = new Student( p11, "01/AIA", "Automatica" );
        
        
        /*de continuat*/

        Persoana pp1("MARINESCU", "Vasile", "23.09.1972"), pp2("CORBU", "Stefan", "11.02.1973"), pp3/*de continuat*/;
        cin>>pp3;
        Persoana pp4("MARINESCU", "Vasile", "23.09.1972"), pp7("CORBU", "Stefan", "11.02.1973");
        Persoana pp5("MARINESCU", "Vasile", "23.09.1972"), pp8("CORBU", "Stefan", "11.02.1973");
        Persoana pp6("MARINESCU", "Vasile", "23.09.1972"), pp9("CORBU", "Stefan", "11.02.1973");
        pr[0] = new Profesor( pp1, "s.l.");
        pr[1] = new Profesor( pp2, "profesor");
        pr[2] = new Profesor( pp3, "conferentiar" );
        /*de continuat*/
        pr[3] = new Profesor( pp4, "s.l.");
        pr[4] = new Profesor( pp5, "profesor");
        pr[5] = new Profesor( pp6, "conferentiar" );
        pr[6] = new Profesor( pp7, "s.l.");
        pr[7] = new Profesor( pp8, "profesor");
        pr[8] = new Profesor( pp9, "conferentiar" );

        disc[0] = new Disciplina("PCLP I", *pr[0]);
        disc[1] = new Disciplina("Fizica", *pr[2]);
        disc[2] = new Disciplina("Analiza matematica", *pr[2]);
        /*de continuat*/
        disc[3] = new Disciplina("PCLP I", *pr[3]);
        disc[4] = new Disciplina("Fizica", *pr[4]);
        disc[5] = new Disciplina("Analiza matematica", *pr[5]);
        disc[6] = new Disciplina("PCLP I", *pr[6]);
        disc[7] = new Disciplina("Fizica", *pr[7]);
        disc[8] = new Disciplina("Analiza matematica", *pr[8]);

        cout<<"\tTeste POLIMORFISM:"<<endl;
        pers[0] = &p1;
        pers[1] = st[2];
        pers[2] = st[3];
        pers[3] = st[4];
        pers[4] = st[5];
        pers[5] = st[6];
        pers[6] = st[7];
        
        pers[7] = pr[1];
        pers[8] = pr[2];
        pers[9] = pr[3];
        
        pers[10] = disc[1];
        cout<<"\tPersoana  : "<<pers[0]->retNumeComplet()<<endl;
        cout<<"\tStudentul : "<<pers[1]->retNumeComplet()<<endl;
        cout<<"\tStudentul : "<<pers[2]->retNumeComplet()<<endl;
        cout<<"\tStudentul : "<<pers[3]->retNumeComplet()<<endl;
        cout<<"\tStudentul : "<<pers[4]->retNumeComplet()<<endl;
        cout<<"\tStudentul : "<<pers[5]->retNumeComplet()<<endl;
        cout<<"\tStudentul : "<<pers[6]->retNumeComplet()<<endl;
        

        cout<<"\tProfesorul: "<<pers[7]->retNumeComplet()<<endl;
        cout<<"\tProfesorul: "<<pers[8]->retNumeComplet()<<endl;
        cout<<"\tProfesorul: "<<pers[9]->retNumeComplet()<<endl;
        
        cout<<"\tDisciplina: "<<pers[5]->retNumeComplet()<<endl;
        cout<<"\tEND Teste POLIMORFISM!"<<endl;

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
