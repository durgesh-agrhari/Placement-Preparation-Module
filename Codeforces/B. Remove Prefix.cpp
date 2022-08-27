#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        int count2=0,sum =0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n;  i++)
        {
            int count =0;
            for(int j=i+1; j<n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
            cout<<arr[i]<<" "<<count<<endl;
            sum = sum+count;
            count2++;
        }
        //cout<<sum<<endl;
        int a = count2 - sum;
        //cout<<a<<" ";
    }
    
    
    return 0;
}

