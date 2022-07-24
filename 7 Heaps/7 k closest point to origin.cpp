#include<bits/stdc++.h>
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

    priority_queue<int> maxh;
    for(int i=0; i<n; i++)
    {
        maxh.push({arr[i][0]*arr[i][0] + arr[i][1]arr[i][1], {arr[i][0], arr[i][1]}});
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }
    while (maxh.size() > 0)
    {
        pair<int, int> p;
        maxh.top();
        cout<<p.first<<"   "<<p.second;
        maxh.pop();
    }
    
    return 0;
}