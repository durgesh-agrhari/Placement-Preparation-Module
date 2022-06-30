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

    int cs=0, ms=0;
    for(int i=0; i<n; i++)
    {
        cs=cs+arr[i];
        if(cs<0)
        {
            cs=0;
        }
        ms = max(cs,ms);
    }

    cout<<"maxsum subarray = "<<ms<<endl;
    return 0;
}