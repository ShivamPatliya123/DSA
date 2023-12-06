#include<iostream>
using namespace std;
void copy(int arr[],int size,int arr1[])
{
    int i;
    for(i=0;i<size;i++)
    {
        arr1[i]=arr[i];
    }
     cout<<"copy of:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr1[i]<<"  ";
    }
}

int main()
{
    int arr[5]={4,6,2,4,76};
    int arr1[5],a;
    copy(arr,5,arr1);
}
