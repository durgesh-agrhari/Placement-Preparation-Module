// #include<bits/stdc++.h>
// using namespace std;
// class Solution{ 
//     public:
//     int solve(vector<int> &A, int B) {
//     long long c=0;
//     for(int i=0;i<A.size();i++){
//         int current_xor = 0;
//         for(int j=i;j<A.size();j++){
//             current_xor^=A[j];
//             if(current_xor==B) c++;
//         }
//     }
//     return c;
// }
// };

// int main()
// {   vector<int> A{ 4,2,2,6,4 };
//     Solution obj;
//     int totalCount= obj.solve(A,6);
//     cout<<"The total number of subarrays having a given XOR k is "<<totalCount<<endl;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int b;
    cin>>b;
    int c=0;
    for(int i=0;i<n;i++){
        int current_xor = 0;
        for(int j=i;j<n;j++){
            current_xor^=arr[j];
            if(current_xor==b) c++;
        }
    }
    cout<<c<<endl;
    
    return 0;
}









// output 
// 5 ^ 6 => 3
// 5 ^ 7 => 2
// 5 ^ 8 => 13
// 5 ^ 9 => 12
// 6 ^ 7 => 1
// 6 ^ 8 => 14
// 6 ^ 9 => 15
// 7 ^ 8 => 15
// 7 ^ 9 => 14
// 8 ^ 9 => 1
// Number of xor  = 0


// #include<bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     int b;
//     cin>>b;
//     int count=0;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             int re = (arr[i]^arr[j]);
//             if(re == b)
//             {
//                 count++;
//             }
//             cout<<arr[i]<<" ^ "<<arr[j]<<" => "<<re<<endl;
//         }
//     }
//     cout<<"Number of xor  = "<<count;
    
//     return 0;
// }

