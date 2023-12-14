#include<iostream>
using namespace std;
int getpeak(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=arr[mid+1];
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[5]={3,4,5,6,1};
    cout<<"Peak value=:"<<getpeak(arr,5);
    return 0;
}
