//
// Created by Vlad Shorodok on 18.11.2024.
//

#ifndef VECTOR_H
#define VECTOR_H



class Vector {
private:
    int *elemente = nullptr;
    int dimensiune;
public:
    Vector(int dim = 5);
    ~Vector();

    void setElemente(int *elemente, int dimensiune);
    void setDimensiune(int dimensiune);

    int *getElemente();
    int getDimensiune();

    void citireElemente();
    void afisareElemente();
};



#endif //VECTOR_H
