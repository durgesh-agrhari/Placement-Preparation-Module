#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int n, int k)
{
    int start=0;
    int end=n-1;
    int res;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(k==arr[mid])
        {
            res = mid;
            start = mid+1;
        }
        else if(k < arr[mid])
        {
            end = mid-1; 
        }
        else if(k > arr[mid] )
        {
            start = mid+1;
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int res = bs(arr, n , k);
    cout<<res;

}