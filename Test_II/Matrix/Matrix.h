#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix {
public:
    int rows, cols;
    int **mat;

    // Constructor
    Matrix(int r, int c);

    // Destructor
    ~Matrix();

    // Operatori supraincarcati
    Matrix operator+(const Matrix& m);
    Matrix operator-(const Matrix& m);
    Matrix operator*(const Matrix& m);
    int* operator[](int index);

    // Friend functions for input/output
    friend ostream& operator<<(ostream &out, const Matrix &m);
    friend istream& operator>>(istream &in, Matrix &m);
};

#endif // MATRIX_H

