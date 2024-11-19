//
// Created by Vlad Shorodok on 19.11.2024.
//

#ifndef COUNTRY_H
#define COUNTRY_H



class Country {
private:
    char *name = nullptr;
    float population;
public:
    Country(char *name = (char*)"_NULL_", float population = 0.0f);
    ~Country();

    void setName(char *name);
    void setPopulation(float population);

    char *getName();
    float getPopulation();

    void display();
};



#endif //COUNTRY_H
