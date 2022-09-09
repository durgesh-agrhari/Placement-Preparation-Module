#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
    while (t--)
    {
        int arr[9] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
        int sum =0,count=0;
        for(int i=0; i<9; i++)
        {
            cout<<arr[i]<<" ";
            sum = sum + arr[i];
            count++;
            if(sum == n)
            {
                break;
            }
        }
        cout<<count<<" "<<sum<<endl;
    }
    
    return 0;
}

