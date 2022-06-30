#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    int cumsum[100]={0};
    cin>>arr[0];
    cumsum[0] = arr[0]; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cumsum[i] = cumsum[i-1]+arr[i];
    }
    int left = -1;
    int right = -1;

    int currsum=0;
    int maxsum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            currsum = 0;
            currsum = cumsum[j] - cumsum[i-1];
            if(currsum > maxsum)
            {
                maxsum = currsum;
                left = i;
                right = j;
            }
        }
    }
    cout<<"max sum array sum = "<<maxsum<<" ";

    cout<<" ellement of sub array = ";
    for(int i=left; i<right; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}