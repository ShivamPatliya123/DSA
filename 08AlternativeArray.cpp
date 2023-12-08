#include<iostream>
using namespace std;
 void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }cout<<endl;
}
void swapalternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int even[8]={2,4,6,3,1,6,3,8};
    int odd[5]={11,33,5,2,6};
    swapalternate(even,8);
    printarray(even,8);
    cout<<"\n";
    swapalternate(odd,5);
    printarray(odd,5);
    return 0;
}
