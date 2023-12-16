#include<iostream>
using namespace std;
class Bubblesort
{
    public:
    void bubblesort(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[i],arr[j+1]);
                }
            }
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        
    }
};
int main()
{
    int arr[5] = {7,6,5,4,3};
    Bubblesort obj;
    obj.bubblesort(arr,5);
    return 0;
}
