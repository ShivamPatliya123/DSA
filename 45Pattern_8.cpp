/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number:";
    cin>>a;
    int row = 1;
    char ch = 'a';
    while(row<=a)
    {
        int col = 1;
        while(col<=a)
        {
            cout<<ch<<" ";
            ch = ch + 1;
            col++;
        }
        cout<<endl;
        row++;
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
