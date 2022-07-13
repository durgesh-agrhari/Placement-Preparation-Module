#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100] ={0};
    int n,m;
    cin>>n>>m;
    int val=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            arr[i][j]=val;
            val+=1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    cin>>key;
    for(int i=0; i<=n; i++)
    { 
        for(int j=0; j<=m; j++)
        {
            if(arr[i][j]==key)
            {
                cout<<"key is present "<<i<<","<<j<<" key "<<key<<endl;      
            }
        }
    }
    return 0;
}