#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex A;
    Complex B;
    cin>>A;
    cout<<A<<endl;
    cin>>B;
    cout<<B<<endl;
    Complex E;
    E=A+B;
    cout<<E<<endl;
    Complex F;
    F=A-B;
    cout<<F<<endl;
    Complex I;
    I=A*B;
    cout<<I<<endl;
    Complex D;
    D=A/B;
    cout<<D<<endl;
    Complex Z;
    Z=A;
    cout<<endl<<"--------------------------"<<endl;
    cout<<Z;
    cout<<endl<<"--------------------------"<<endl;
    if(A>=B)
    {
        cout<<"A>=B"<<endl;

    }else
    {
        cout<<"B>=A"<<endl;
    }
    return 0;
}

