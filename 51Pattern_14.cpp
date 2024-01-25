#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the no:";
    cin>>a;
    int i = 1;
    while(i<=a)
    {
         int space = i-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        int start = a-i+1;
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
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no:";
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int space = n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        int start = i-1;
        while(start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/
