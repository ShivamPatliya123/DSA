#include<iostream>
using namespace std;
int search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10]={2,23,423,24,-33,3,23,12,6,1};
    cout<<"Enter the no to search for"<<endl;
    int key;
    cin>>key;
    int found=search(arr,10,key);
    if(found)
    {
        cout<<"key is present:"<<endl;
    }
    else
    {
        cout<<"key is absent:"<<endl;
    }
    return 0;
}
