//
// Created by Vlad Shorodok on 18.11.2024.
//

#ifndef XYZ_H
#define XYZ_H

class xyz {
private:
    char *a = nullptr;
    int b;
public:
    xyz(char *a = (char*)"_NULL", int b = 0);
    ~xyz();

    void setA(char *a);
    void setB(int b);

    char *getA();
    int getB();

    void Afisare();
};
#endif //XYZ_H
