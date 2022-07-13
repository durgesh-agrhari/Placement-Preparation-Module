#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100]={0};
    int n,m; cin>>n>>m;
    int val=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            a[i][j]=val;
            val+=1;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
    //wave point
    for(int col=0; col<m; col++)
    {
        if(col%2==0)
        {
            //to down col
            for(int row=0; row<n; row++)
            {
                cout<<a[row][col]<<" ";
            }
        }

        else
        {
            //bottom up direction
            for(int row=n-1; row>=0; row--)
            {
                cout<<a[row][col]<<" ";
            }
        }
    }
    

    return 0;
}