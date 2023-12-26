#include<iostream>
using namespace std;
int main()
{
    int num=3;
    int a = num;
    cout<<"a before"<<num<<endl;
    a++;
    cout<<"a After:"<<num<<endl;
    int *p = &num;
    cout<<"Poiter P Before:"<<num<<endl;
    (*p)++;
    cout<<"Pointer P After:"<<num<<endl;
    int *q = p;
    cout<< p << "-"<<q<<endl;
    cout<< *p<<"-"<<*q<<endl;
    return 0;
}
