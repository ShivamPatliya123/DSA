/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while(i<=n)
    {
        int j = 1;
        
        while(j<=n)
        {
            cout << count <<" ";
            count = count + 1;
            j ++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the number:";
    cin>>num;
    int i = 1;
   while(i<=num)
   {
     int count = i;
     int j = 1;
     while(j<=num)
     {
        cout<<count<<" ";
        count++;
        j++; 
     }
     
     cout<<endl;
     i++;
   }
   return 0;
}
