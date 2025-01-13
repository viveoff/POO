//
//  Vector.h
//  Test_II
//
//  Created by Vlad Shorodok on 13.01.2025.
//

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

class Vector {
    int size;     // Dimensiunea vectorului
    int *data;    // Pointer către datele vectorului

public:
    Vector(int size);           // Constructor
    ~Vector();                  // Destructor

    Vector operator+(const Vector& v);  // Adunare
    Vector operator-(const Vector& v);  // Scădere
    Vector operator*(int scalar);       // Înmulțire cu scalar
    int& operator[](int index);         // Operator de indexare

    // Operator de atribuire
    Vector& operator=(const Vector& v);

    // Friend pentru input/output
    friend ostream& operator<<(ostream &out, const Vector &v);
    friend istream& operator>>(istream &in, Vector &v);
};

#endif // VECTOR_H
