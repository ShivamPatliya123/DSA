#include<iostream>
using namespace std;
#define pi 3.14
int main()
{
    int r = 6;
    double area = pi * r * r;
    cout<<"Area of circle:->"<<area<<endl;
    int h = 9;
    double volume = 1.0/3*pi*h*r*r;
    cout<<"Volume of cone->"<<volume<<endl;
    return 0;
}
