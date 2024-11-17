//
// Created by Vlad Shorodok on 06.11.2024.
//
#include "triunghi.h"

#include <iostream>
using namespace std;

triunghi::triunghi(char *t1, int x1, int y1, char *t2, int x2, int y2,char *t3, int x3,
    int y3):p1(t1,x1,y1),p2(t2,x2,y2),p3(t3,x3,y3)
{
   ///this->p1.setn(t1);
   ///p1=punct(t1,x1,y1)
   cout<<"CT"<<endl;

}
triunghi::~triunghi()
{

cout<<"DT"<<endl;
}
void triunghi::afisare()
{
    p1.afisare();
    p2.afisare();
    p3.afisare();

}
punct triunghi::getp1()
{
    return p1;
}
punct triunghi::getp2()
{
    return p2;
}
punct triunghi::getp3()
{
    return p3;
}
float triunghi::perimetru()
{
    return p1.distanta(p2)+p2.distanta(p3)+p3.distanta(p1);

}

