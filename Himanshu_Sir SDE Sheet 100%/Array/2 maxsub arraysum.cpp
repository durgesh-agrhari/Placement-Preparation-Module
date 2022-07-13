#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
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
            for(int k=i; k<j; k++)
            {
                currsum += arr[k];
            }
            cout<<currsum<<","<<endl;
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