#ifndef PUNCT_H
#define PUNCT_H
using namespace std;
class punct
{
int x,y;
char *n=nullptr;
public:
static int contor;
punct();
punct(char * n=(char*)"_NULL_", int x=0, int y=0);
punct(const punct &p);///constructor de copiere
punct(const punct &p,char *n2);//copiază obiect, dar cu nume diferit
~punct();
void afisare();
float distanta(const punct& A);//
int getx();
int gety();
char* getn();
void setx(int x);
void sety(int y);
void setn(char *n);
};



#endif // PUNCT_H
