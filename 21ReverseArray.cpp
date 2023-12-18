#include<iostream>
#include<vector>
using namespace std;
vector<int>reverse(vector<int> arr)
{
    int s=0;
    int e=arr.size()-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}
void print(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(13);
    v.push_back(12);
    v.push_back(14);
    v.push_back(15);
    vector<int>ans = reverse(v);
    cout<<"Printing array revers:"<<endl;
    print(ans);
    return 0;
}
