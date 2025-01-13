#include "Complex.h"

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex c3 = c1 + c2;
    cout << "c1 + c2 = " << c3 << endl;

    Complex c4 = c1 - c2;
    cout << "c1 - c2 = " << c4 << endl;

    Complex c5 = c1 * c2;
    cout << "c1 * c2 = " << c5 << endl;

    Complex c6 = c1 / c2;
    cout << "c1 / c2 = " << c6 << endl;

    return 0;
}

