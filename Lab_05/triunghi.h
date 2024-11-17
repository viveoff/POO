#ifndef TRIUNGHI_H
#define TRIUNGHI_H
#include "punct.h"

class triunghi
{
punct p1,p2,p3;
public:
triunghi ();
float distanta(punct A, punct B);
triunghi (char *t1, int x1, int y1, char *t2, int x2, int y2,
char *t3, int x3, int y3);

~triunghi();
float perimetru();
float arie();
char * triunghiTip();///oarecare, isoscel, echilateral
punct getp1();///returneaza un punct
punct getp2();
punct getp3();
void afisare();
};


#endif // TRIUNGHI_H
