#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

const int NrCuricule = 2;
const int NrStudenti = 20;
const int NrProfesori = 18;
const int NrDiscipline = 18;

class Curicula; /*declaratie incompleta*/

class Exceptie
{
    char catEx[50], tipEx[50];
public:
    Exceptie(char _catEx[], char _tipEx[])
    {
        strcpy(catEx, _catEx );
        strcpy(tipEx, _tipEx );
    }
    void Print(void)
    {
        cerr<<"Exceptie ["<<catEx<<"] - "<<tipEx<<endl;
    }
};

class Persoana
{
protected:
    char nume[20], prenume[20], data_n[20]; /*dd.mm.yyyy*/
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Persoana( char _nume[]="", char _prenume[]="", char _data_n[]="")
    {
        int nr, d, m, y;
        strcpy(nume, _nume);
        strcpy(prenume, _prenume);
        nr = sscanf(_data_n, "%2d.%2d.%4d", &d, &m, &y);
        if( ( nr != 3 || m > 12 || d > 31 ) &&  strlen(nume) > 0 )
            throw Exceptie("PERSOANA", "Data nastere incorecta");
        strcpy(data_n, _data_n);
    }
    char* retDataNastere(void)
    {
        return data_n;
    }
    virtual char* retNumeComplet(void)
    {
        strcpy(_buff, nume );
        strcat(_buff, " " );
        strcat(_buff, prenume );
        return _buff;
    }
    friend istream& operator>>(istream &c, Persoana &p)
    {
        cout<<"Introdu nume, prenume si data nastere [dd.mm.yyyy]: ";
        c>>p.nume>>p.prenume>>p.data_n;
        return c;
    }
};


class Profesor : public Persoana
{
    static int nextID;
    int id_prof;
    char titlu[20]; /* profesor / conferentiar / s.l. / asistent */
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Profesor( Persoana &p, char _titlu[]) : Persoana(p), id_prof( ++nextID )
    {
        if( strcmp(_titlu, "profesor") != 0 && strcmp(_titlu, "conferentiar") != 0
                && strcmp(_titlu, "s.l." ) && strcmp(_titlu, "asistent" ) != 0 )
            throw Exceptie("PROFESOR", "Titlu incorect"); //Exceptie: titlu incorect

        strcpy(titlu, _titlu);
    }
    int getIDProf(void)
    {
        return id_prof;
    }
    char* retNumeComplet(void)
    {
        return strcat( strcat( strcat( strcat( strcpy(_buff, titlu)," "), nume), " "), prenume);
    }
   static void PrintProfesori( Profesor *p[], int nr, char numePart[] )
    {
        cout<<"\tProfesori ce contin: "<<numePart<<endl;
        for( int i = 0; i < 3/*nr*/; i++ )
        {
            if( strstr( p[i]->retNumeComplet(), numePart  ) != NULL )
                cout<<"\t\t"<<p[i]->retNumeComplet()<<endl;
        }
    }
};
int Profesor::nextID = 0;/*init membru static*/


class Student : public Persoana
{
    char nr_mat[20];    /*numar matricol*/
    char specializ[20]; /*Specializare*/
    float note[100];
    int   sem[100], nrNote;
    char _buff[50]; /* utilizat pentru constructii de siruri returnate */
public:
    Student(Persoana &_pers, char _nr_mat[], char _spec[]) : Persoana(_pers ), nrNote( 0 )
    {
        strcpy( nr_mat, _nr_mat );
        strcpy( specializ, _spec );

    }
    char* retNumeComplet(void)
    {
        return strcat( strcat( strcat( strcat( strcpy(_buff, nr_mat)," - "), nume), " "), prenume);
    }
    char* retNrMat(void)
    {
        return nr_mat;
    }
    char* retSpec(void)
    {
        return specializ;
    }
    void introduNote( Curicula *c[], int nrC, int _sem  )
    {
        /*Am introdus in clasa 3 campuri, in care vor fi memorate notele:
            float note[100];
            int   sem[100], nrNote*/

    }
    void situatieScolara( Curicula *c[], int nrC, int _sem )
    {
        /*de finalizat*/
    }
};

