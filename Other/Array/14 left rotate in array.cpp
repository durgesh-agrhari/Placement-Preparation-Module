#include<bits/stdc++.h>
using namespace std;

void rotatearr(int arr[], int n)
{
    int temp = arr[0];
    for(int i=0; i<n; i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]= temp;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
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
    rotatearr(arr,n);
    return 0;
}