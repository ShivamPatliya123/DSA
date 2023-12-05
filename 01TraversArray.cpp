#include<iostream>
using namespace std;
class traversal
{
    public:
    int arr[100]={2,3,5,2};
    int size=4;
   void display()
  {
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
};
int main()
{
    traversal obj;
    obj.display();
    return 0;
}