class Disciplina : public Profesor /* profesorului titular*/
{
    static int nextID;
    int id_disc;
    char denumire[20];
    char _buff[50];
public:
    Disciplina( char _den[], Profesor &p) : Profesor( p )
    {
        id_disc = ++nextID;
        strcpy(denumire, _den);
    }
    int getIDDisc(void)
    {
        return id_disc;
    }
    char* retNumeComplet(void)
    {
        strcpy( _buff, denumire );
        strcat( _buff, " - " );
        strcat( _buff, Profesor::retNumeComplet());
        return _buff;
    }
    char* retProfesor(void)
    {
        return Profesor::retNumeComplet();
    }
};
int Disciplina::nextID = 0;


class Curicula
{
    int N;                  /*numarul total de discipline*/
    char den_specializ[50]; /*Specializare*/
    int  sem[20];           /*semestre: 1/2/3/4/5/6/7/8...*/
    int  id_disc[20];       /*id-uri discipline din curicula*/
    char tip_disc[20][15];  /*Obigatorie/Facultativa/Optionala ...*/
public:
    Curicula(char _spec[]) : N(0)
    {
        if( strcmp(_spec, "Calculatoare") !=0 && strcmp(_spec, "Automatica") !=0 )
            throw Exceptie("CURICULA", "Specializare incorecta");
        strcpy( den_specializ, _spec);
    }
    void Add( int _sem, Disciplina &d, char _tip[] )
    {
        if( strcmp(_tip, "Obligatorie") !=0 && strcmp(_tip, "Facultativa") !=0 && strcmp(_tip, "Optionala") !=0 )
            throw Exceptie("CURICULA", "Specializare incorecta");
        sem[N] = _sem;
        id_disc[N] = d.getIDDisc();
        strcpy( tip_disc[N], _tip );
        N++;
    }
    void PrintCuricula( Disciplina *d[], int nr )
    {
        cout<<"\n\tCuricula specializarea: "<<den_specializ<<endl;
        cout<<"\nSEM |  TIP          | DISCIPLINA "<<endl;
        for( int i = 0; i < N; i++ )
        {
            cout<<sem[i]<<"   |  "<<tip_disc[i]<<"  |  ";
            for( int j = 0; j < nr; j++)
                if( d[j]->getIDDisc() == id_disc[ i ] )
                {
                    cout<<d[j]->retNumeComplet()<<endl;
                    break;
                }
        }
    }
    void PrintCuriculaSem( Disciplina *d[], int nr, int _sem )
    {
        cout<<"\n\tCuricula specializarea: "<<den_specializ<<endl;
        cout<<"\nSEM |  TIP          | DISCIPLINA "<<endl;
        for( int i = 0; i < N; i++ )
        {
            if( sem[i] != _sem)
                continue;
            cout<<sem[i]<<"   |  "<<tip_disc[i]<<"  |  ";
            for( int j = 0; j < nr; j++)
                if( d[j]->getIDDisc() == id_disc[ i ] )
                {
                    cout<<d[j]->retNumeComplet()<<endl;
                    break;
                }
        }
    }
    static void PrintCuriculaStud( Curicula *c[], int nrC, Student s, Disciplina *d[], int nrD )
    {
        cout<<"\n\tCuricula student: "<<s.retNumeComplet()<<endl;
        for( int i = 0; i < nrC; i++ )
        {
            if( strcmp(c[i]->den_specializ, s.retSpec() ) == 0 )
                c[i]->PrintCuricula( d, nrD );
        }
    }
    static void AnalizaIdentic( Curicula c1, Curicula c2  )
    {
        int nrIdentic = 0;
        for( int i = 0; i < c1.N; i++)
            for( int j = 0; j < c2.N; j++)
                    if( c1.id_disc[i] == c2.id_disc[j] )
                        nrIdentic++;
        cout<<"Curicula de la specializarea ["<<c1.den_specializ<<"] are: \n\t- "<<
              nrIdentic<<" discipline identice cu specializarea ["<<c2.den_specializ<<"] "<<
              "\n\t- dintr-un numar de "<<c1.N<<" discipline"<<endl;
    }
    static void AnalizaDiferit( Curicula c1, Curicula c2 )
    {
        int nrIdentic = 0;
        for( int i = 0; i < c1.N; i++)
            for( int j = 0; j < c2.N; j++)
                    if( c1.id_disc[i] == c2.id_disc[j] )
                        nrIdentic++;
        cout<<"Curicula de la specializarea ["<<c1.den_specializ<<"] are: \n\t- "<<
              c1.N-nrIdentic<<" discipline diferite cu specializarea ["<<c2.den_specializ<<"] "<<
              "\n\t- dintr-un numar de "<<c1.N<<" discipline"<<endl;
    }
};


