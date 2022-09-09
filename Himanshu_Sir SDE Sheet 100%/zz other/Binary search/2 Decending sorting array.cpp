#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int n, int k)
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
    int res = bs(arr, n , k);
    cout<<res;

}