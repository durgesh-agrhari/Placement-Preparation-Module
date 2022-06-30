#include<bits/stdc++.h>
using namespace std;

int getlar(int arr[], int n)
{
    int lar =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[lar])
        {
            lar = i;
        }
    }
    return lar;
}
void secondlar(int arr[], int n)
{

    int lar = getlar(arr,n);
    int res = -1;
    int reslt;
    for(int i=0; i<n; i++)
    {
        if( arr[i]!=arr[lar])
        {
            if(res==-1)
            {
                res = i;
            }
            else if(arr[i] > arr[res])
            {
                reslt = arr[i];
            }
        }
    }
    cout<<reslt<<" ";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    secondlar(arr,n);
    return 0;
}