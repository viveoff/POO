//
// Created by Vlad Shorodok on 04.11.2024.
//
#include "User.h"
#include <iostream>


using namespace std;
#include "User.h"


int main()
{
    User u1("Ion","password",12,1.49);
    User u2("Yarik","yarik228",19,1.80);
    u1.PrintData();
    User u3(u2);

    u3.PrintData();
    u2.setPassword("fdhgd");
    u2.PrintData();
    cout<<u2.getAge();

    return 0;
}
