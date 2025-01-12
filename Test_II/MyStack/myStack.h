// myStack.h
#ifndef _STIVA_H_
#define _STIVA_H_

#include <iostream>
using namespace std;

class myStack
{
    int *vector;      // vectorul alocat DINAMIC
    int sp;           // indicatorul de stiva
    int dim;          // dimensiunea stivei
public:
    myStack(int _dim = 10);  // constructor
    ~myStack();             // destructor
    myStack& operator+(int c); // adauga un nod
    myStack& operator--();     // decrementeaza stiva (prefix)
    int operator!();           // intoarce valoarea din varf
    operator int();            // intoarce dimensiunea stivei
    friend ostream& operator<<(ostream &c, myStack &s); // afiseaza stiva
    int isEmpty();             // verifica daca stiva este goala
    int isFull();              // verifica daca stiva este plina
};

#endif
