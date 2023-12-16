#include<iostream>
using namespace std;
class insertion
{
    public:
    void insertionsort(int arr[],int n)
    {
        for(int i=1;i<n;i++)
        {
            int temp = arr[i];
            int j=i-1;
            for(j=i-1; j>=0;j--)
            {
                if(arr[j]>temp)
                {
                    arr[j+1] = arr[j];
                }
                else
                {
                    break;
                }
            }
            arr[j+1] = temp;
        }
        for(int i=0;i<n;i++)
        {
           cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    int arr[5]={6,5,3,2,4};
    insertion obj;
    obj.insertionsort(arr,5);
    return 0;
}
