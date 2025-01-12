#include <iostream>
#include <cstring>
#include "MySegment.h"
using namespace std;

MySegment::MySegment(int x1, int y1, int x2, int y2)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

MySegment::~MySegment()
{

}



int MySegment::getX1()
{
    return this->x1;
}

int MySegment::getY1()
{
    return this->y1;
}

int MySegment::getX2()
{
    return this->x2;
}

int MySegment::getY2()
{
    return this->y2;
}

void MySegment::setX1(int x1) {
    this->x1 = x1;
}



void MySegment::afisare()
{
    cout << "x1 = " << x1 << "\ny1 = " << y1 << "\nx2 = " << x2 << "\ny2 = " << y2 << endl;

}


