#include <iostream>

using namespace std;
#include "punct.h"
#include "triunghi.h"


int main()
{
    //int x,y;
    //punct p1("A", 3, 5);

    //p1.afisare();

    triunghi t("A", 2, 3, "B", 4, 5, "C", 4, 3);
    t.afisare();

    cout << t.perimetru() << endl;
    return 0;
}
