

// main.cpp
#include "myStack.h"

int main() {
    myStack s;

    s + 1;
    s + 8;
    s + 5 + 19 + 32;

    cout << s << endl; // imprimarea intregii stive
    

    cout << "Val: " << !s << endl;
    --s;
    cout << "Val: " << !s << endl;
    --s;
    cout << "Val: " << !s << endl;

    s + 42;
    s + 100;
    cout << s << endl;
    
    int size = s;         
    cout << "Stack size: " << size << endl;

    while (!s.isEmpty()) {
        cout << "Val scos: " << !s << endl;
        --s;
    }

    cout << "Stiva finala: " << s << endl;
    


    return 0;
}
