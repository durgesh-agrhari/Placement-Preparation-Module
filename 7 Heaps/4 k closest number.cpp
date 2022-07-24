#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,k;
    cin>>n;
    cin>>k>>x;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    priority_queue<pair<int,int>> maxh;
    for(int i=0; i<n; i++)
    {
        maxh.push({pair(arr[i]-x), arr[x]});
        if(maxh.size() > k)
        {
            maxh.pop();
        }
    }
    
    return 0;
}