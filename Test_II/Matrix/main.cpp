//
//  main.cpp
//  Matrix
//
//  Created by Vlad Shorodok on 11.01.2025.
//

#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    Matrix m1(2, 2);
    cin >> m1;
    // Folosirea operatorului de indexare
    m1[0][0] = 5;
    m1[0][1] = 5;
    cout << "Matrice m1:" << endl;
    cout << m1;
    
    Matrix m2(2, 2);
    cin >> m2;  // Input matrix elements
    cout << "Matrix m2:" << endl;
    cout << m2;
    
    Matrix m3 = m1 + m2;
    cout << "Matrice m1 + m2:" << endl;
    cout << m3;
    
    Matrix m4 = m1 - m2;
    cout << "Matrice m1 - m2:" << endl;
    cout << m4;
    
    Matrix m5 = m1 * m2;
    cout << "Matrice m1 * m2:" << endl;
    cout << m5;
    return 0;
}
