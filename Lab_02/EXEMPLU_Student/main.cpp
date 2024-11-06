#include <iostream>
#include "Student.h"
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int k;
    vector<Student> studenti;
    Student s1("Yehria","Yevhenii",3674545,8.20);
    s1.Print();
    studenti.push_back(s1);
    Student s2("Anasablu","Vlad",4565634,4.20);
    s2.Print();
    Student s3("Bnasablu","Vlad",4565634,5.20);
    s3.Print();
    Student s4("Cnasablu","Vlad",4565634,9.20);
    s4.Print();
    studenti.push_back(s2);
    studenti.push_back(s3);
    studenti.push_back(s4);
    cout<<"------------------------------------------"<<endl;

    sort(studenti.begin(),studenti.end(),ComparN);

    for(size_t i=0;i<studenti.size();i++)
    {
        studenti[i].Print();
    }
    cout<<"------------------------------------------"<<endl;

    cout<<"Introdu studentul cautat:";
    cin>>k;
    cout<<"------------------------------------------"<<endl;

    if(k>=0 && k<=studenti.size()){
        studenti[k].Print();
    }else{
    cout<<"Nu este asa student:"<<endl;
    }
    cout<<"------------------------------------------"<<endl;


    sort(studenti.begin(), studenti.end(), comparMed);

    for (size_t i = 0; i < studenti.size(); i++) {
        studenti[i].Print();  // Afișează detaliile studentului la indexul i
    }
    cout<<"------------------------------------------"<<endl;








    return 0;
}
