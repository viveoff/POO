//
// Created by Vlad Shorodok on 06.11.2024.
//
#include "punct.h"

#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int punct::contor = 0;
punct::punct(){}
punct::punct(char * n, int x, int y)
{
    this->n=new char[strlen(n)+1];
    strcpy(this->n,n);
    this->x=x;
    this->y=y;
    cout<<"CP"<<endl;
    contor++;
}
punct::punct(const punct &p) // copiaza obiect, dar cu nume diferit
{
  if(n!=nullptr)
    delete[] n;
  this->n=new char[strlen(p.n)+1];
    strcpy(this->n,p.n);
    this->x=p.x;
    this->y=p.y;


}
punct::punct(const punct &p,char *n2)
{
    if(n2!=nullptr)
        delete[] n2;
    this->n=new char[strlen(n2)+1];
    strcpy(this->n,n2);
    this->x=p.x;
    this->y=p.y;

}
punct::~punct()
{  if(n!=nullptr)
      delete[] n;
   cout<<"DP"<<endl;
   contor--;
}
void punct::afisare()
{
    cout<<"Nume:"<<n<<" x:"<<x<<" y:"<<y<<endl;
}
//float distanta(punct A);//
int punct::getx()
{
   return this->x;
}
int punct::gety()
{
  return this->y;
}
char* punct::getn()
{
    return this->n;
}
void punct::setx(int x)
{
    this->x=x;

}
void punct::sety(int y)
{
    this->y=y;
}
void punct::setn(char *n)
{
    if(n!=nullptr)
        delete[] n;
    strcpy(this->n,n);
}
float punct::distanta(const punct& A)
{

    return sqrt((this->x-A.x)*(this->x-A.x)+(this->y-A.y)*(this->y-A.y));

}
