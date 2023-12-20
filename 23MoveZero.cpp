#include<iostream>
#include<vector>
using namespace std;
vector<int>MoveZero(vector<int>arr)
{
    int n= arr.size();
    int i=0;
    
    for(int j=0; j<arr.size();j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
    return arr;
}
void print(vector<int> &arr)
{
    int n=arr.size(); 
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int>arr = {0,1,0,3,12};
    int n=arr.size();
    cout<<"Origianl Array:"<<endl;
    for(int i=0; i<arr.size(); i++)
    {
       cout<<arr[i]<<" "; 
    }
    cout<<endl;
    vector<int> ans = MoveZero(arr);
    cout<<"Move on right side of zero:"<<endl;
    print(ans);
    return 0;
}
