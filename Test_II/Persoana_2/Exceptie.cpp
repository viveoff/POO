#include <iostream>
#include <cstring>
using namespace std;
#include "Exceptie.h"


Exceptie::Exceptie(char catEx[50], char tipEx[50]) {
    strcpy(this->catEx, catEx);
    strcpy(this->tipEx, tipEx);
}
void Exceptie::Print() {
    cout << "["<<catEx << "]" << tipEx << endl;
}
