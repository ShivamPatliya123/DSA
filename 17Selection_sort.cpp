#include <iostream>
using namespace std;
class sorting
{
    public:
    void selectionsort(int arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int minindex = i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[minindex])
                minindex = j;
            }
            swap(arr[minindex],arr[i]);
        }
         for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main ()
{
    int arr[5]={4,3,2,7,6};
    sorting obj;
    obj.selectionsort(arr,5);
    return 0;
}
