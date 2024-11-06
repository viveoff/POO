#ifndef USER_H
#define USER_H
#include <iostream>

using namespace std;
class User
{
private:
    char *name=nullptr;
    char *password= nullptr;
    int age;
    float heigh=0;
public:
    User( char *name = (char*)"_NULL_",char *password = (char*)"_NULL_",int age = 0,float heigh = 0 );
    ~User();
    User(const User &u);

    void PrintData() const;
    //get
    char* getNume();
    char* getPassword();
    int getAge();
    float getHeigh();
    //set
    void setNume(char* _nume);
    void setPassword(char* _password);
    void  setAge(int _age);
    void setHeigh(float _heigh);
};



#endif // USER_H
