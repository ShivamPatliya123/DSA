#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid)
{
    int paintercount = 1;
    int boardsum = 0;
    for(int i=0; i<n; i++)
    {
        if(boardsum + arr[i] <= mid)
        {
            boardsum += arr[i];
        }
        else 
        {
            paintercount++;
            if(paintercount > m || arr[i] > mid)
            {
                return false; 
            }
            boardsum = arr[i];
        }
    } 
    return true; 
}
int partitionpainter(int arr[],int n,int m)
{
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = 0;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(ispossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid -1;
        }
        else 
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[6] = {2,1,5,6,2,3};
    int m = 2;
    int result = partitionpainter(arr,6,2);
    cout<<result;
    return 0;
}
