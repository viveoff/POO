#include <iostream>
using namespace std;
#include "Multime.h"



// Constructor implicit
Multime::Multime() {
    card = 0;
    M = nullptr;
}


// Constructor de copiere
Multime::Multime(const Multime& m) {
    card = m.card;
    
    M = new int[card];
    for (int i = 0; i < card; i++) {
        M[i] = m.M[i];
    }
}


// Destructor
Multime::~Multime() {
    delete [] M;
}


Multime& Multime::operator=(const Multime& n) {
    if (this != &n) {
        delete [] M;
        
        card = n.card;
        
        M = new int[card];
        for (int i = 0; i < card; i++) {
            M[i] = n.M[i];
        }
    }
    return *this;
}


Multime& Multime::operator+(int x) {
    for (int i = 0; i < card; i++) {
        if (M[i] == x)
            return *this;
    }
    int *temp = new int[card + 1];
    for (int i = 0; i< card; i++) {
        temp[i] = M[i];
    }
    temp[card] = x;
    delete [] M;
    M = temp;
    card++;
    
    return *this;
}

Multime& Multime::operator-(int x) {
    for (int i = 0; i < card; i++) {
        if (M[i] == x) {
            int* temp = new int[card - 1];
            for (int j = 0, k = 0; j < card; j++) {
                if (M[j] != x) {
                    temp[k++] = M[j];
                }
            }
            delete [] M;
            M = temp;
            card--;
            break;
        }
    }
    return *this;
    
}
Multime Multime::operator+(const Multime& b) const {
    Multime result = *this;
    for (int i = 0; i < b.card; i++) {
        result + b.M[i];
    }
    return result;
}

Multime Multime::operator*(const Multime& b) const {
    Multime result;
    for (int i = 0; i < card; i++) {
        for (int j = 0; j < b.card; j++) {
            if (M[i] == b.M[j]) {
                result + M[i];
                break;
            }
        }
    }
    return result;
}

ostream& operator<<(ostream& c, const Multime& m) {
    for (int i = 0; i < m.card; i++) {
        c << " ";
        c << m.M[i];
    }
    return c;
    }


istream& operator>>(istream& c, Multime& m) {
    int x;
    cout << "Introdu nr elemente: ";
    c >> m.card;
    delete [] m.M;
    m.M = new int[m.card];
    
    cout << "Introdu elemente: ";
    for (int i = 0; i < m.card; i++) {
        c >> m.M[i];
    }
    return c;
}
