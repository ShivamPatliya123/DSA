#include<iostream>
using namespace std;
int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<endl;
}

void sort(int a[],int n)
{
    int i=0;
    int j=n-1;
    int k=0;
    while(k<=j)
    {
        switch(a[k])
        {
            case 0:swap(a[i++],a[k++]);
            break;
            case 1:k++;
            break;
            case 2:swap(a[k],a[j--]);
            break;
        }
    }
}
int main()
{
    int arr[9]={1,2,1,2,0,0,1,0,2};
    sort(arr,9);
    printarray(arr,9);
    return 0;
}
