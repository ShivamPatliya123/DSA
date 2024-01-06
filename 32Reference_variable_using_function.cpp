#include<iostream>
using namespace std;
void updata1(int &n)
{
    n++;
}
void updata(int n)
{
    n++;
}
int main()
{
    int n = 5;
    cout<<"Before->"<<n<<endl;
     updata(n);
     cout<<"After->"<<n<<endl;//no change value;
     updata1(n);
     cout<<"After->"<<n<<endl;//change value;
     return 0;

}
