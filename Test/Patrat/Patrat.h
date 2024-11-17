//
// Created by Vlad Shorodok on 17.11.2024.
//

#ifndef PATRAT_H
#define PATRAT_H

class Patrat {
private:
    double latura; // 0.0
public:
    Patrat(double latura = 0.0);
    ~Patrat();

    void setLatura(double latura);
    double getLatura();
    double calculeazaAria();
    double calculeazaPerimetru();
    void afisare();
};
#endif //PATRAT_H
