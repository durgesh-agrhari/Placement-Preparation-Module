#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[][100],int n)
{
    //reverse
    for(int row =0; row<n; row++)
    {
        int start_col = 0;
        int end_col = n-1;

        while (start_col<end_col)
        {
            swap(arr[row][start_col] , arr[row][end_col]);
            start_col++;
            end_col--;
        }
    }
    //transpose
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
}

void display(int arr[][100], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
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
    rotate(arr,n);
    display(arr,n);
    return 0;
}