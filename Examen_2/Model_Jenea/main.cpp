#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "Exceptie.h"
#include "Curicula.h"
#include "Disciplina.h"
#include "Persoana.h"
#include "Profesor.h"
#include "Student.h"

using namespace std;

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
    Persoana *sArray;
    try
    {
        Persoana p1("Ionescu", "Ion", "20.03.1992"), p2("Popescu", "Vasile", "10.04.1993"), p3/*de continuat*/;
        cin>>p3;
        Persoana p4("Ionescu", "Vasile", "20.09.1992"),p5("Petrici", "Ion", "20.03.1996"),p11("Ionescu", "Ionela", "26.03.1992"),
                 p12("Petcu", "Virgiliu", "28.09.2002"),p6("Petcu", "Violeta", "26.10.2002"),p7("Petcu", "Renat", "28.09.2002"),p8("Petcu", "Virgiliu", "28.09.2002"),p9("Petcu", "Virgiliu", "28.09.2002"),
                 p10("Petcu", "Virgiliu", "28.09.2002");

        st[0] = new Student( p1, "01/C", "Calculatoare" );
        st[1] = new Student( p2, "02/C", "Calculatoare" );
        st[2] = new Student( p3, "01/AIA", "Automatica" );
        st[3] = new Student( p4, "01/AIA", "Automatica" );
        st[4] = new Student( p5, "02/C", "Calculatoare" );
        st[5] = new Student( p6, "02/C", "Calculatoare" );
        st[6] = new Student( p7, "02/C", "Calculatoare" );
        st[7] = new Student( p8, "02/C", "Calculatoare" );
        st[8] = new Student( p9, "01/AIA", "Automatica" );
        st[9] = new Student( p10, "01/AIA", "Automatica" );
        st[10] = new Student( p11, "01/AIA", "Automatica" );
        st[11] = new Student( p12, "01/AIA", "Automatica" );








        /*de continuat*/

        Persoana pp1("MARINESCU", "Vasile", "23.09.1972"), pp2("CORBU", "Stefan", "11.02.1973"), pp3/*de continuat*/;
        cin>>pp3;

        pr[0] = new Profesor( pp1, "s.l.");
        pr[1] = new Profesor( pp2, "profesor");
        pr[2] = new Profesor( pp3, "conferentiar" );
        /*de continuat*/


        disc[0] = new Disciplina("PCLP I", *pr[0]);
        disc[1] = new Disciplina("Fizica", *pr[2]);
        disc[2] = new Disciplina("Analiza matematica", *pr[2]);
        /*de continuat*/

        cout<<"\tTeste POLIMORFISM:"<<endl;

        pers[0] = &p1;
        pers[1]=&p12;
        pers[2]=st[11];
        pers[3] = st[1];
        pers[4] = pr[2];
        pers[5] = disc[1];
        cout<<"\tPersoana  : "<<pers[0]->retNumeComplet()<<endl;
        cout<<"\tPersoana : "<<pers[1]->retNumeComplet()<<endl;
        cout<<"\tStudent: "<<pers[2]->retNumeComplet()<<endl;
        cout<<"\tStudent: "<<pers[3]->retNumeComplet()<<endl;
        cout<<"\tProfesor: "<<pers[4]->retNumeComplet()<<endl;
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
    //curicula[0]->PrintCuricula(disc, NrDiscipline);
    //curicula[1]->PrintCuricula(disc, NrDiscipline);

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
