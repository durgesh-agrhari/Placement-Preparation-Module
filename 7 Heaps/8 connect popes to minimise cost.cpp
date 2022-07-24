#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int cost = 0;
    priority_queue<int,vector<int>, greater<int>> minh;

    for(int i=0; i<n; i++)
    {
        minh.push(arr[i]);
    }

    while(minh.size() >= 2)
    {
        int f = minh.top();
        minh.pop();
        int s = minh.top();
        minh.pop();
        cost = cost + f + s;
        minh.push(f+s);
    }
    cout<<cost<<endl;
    
    return 0;
}