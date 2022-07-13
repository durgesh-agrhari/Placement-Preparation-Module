#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        int temp=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    cout<<"Transpose"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                temp=arr[i][j];
                arr[i][j]=arr[i][n-j-1];
                arr[i][n-j-1]=temp;
            }
        }

    cout<<"Transpose"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){ 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//         int temp=0;
//         int n=matrix.size();
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 temp=matrix[i][j];
//                 matrix[i][j]=matrix[j][i];
//                 matrix[j][i]=temp;
//             }
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n/2;j++){
//                 temp=matrix[i][j];
//                 matrix[i][j]=matrix[i][n-j-1];
//                 matrix[i][n-j-1]=temp;
//             }
//         }
// }