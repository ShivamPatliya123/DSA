#include<iostream>
using namespace std;
int score = 13;
int a(int &j)
{
    cout<<"in a function->"<<score<<endl;
    cout<<j<<endl;
    score++;
}
int b(int &j)
{
    cout<<"in b function->"<<score<<endl;
    cout<<j<<endl;
}
int main()
{
    cout<<"in main function->"<<score<<endl;
    score--;
    int i = 3;
    a(i);
    b(i);
    return 0;
}
