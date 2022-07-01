#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n,i,j,k;
//     cin>>n;
//     for(i=0; i<=n; i++)
//     {
//         for(j=0; j<=n; j++)
//         {
//             if(j>=6-i && j<=4+i && k)
//             {
//                 cout<<"#";
//                 k=0;
//             }
//             else{
//                 cout<<" ";
//                 k=1;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<stdio.h>
int main()
{
int i,j,k,n;     //declaring integer variables i,j,k for loops and r for number of rows
cout<<"Enter the number of rows :\n";     //Asking user for input
cin>>n;      //saving number of rows in variable r
for(i=0;i<n;i++)    //outer loop for number of rows
   {
     for(k=n;k>i+1;k--)     //nested loop for number of spaces
       {
          cout<<" ";     //printing spaces
       }
     for(j=0;j<=i*2;j++)     //nested loop for printing stars
       {
          cout<<i+1;               //printing stars
       } 
    cout<<endl;     //printing newline
   }
}