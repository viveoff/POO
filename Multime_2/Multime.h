#ifndef MULTIME_H
#define MULTIME_H

#include <iostream>
using namespace std;

class Multime {
private:
    int *M;
    int card;

public:
    // Constructor implicit
    Multime();
    
    // Constructor de copiere
    Multime(const Multime& m);
    
    // Destructor
    ~Multime();
    
    
    Multime& operator=(const Multime& n);
    Multime& operator+(int x);
    Multime& operator-(int x);
    Multime operator+(const Multime& b) const;
    Multime operator*(const Multime& b) const;
    
    friend ostream& operator<<(ostream& c, const Multime& m);
    friend istream& operator>>(istream& c, Multime& m);
};

#endif // MULTIME_H


