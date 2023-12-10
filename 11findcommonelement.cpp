#include<iostream>
#include<vector>
using namespace std;
vector<int> element(vector<int> &arr,int n,vector<int> &arr1,int m)
{
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n&&j<m)
    {
        if(arr[i]==arr1[j])
        {
         ans.push_back(arr[i]);
         i++;
         j++;
        }
        else if(arr[i]<arr1[j])
        i++;
        else
        j++;
    }
    return ans; 

}
int main()
{
    int arr[6]={1,2,2,2,3,4};
    int arr1[5]={2,2,3,3,4};
    vector<int> vec1(arr, arr + 6); // Convert array to vector
    vector<int> vec2(arr1, arr1 + 5); // Convert array to vector

    vector<int> result = element(vec1, 6, vec2, 5);

    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
