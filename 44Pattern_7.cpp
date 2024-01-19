/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=n)
        {
            char ch = 'A'+row-1;
            cout<<ch<<" ";
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
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            char ch = 'a'+j-1;
            cout<<ch<<" ";
            j++;

        }
        cout<<endl;
        i++;
    }
}
