#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
#include "Exceptie.h"



Exceptie::Exceptie(char _catEx[], char _tipEx[])
    {
    strcpy(catEx, _catEx);
    }
    void Exceptie::Print(void)
    {
        cerr << "Exceptie ["<<catEx<<"]" << tipEx << endl;
    }

