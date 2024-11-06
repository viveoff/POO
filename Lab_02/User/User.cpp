#include "User.h"
#include <iostream>
#include <cstring>

using namespace std;
User::User( char *name,char *password,int age,float heigh )
{
    this->name=new char[strlen(name)+1];
    strcpy(this->name,name);
    this->password=new char[strlen(password)+1];
    strcpy(this->password,password);
    this->age=age;
    this->heigh=heigh;

}
User::~User()
{
    if(name!=nullptr) {
        delete[] name;
    }
    if(password!=nullptr) {
        delete[] password;
    }
}

void User::PrintData() const {
    cout<<"Name:"<<name<<" Parola:"<<password<<" Age:"<<age<<" Heigh "<<heigh<<endl;
}

User::User(const User &u)
{
    cout<<"copy"<<endl;
    if(name!=nullptr)
        delete[] name;
    this->name=new char[strlen(u.name)+1];
    strcpy(this->name,u.name);
    if(password!=nullptr)
        delete[] password;
    this->password=new char[strlen(u.password)+1];
    strcpy(this->password,u.password);
    this->age=u.age;
    this->heigh=u.heigh;
}
//get

char* User::getNume()
{
    return name;  //this->name
}
char* User::getPassword()
{
    return password;
}
int User::getAge()
{
    return age;

}
float User::getHeigh()
{
    return heigh;
}
//set
void User::setNume(char* _name)
{
    if(name!=nullptr)
        delete[] name;
    this->name=new char[strlen(_name)+1];
    strcpy(this->name,_name);



}
void User::setPassword(char* _password)
{
    if(password!=nullptr)
        delete[] password;
    this->password=new char[strlen(_password)+1];
    strcpy(this->password,_password);

}
void  User::setAge(int _age)
{
    this->age=age;

}
void User::setHeigh(float _heigh)
{

    this->heigh=heigh;

}

