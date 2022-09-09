#include<bits/stdc++.h>
using namespace std;

void fun(int arr[], int n, int k)
{
    int i=0, j=0;
    int sum =0, mx = INT_MIN;
    while(j<n)
    {
        sum = sum +arr[i];
        if( (j-i+1) < k)
        {
            j++;
        }
        else if( (j-i+1) == k)
        {
            mx = max(mx,sum);
        }
        sum = sum-arr[i];
        i++;
        j++;
    }
    cout<<mx<<endl;
}

int main()
{
    int n,k;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    fun(arr, n, k);
    return 0;
}