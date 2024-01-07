#include<iostream>
using namespace std;
int getsum(int *arr ,int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the no of n"<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    cout << arr[i]<<" ";
    }
    cout<<endl;
    int ans = getsum(arr,n);
    cout<<"Answer->"<<ans;
    return 0;
}
