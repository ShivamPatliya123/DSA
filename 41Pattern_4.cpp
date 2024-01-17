/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no;";
    cin>>n;
    int row = 1;
    int num = row;
    while(row<=n)
    {
        int col = 1;
        while(col<=row)
        {
            cout<<num<<" ";
            num++;
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
    int row = 1;
    while(row<=n)
    {
        int col = 1;
        int value = row;
        while(col<=row)
        {
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
