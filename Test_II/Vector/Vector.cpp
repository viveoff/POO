//
//  Vector.cpp
//  Test_II
//
//  Created by Vlad Shorodok on 13.01.2025.
//

#include "Vector.h"
#include <stdexcept> // Pentru excepții

// Constructor
Vector::Vector(int size) : size(size) {
    if (size <= 0) {
        throw invalid_argument("Vector size must be greater than 0!");
    }
    data = new int[size]();
}

// Destructor
Vector::~Vector() {
    delete[] data;
}

// Operator de adunare
Vector Vector::operator+(const Vector& v) {
    if (this->size != v.size) {
        throw invalid_argument("Vector sizes do not match!");
    }
    Vector result(this->size);
    for (int i = 0; i < size; ++i) {
        result.data[i] = this->data[i] + v.data[i];
    }
    return result;
}

// Operator de scădere
Vector Vector::operator-(const Vector& v) {
    if (this->size != v.size) {
        throw invalid_argument("Vector sizes do not match!");
    }
    Vector result(this->size);
    for (int i = 0; i < size; ++i) {
        result.data[i] = this->data[i] - v.data[i];
    }
    return result;
}

// Operator de înmulțire cu scalar
Vector Vector::operator*(int scalar) {
    Vector result(this->size);
    for (int i = 0; i < size; ++i) {
        result.data[i] = this->data[i] * scalar;
    }
    return result;
}

// Operator de indexare
int& Vector::operator[](int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index out of bounds!");
    }
    return data[index];
}

// Operator de atribuire
Vector& Vector::operator=(const Vector& v) {
    if (this == &v) {
        return *this; // Self-assignment
    }
    delete[] data; // Eliberare memorie

    size = v.size;
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = v.data[i];
    }
    return *this;
}

// Operator de inserare
ostream& operator<<(ostream &out, const Vector &v) {
    out << "[ ";
    for (int i = 0; i < v.size; ++i) {
        out << v.data[i] << " ";
    }
    out << "]";
    return out;
}

// Operator de extragere
istream& operator>>(istream &in, Vector &v) {
    cout << "Enter " << v.size << " elements:" << endl;
    for (int i = 0; i < v.size; ++i) {
        in >> v.data[i];
    }
    return in;
}
