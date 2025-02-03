#include "Persoana.h"
#include "fstream"
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "Exceptie.h"


using namespace std;
Persoana::Persoana( char _nume[], char _prenume[], char _data_n[])
{
    int nr,d,m,y;
    strcpy(nume,_nume);
    strcpy(prenume,_prenume);
    nr=sscanf(data_n,"2d.2d.4d",&d,&m,&y);
    if((nr!=3 || d>31 || m>12) && strlen(nume)<0)
    {
       throw Exceptie("Persoana","Gresale la date si la nume!");
    }

    strcpy(data_n,_data_n);
}
char* Persoana::retDataNastere(void)
{
    /*de completat*/
    return data_n;
}
char* Persoana::retNumeComplet(void)
{
    /*de completat*/
    sprintf(_buff,"%s %s",nume,prenume);
    return _buff;
}
istream& operator>>(istream &c, Persoana &p)
{
    /*de completat*/
    cout<<"Introdu numele:";

    fflush(stdin);
    c.getline(p.nume,20);
    cout<<endl<<"Introdu prenumile:";
    c.getline(p.prenume,20);
    cout<<endl<<"Introdu data dd/mm/yyyy:";
    c.getline(p.data_n,20);
    return c;


}
ostream& operator<<(ostream &c, Persoana &p)
{
    c<<p.nume<<" "<<p.prenume<<" "<<p.data_n<<endl;
    return c;
}
 void Persoana::citireFis(fstream &in)
 {
     in>>nume>>prenume>>data_n;
 }
void Persoana::sirPersoana(Persoana p[],int nr)
{
    cout<<"----------Citire din fisier-----------"<<endl;
    for(int i=0;i<nr;i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<"-----------End Citire fisier----------"<<endl;
}
void Persoana::writetoFile(Persoana p[],int nr,fstream &out)
{
    cout<<"----------Scriere in fisier-----------"<<endl;
    for(int i=0;i<nr;i++)
    {
        out<<p[i];
    }
}
