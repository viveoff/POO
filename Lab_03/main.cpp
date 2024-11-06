//
// Created by Vlad Shorodok on 06.11.2024.
//
#include <iostream>
using namespace std;
#include "punct.h"
#include "triunghi.h"





int main()
{
    punct p1("Punct",4,5);
    p1.afisare();
    p1.setx(5);
    p1.afisare();
    triunghi t("A",4,5,"B",6,7,"C",8,9);
    t.afisare();
    cout<<endl<<"Contor:"<<punct::contor<<endl;
    cout<<endl<<t.perimetru();

    return 0;
}
