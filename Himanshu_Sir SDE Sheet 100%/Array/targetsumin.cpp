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
    int tr;
    cin>>tr;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            if(arr[i]+arr[j] == tr)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
    return 0;
}