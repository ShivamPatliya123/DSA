#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[6]={2,3,5,6,7,8};
    int key;
    cout<<"enter the no;";
    cin>>key;
    cout<<"index of element:"<<binarysearch(arr,6,key);
    return 0;
}
