//
// Created by Vlad Shorodok on 19.11.2024.
//

#ifndef HUMAN_H
#define HUMAN_H



class Human {
private:
    char *name;
    float height;
public:
    Human(char *name = (char*)"_NULL_", float height = 0.0f);
    ~Human();

    void setName(char *name);
    void setHeight(float height);

    char *getName();
    float getHeight();

    void display();
};



#endif //HUMAN_H
