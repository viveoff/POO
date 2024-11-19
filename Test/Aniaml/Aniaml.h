//
// Created by Vlad Shorodok on 19.11.2024.
//

#ifndef ANIAML_H
#define ANIAML_H



class Aniaml {
private:
    char *name = nullptr;
    double legs;
public:
    Aniaml(char *name = (char*)"_NULL", double legs = 0.0);
    ~Aniaml();

    void setName(char *name);
    void setLegs(double legs);

    char *getName();
    double getLegs();

    void afisare();
    void citire();

};



#endif //ANIAML_H
