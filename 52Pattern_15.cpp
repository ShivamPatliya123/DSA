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
        int start = n -i+1;
        int j = 1;
        while(j<=start)
        {
            cout<<j;
            j++;
        }
        int space = i-1;
        while(space)
        {
            cout<<"*";
            space--;
        }
        int space1= i-1;
        while(space1)
        {
            cout<<"*";
            space1--;
        }
        int k = 1;
        int start1 = n-i+1;
        while(k<=start1)
        {
            cout<<start1;
            start1--;
           
        }
        cout<<endl;
        i++;
    }
}
