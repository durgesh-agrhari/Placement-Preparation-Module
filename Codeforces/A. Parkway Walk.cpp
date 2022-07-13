#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    
	ll t;
	cin>>t; 
	int n,m;
	while(t--)
	{
	    int sum=0;
	    cin>>n>>m;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        sum = sum+arr[i];
	    }
	    if(sum > m)
	    {
	        int a = sum-m;
	        cout<<a<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
