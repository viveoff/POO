//
//  main.cpp
//  Persoana_2
//
//  Created by Vlad Shorodok on 08.02.2025.
//

#include <iostream>
#include "Persoana.h"
#include <fstream>
#include "Exceptie.h"
#include "Student.h"

int main() {
    Persoana p1("Niger",4);
    Persoana p2("ALB", 5);
    Persoana p3("Niger",4);
    Persoana p4("Niger",4);
    Persoana p5("Niger",4);
    Persoana p6("Niger",4);
    Persoana p7("Niger",4);

    
    
    Student s1("F", 5, "Vlad", "FIESC");
    Student s2("ALB", 4, "Aurel","AIA");

    
    cout << "Tabel Polimorfism" << endl;
    Persoana *p[8];
    p[0] = &p1;
    p[1] = &p2;
    p[2] = &s1;
    p[3] = &s2;
    p[4] = &p3;
    p[5] = &p4;
    p[6] = &p5;
    p[7] = &p6;
    for (int i = 0; i < 8; i++)
        cout << *p[i];

    return 0;
}
