#include "Matrix.h"

// Constructor
Matrix::Matrix(int r, int c) : rows(r), cols(c) {
    mat = new int*[rows];
    for (int i = 0; i < rows; i++) {
        mat[i] = new int[cols]();
    }
}

// Destructor
Matrix::~Matrix() {
    for (int i = 0; i < rows; i++) {
        delete[] mat[i];
    }
    delete[] mat;
}

// Operator pentru adunare
Matrix Matrix::operator+(const Matrix& m) {
    if (this->rows != m.rows || this->cols != m.cols) {
        throw "Dimensiunile matricelor nu coincid!";
    }
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result.mat[i][j] = this->mat[i][j] + m.mat[i][j];
        }
    }
    return result;
}

// Operator pentru scădere
Matrix Matrix::operator-(const Matrix &m) {
    if (this->rows != m.rows || this->cols != m.cols) {
        throw "Dimensiunile matricelor nu coincid!";
    }
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result.mat[i][j] = this->mat[i][j] - m.mat[i][j];
        }
    }
    return result;
}

// Operator pentru înmulțire
Matrix Matrix::operator*(const Matrix &m) {
    if (this->cols != m.rows) {
        throw "Dimensiunile matricelor nu permit înmulțirea!";
    }
    Matrix result(rows, m.cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            result.mat[i][j] = 0;
            for (int k = 0; k < cols; ++k) {
                result.mat[i][j] += this->mat[i][k] * m.mat[k][j];
            }
        }
    }
    return result;
}

// Operator pentru indexare
int* Matrix::operator[](int index) {
    if (index < 0 || index >= rows) {
        throw "Index out of bounds!";
    }
    return mat[index];
}

// Operator pentru inserare în flux
ostream& operator<<(ostream &out, const Matrix &m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            out << m.mat[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

// Operator pentru extragere din flux
istream& operator>>(istream &in, Matrix &m) {
    cout << "Introduceți elementele pentru matricea " << m.rows << "x" << m.cols << ":" << endl;
    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            in >> m.mat[i][j];
        }
    }
    return in;
}

