#include<iostream>
using namespace std;
int getlength(char name[])
{
    int count = 0;
    for(int i = 0; name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
     char name[20];
     cout<<"Enter the Name:"<<endl;
     cin>>name;

     cout<<"your Name is:"<<endl;
     cout<<name<<endl;

     cout<<"Length of string:"<<getlength(name);
     return 0;
}
