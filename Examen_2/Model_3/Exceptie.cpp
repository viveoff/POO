//
//  Exceptie.cpp
//  Examen_2
//
//  Created by Vlad Shorodok on 03.02.2025.
//
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>

using namespace std;
#include "Exceptie.h"


Exceptie::Exceptie(char _catEx[],char _tipEx[]) {
    strcpy(catEx, _catEx);
    strcpy(tipEx, _tipEx);
}
void Exceptie::Print() {
    cerr << "Exceptie ["<<catEx<<"]" << tipEx << endl;
}
