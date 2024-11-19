//
// Created by Vlad Shorodok on 18.11.2024.
//
#include <iostream>
#include "Vector.h"
using namespace std;

int main() {
    Vector v1;
    v1.citireElemente();
    v1.afisareElemente();

    Vector v2(3);
    v2.citireElemente();
    v2.afisareElemente();

    int elementeNoi[] = {10, 20, 30, 40, 50};
    v1.setElemente(elementeNoi, 5);
    v1.afisareElemente();
    return 0;
}