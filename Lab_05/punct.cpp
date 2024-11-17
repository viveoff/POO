#include "punct.h"
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int punct::contor = 0; // initializare membu static

punct::punct(char * n, int x, int y)
{
    this->n= new char[strlen(n)+1];
    strcpy(this->n, n);

    this->x = x;
    this->y = y;
    cout << "CP" << endl;
    contor++;
    cnt++;
    cout << "contor: " << contor << " cnt: " << cnt << endl;
}

punct::~punct()
{
    if(n!= nullptr)
        delete[] n;
        cout << "DP" << endl;
        contor--;
        cnt--;
        cout << "contor: " << contor << " cnt: " << cnt << endl;
}

void punct::afisare()
{
    cout <<n<<"("<<x<<","<<y<<")"<<endl;
}

float punct::distanta(const punct& A)
{
    return sqrt((x-A.x) * (x-A.x) + (y-A.y) * (y-A.y));
}


