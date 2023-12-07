#include<iostream>
using namespace std;
int main()
{
    int a[2]={5,3};
    int tamp;
    tamp=a[1];
    a[1]=a[0];
    a[0]=tamp;
    cout<<"a[0] index is:"<<a[0]<<endl;
    cout<<"a[1] index is:"<<a[1];
    
}
