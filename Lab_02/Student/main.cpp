#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student s1("Yehria", "Yevhenii", 3674545, 8.20);

    cout << "Media: " << s1.GetMedia() << endl;
    cout << "Nume: " << s1.GetNume() << endl;
    cout << "Prenume: " << s1.GetPrenume() << endl;
    cout << "Nr Matricol: " << s1.GetNrMat() << endl;

    return 0;
}