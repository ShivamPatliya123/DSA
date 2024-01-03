#include<iostream>
using namespace std;
int main()
{
    int a[5]= {2,4,5,2,4};
    int *p = &a[0];
    cout<<"integer ->"<< p << endl;
    cout<<"integer ->"<<*p << endl;

    char c[7] = "shivam";
   //cout different implementation integer and character value;
    char *ptr = &c[0];
    //cout<<"character ->"<<c;
    cout<<"pointer cahr ->"<<ptr<<endl;
    cout<<"pointer cahr ->"<<&ptr;
}
