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
    int key;
    cin>>key;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int a = arr[i] + arr[j];
            if( a == key)
            {
                cout<<arr[i]<<"and"<<arr[j]<<endl;
            }
        }
    }

    return 0;
}