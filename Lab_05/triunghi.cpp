#include "triunghi.h"
#include "punct.h"
#include <iostream>
#include <cstring>
using namespace std;

triunghi::triunghi (char *t1, int x1, int y1, char *t2, int x2, int y2,
          char *t3, int x3, int y3):p1(t1,x1,y1), p2(t2,x2,y2), p3(t3,x3,y3)
          {
              // p1.setx(x1);
              // p1 = punct(t1,x1,y1);
              cout << "CT" << endl;
          }

triunghi::~triunghi()
{
    cout << "DT" << endl;

}

void triunghi::afisare()
{
    p1.afisare();
    p2.afisare();
    p3.afisare();
}

float triunghi::perimetru()
{
    return p1.distanta(p2) + p1.distanta(p2) + p1.distanta(p3);
}
