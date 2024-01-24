/*#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    int row = 1;
    while(row<=num)
    {
        int space = num-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col = 1;
        while(col<=row)
        {
            cout<<"*";
            col++;
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
    int num;
    cout<<"Enter the no:";
    cin>>num;
    int i = 1;
    while(i<=num)
    {
        int j = 1;
       int start =  num - i + 1;
        while(j<=start)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
