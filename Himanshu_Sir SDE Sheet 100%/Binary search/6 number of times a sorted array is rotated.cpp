#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int n)
{
    int start=0;
    int end=n-1;
    //int res;
    while (start<=end)
    {
        int mid = start+(end-start)/2;

        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;

        // if(k==arr[mid])
        // {
        //     res = mid;
        //     start = mid+1;
        // }
        // else if(k < arr[mid])
        // {
        //     end = mid-1; 
        // }
        // else if(k > arr[mid] )
        // {
        //     start = mid+1;
        // }
        // other
        if(arr[start] <= arr[mid])
        {
            start = mid +1;
        }
        else if (arr[mid] <= arr[mid])
        {
            end = mid-1;
        }
        
        //osm
        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev])
        {
            return mid;
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

    int res = bs(arr, n);
    cout<<res;

}