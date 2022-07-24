#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    priority_queue<int,vector<int>, greater<int>> minh;
    for(int i=0; i<n; i++)
    {
        vector<int> v;
        minh.push(arr[i]);
        // if(minh.size()>k)
        // {
        //    v.push_back(arr[i]);
        // }
        v.push_back(arr[i]);
    }
    while (minh.size()>0)
    {
        cout<<minh.top()<<" ";
        minh.pop();
    }
    
    return 0;
}