int main()
{
    cout << "[MODEL EXAMEN POO - 2015]" << endl;
    cout << "\nINTRODUCERE DATE" << endl;
    Curicula   *curicula[ NrCuricule   ];
    Disciplina *disc[     NrDiscipline ];
    Profesor   *pr[       NrProfesori  ];
    Student    *st[       NrStudenti   ];
    try
    {
        Persoana p1("Ionescu", "Ion", "20.03.1992"), p2("Popescu", "Vasile", "10.04.1993"), p3("Colibaba", "Constantin", "05.06.2000");
        //cin>>p3;
        //Student  *st[NrStudenti];
        st[0] = new Student( p1, "01/C", "Calculatoare" );
        st[1] = new Student( p2, "02/C", "Calculatoare" );
        st[2] = new Student( p3, "01/AIA", "Automatica" );
        /*de continuat*/

        Persoana pp1("MARINESCU", "Vasile", "23.09.1972"), pp2("CORBU", "Stefan", "11.02.1973"), pp3("Vasile", "VOINEA", "02.02.1980");
        //cin>>pp3;
        //Profesor *pr[NrProfesori];
        pr[0] = new Profesor( pp1, "s.l.");
        pr[1] = new Profesor( pp2, "profesor");
        pr[2] = new Profesor( pp3, "conferentiar" );
        /*de continuat*/

        //Disciplina *disc[ NrDiscipline ];
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

        //Curicula *curicula[ NrCuricule ];
        curicula[0] = new Curicula( "Calculatoare" );
        curicula[0]->Add(1, *disc[0], "Obligatorie");
        curicula[0]->Add(1, *disc[1], "Obligatorie");
        curicula[0]->Add(3, *disc[2], "Optionala");
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
    curicula[0]->PrintCuricula( disc, NrDiscipline );
    curicula[1]->PrintCuricula( disc, NrDiscipline );

    cout <<"\tAfisare curicula pe semestrul 3"<<endl;
    curicula[0]->PrintCuriculaSem( disc, NrDiscipline, 3 );

    cout <<"\tCauta toti profesorii ce contin subsirul 'MARI' in NUME"<<endl;
    Profesor::PrintProfesori( pr, NrProfesori, "MARI" );

    cout <<"\tAfisare curicula pentru un student"<<endl;
    Curicula::PrintCuriculaStud( curicula, NrCuricule, *st[1], disc, NrDiscipline );

    cout <<"\tAdministrare Note Student"<<endl;
    st[0]->introduNote( curicula, NrCuricule, /*sem*/1 );
    //st[0]->introduNote( curicula, NrCuricule, /*sem*/2 );
    st[0]->situatieScolara( curicula, NrCuricule, /*sem*/1 );

    cout <<"\tAnaliza curicule"<<endl;
    Curicula::AnalizaIdentic( *curicula[0], *curicula[1] );
    Curicula::AnalizaDiferit( *curicula[0], *curicula[1] );

    cout <<"[END SUBIECT]"<<endl;
    return 0;
}
