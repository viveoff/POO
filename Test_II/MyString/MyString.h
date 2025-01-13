//
//  MyString.h
//  Test_II
//
//  Created by Vlad Shorodok on 13.01.2025.
//

#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
using namespace std;

class MyString {
    char* data;

public:
    MyString(const char* str = "");
    ~MyString();

    // Overload + operator for concatenation
    MyString operator+(const MyString& s);

    // Overload [] operator for indexing
    char operator[](int index) const;

    // Print the string
    friend ostream& operator<<(ostream &out, const MyString &s);
};

#endif // MYSTRING_H
