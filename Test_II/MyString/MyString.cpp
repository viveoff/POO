//
//  MyString.cpp
//  Test_II
//
//  Created by Vlad Shorodok on 13.01.2025.
//

#include "MyString.h"
#include <cstring>

// Constructor
MyString::MyString(const char* str) {
    data = new char[strlen(str) + 1];
    strcpy(data, str);
}

// Destructor
MyString::~MyString() {
    delete[] data;
}

// Overload + operator for concatenation
MyString MyString::operator+(const MyString& s) {
    char* temp = new char[strlen(data) + strlen(s.data) + 1];
    strcpy(temp, data);
    strcat(temp, s.data);
    MyString result(temp);
    delete[] temp;
    return result;
}

// Overload [] operator for indexing
char MyString::operator[](int index) const {
    return data[index];
}

// Print the string
ostream& operator<<(ostream &out, const MyString &s) {
    out << s.data;
    return out;
}
