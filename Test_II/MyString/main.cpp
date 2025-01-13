#include "MyString.h"

int main() {
    MyString str1("Hello, ");
    MyString str2("World!");
    
    MyString str3 = str1 + str2;
    cout << "Concatenated string: " << str3 << endl;

    cout << "Character at index 4: " << str3[4] << endl;

    return 0;
}

