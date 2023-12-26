#include<iostream>
#include<vector>
using namespace std;
int checkunique(int arr[],int n)
{
    vector<int>frequency(n+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                frequency[i-1]++;
            }
        }
    }

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i==j||frequency[j]==0)
         continue;
        if (frequency[i] == frequency[j])
        {
           return false;
        }
    }
}
return true;
}
int main()
{
    int arr[]={ 2, 2, 5, 10, 1, 2, 10, 5, 10, 2 };
    int n=sizeof arr/sizeof arr[0];
    int res=checkunique(arr,n);
    if(res)
    { 
        cout<<"yes"<<endl; 
    } 
    else
    {
        cout<<"false";
    }
    return 0;
}
