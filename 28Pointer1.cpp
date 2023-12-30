#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {22,233,234,674};
    cout<<"first memory block is value:"<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is:"<<&arr[0]<<endl;
    cout<<"1th:"<<*arr<<endl;
    cout<<"2th: Add of arr value in any inter no:"<<*arr + 1<<endl;
    cout<<"3th->"<<*(arr+1)<<endl;
    cout<<"4th->"<<arr[2]<<endl;
    cout<<"5th->"<<*(arr+2)<<endl;
    // Array index value is;
    int i = 3;
    cout<<i[arr]<<endl;
    return 0;
}
