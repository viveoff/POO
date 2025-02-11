
#include <iostream>
using namespace std;
#include "Multime.h"

// Funcția main conform cerinței
int main() {
    Multime m1;
    m1 + 2;
    m1 + 3;
    m1 + 11;
    cout << m1 << endl;
    
    Multime m2;
    m2 = m1;
    m1 - 5;
    m1 + 5;
    m1 - 3;
    cout << m1 << " " << m2 << endl;
    
    Multime m3(m2);
    m2 - 2;
    m2 + 9;
    m3 + 15;
    cout << m2 << " " << m3 << endl;
    
    Multime m5;
    m5 = m2 + m3;
    cout << m5 << endl;
    
    Multime m6;
    m6 = m2 * m3;
    cout << m6 << endl;
    
    
    
    return 0;
}


