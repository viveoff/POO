//
//  main.cpp
//  Vector
//
//  Created by Vlad Shorodok on 13.01.2025.
//

#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
    try {
        // Creare vectori
        Vector v1(3);
        Vector v2(3);

        // Citire valori
        cout << "Introduceți valorile pentru v1:" << endl;
        cin >> v1;

        cout << "Introduceți valorile pentru v2:" << endl;
        cin >> v2;

        // Afișare vectori
        cout << "Vector v1: " << v1 << endl;
        cout << "Vector v2: " << v2 << endl;

        // Adunare
        Vector v3 = v1 + v2;
        cout << "Vector v1 + v2: " << v3 << endl;

        // Scădere
        Vector v4 = v1 - v2;
        cout << "Vector v1 - v2: " << v4 << endl;

        // Înmulțire cu scalar
        Vector v5 = v1 * 2;
        cout << "Vector v1 * 2: " << v5 << endl;

        // Indexare
        cout << "Elementul v1[1]: " << v1[1] << endl;

        // Modificare prin indexare
        v1[1] = 99;
        cout << "Vector v1 modificat: " << v1 << endl;

    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
