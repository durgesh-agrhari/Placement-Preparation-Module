#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long maxSum = 0, curSum = 0;

    for(int i=0; i<n; i++)
    {
        curSum = max(0ll, curSum + arr[i]);
        maxSum = max(maxSum, curSum);
    }

    return maxSum;
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
    int a = maxSubarraySum(arr, n);
    cout<<a<<endl;
    return 0;
}