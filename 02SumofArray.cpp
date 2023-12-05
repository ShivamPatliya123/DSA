#include<iostream>
using namespace std;
int sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int arr[6]={2,4,8,1,3,-5};
    int sumarray=sum(arr,6);
    cout<<"sum of array is:"<<sumarray;
}
