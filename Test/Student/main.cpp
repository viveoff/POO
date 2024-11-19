#include <iostream>
#include "Student.h"
#include <vector>
using namespace std;
int main() {
    Student s1;
    s1.setNume("Vlad");
    s1.setGrupa("3122b");
    s1.setMedia(9.99);
    s1.afisare();

    Student s2;
    cout << "Introdu: " << endl;
    s2.citire();
    s2.afisare();

    return 0;
}






