#include<bits/stdc++.h>
using namespace std;

//assending
int abs(int arr[], int n, int k)
{
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(k==arr[mid])
        {
            return mid;
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
    return -1;
}

//decending
int dbs(int arr[], int n, int k)
{
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        //int mid = (start+end)/2;
        if(k==arr[mid])
        {
            return mid;
        }
        else if(k > arr[mid])
        {
            end = mid-1; 
        }
        else if(k < arr[mid] )
        {
            start = mid+1;
        }
    }
    return -1;
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
    int res;
    for(int i=0; i<n; i++)
    {
        if(arr[0]<arr[1])
        {
            res = abs(arr, n , k);
        }
        else
        {
            res = dbs(arr, n , k);
        }
    }
    cout<<res<<endl;
}