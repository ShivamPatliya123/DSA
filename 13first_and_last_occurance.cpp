#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int lastoccurence(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[100];
    int n,i;
    cout<<"\nenter the size of array:";
    cin>>n;
    cout<<"\nenter the element of array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array list:";
    for(i=0;i<n;i++)
    cout<<arr[i]<<"  ";
    cout<<endl;
    int k;
    cout<<"Enter the element found:"<<endl;
    cin>>k;
    int firstindex=firstoccurence(arr,n,k);
    int lastindex=lastoccurence(arr,n,k);
    cout<<"position of found number:"<<firstindex<<" ";
    cout<<lastindex;
    return 0;
}
