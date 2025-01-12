// myStack.cpp
#include "myStack.h"

myStack::myStack(int _dim) : dim(_dim), sp(0) {
    vector = new int[dim];
}

myStack::~myStack() {
    delete[] vector;
}

myStack& myStack::operator+(int c) {
    if (!isFull()) {
        vector[sp++] = c;
    } else {
        cout << "Stiva este plina. Nu se poate adauga elementul: " << c << endl;
    }
    return *this;
}

myStack& myStack::operator--() {
    if (!isEmpty()) {
        --sp;
    } else {
        cout << "Stiva este goala. Nu se poate elimina elementul." << endl;
    }
    return *this;
}

int myStack::operator!() {
    if (!isEmpty()) {
        return vector[sp - 1];
    } else {
        cout << "Stiva este goala." << endl;
        return -1; // returnam -1 pentru a indica o eroare
    }
}



myStack::operator int() {
    return sp;
}


ostream& operator<<(ostream &c, myStack &s) {
    if (s.isEmpty()) {
        c << "Stiva este goala.";
    } else {
        for (int i = 0; i < s.sp; ++i) {
            c << s.vector[i] << " ";
        }
    }
    return c;
}

int myStack::isEmpty() {
    return sp == 0;
}

int myStack::isFull() {
    return sp == dim;
}

