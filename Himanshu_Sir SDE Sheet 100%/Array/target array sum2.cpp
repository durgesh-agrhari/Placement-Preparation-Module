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
            if(arr[i]+arr[i+1] == tr)
            {
                cout<<"["<<i<<","<<i+1<<"]"<<endl;
            }
    }
    return 0;
}