/*#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the no:";
    cin>>num;
    int row = 1;
     char ch = 'A';
    while(row<=num)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<ch<<" ";
            col++;
            ch++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"Enter the number:";
    cin>>a;
    int row = 1;
    while(row<=a)
    {
        int col = 1;
        while(col<=row)
        {
            char ch = 'a'+row+col-2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}
