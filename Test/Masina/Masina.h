//
// Created by Vlad Shorodok on 18.11.2024.
//

#ifndef MASINA_H
#define MASINA_H



class Masina {
private:
    char *nume = nullptr;
    double motor;
public:
    Masina(char *nume = (char*)"_NULL_", double motor = 0.0);
    ~Masina();

    void setNume(char *nume);
    void setMotor(double motor);

    char *getNume();
    double getMotor();

    void Afisare();
};




#endif //MASINA_H
