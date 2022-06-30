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
    int i=0,j=n;
    while (i<j)
    {
        int cs = arr[i]+arr[j];
        if(cs>key)
        {
            j--;
        }
        else if(cs<key)
        {
            i++;
        }
        else if(cs==key)
        {
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j--;
        }
    }
    return 0;
}