// ------Right to left ----- //

#include<bits/stdc++.h>
using namespace std;

// Function to return Next larger elements


class Solution
{
    public:
  vector<long long> nextLargerElement(vector<long long> arr, int n){
    vector<long long> v; // creating a vector for storing result 
    stack <long long> s; // creating a stack for temp. hold the values from array
    for (int i=n-1;i>=0;i--){
      if(s.size() ==0){ // when stack size is empty there is no element in stack return output as -1;
        v.push_back(-1);
      }
      else if (s.size()>0 && s.top()>arr[i]) // when there is element in stack and stack top is greater then array element 
      {
        v.push_back(s.top()); // take stack top in the result vector 
      }
      else if (s.size()>0 && s.top()<=arr[i]) // when there is element in stack and that element is less then array element 
      {
        while(s.size()>0 && s.top()<=arr[i]) // upto when there is element and stack top is less then array's element delete the element from stack
        {
          s.pop(); // delete the element from stack
        }
        if (s.size()==0) // when stack became empty return -1
        {
          v.push_back(-1);
        }
        else
        {
          v.push_back(s.top()); // else push stack top in the vector 
        }
      }
      s.push(arr[i]); // push array in stack
    }
    reverse(v.begin(),v.end()); // while returning reverse the vector and return it.
    return v;
  }
};
     
// Time Complexity: O(N)
// Auxiliary Space: O(N)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }

}





























// #include<bits/stdc++.h>
// using namespace std;


// int nextLargerElement(vector<long long> arr, int n){
//     vector<long long> v; // creating a vector for storing result 
//     stack <long long> s; // creating a stack for temp. hold the values from array
//     for (int i=0;i<n;i++){ 
//       if(s.size() ==0) // when stack size is empty there is no element in stack return output as -1;
//         v.push_back(-1);
//       else if (s.size()>0 && s.top()>arr[i]) // when there is element in stack and stack top is greater then array element 
//       {
//         v.push_back(s.top()); // take stack top in the result vector 
//       }
//       else if (s.size()>0 && s.top()<=arr[i]) // when there is element in stack and that element is less then array element 
//       {
//         while(   s.size()>0 && s.top()<=arr[i]) // upto when there is element and stack top is less then array's element delete the element from stack
//         {
//           s.pop(); // delete the element from stack
//         }
//         if (s.size()==0) // when stack became empty return -1
//         {
//           v.push_back(-1);
//         }
//         else
//         {
//           v.push_back(s.top()); // else push stack top in the vector 
//         }
//       }
//       s.push(arr[i]); // push array in stack
//     }
//     return v;

// }


// int main() {

//    int n = 4;
//    vector<long long> arr = {1, 2, 3, 4};
//    nextLargerElement(arr, n);
//    for(int i=0; i<n; i++)
//    {
//     cout<<arr[i]<<" ";
//    }
//    return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;


// class Solution 
// {
// public:
//     vector<long long> nextLargerElement(vector<long long> arr, int n){
//     vector<long long> v; // creating a vector for storing result 
//     stack <long long> s; // creating a stack for temp. hold the values from array
//     for (int i=0;i<n;i++){ 
//       if(s.size() ==0) // when stack size is empty there is no element in stack return output as -1;
//         v.push_back(-1);
//       else if (s.size()>0 && s.top()>arr[i]) // when there is element in stack and stack top is greater then array element 
//       {
//         v.push_back(s.top()); // take stack top in the result vector 
//       }
//       else if (s.size()>0 && s.top()<=arr[i]) // when there is element in stack and that element is less then array element 
//       {
//         while(s.size()>0 && s.top()<=arr[i]) // upto when there is element and stack top is less then array's element delete the element from stack
//         {
//           s.pop(); // delete the element from stack
//         }
//         if (s.size()==0) // when stack became empty return -1
//         {
//           v.push_back(-1);
//         }
//         else
//         {
//           v.push_back(s.top()); // else push stack top in the vector 
//         }
//       }
//       s.push(arr[i]); // push array in stack
//     }
//     return v;
//   }
// };

// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& h) {
//         int n=h.size();
//         vector<int>v;
//         stack<int>s;
//         for(int i=n-1;i>=0;i--){
//             if(s.empty()){
//                 v.push_back(0);
//             }
//             else if(s.size()>0&&h[i]<s.top() ){
//                 v.push_back(1);
//             }
//             else if(s.size()>0&& h[i]>s.top()){
//                 int c=0;
//                 while(s.size()>0&& h[i]>s.top()){
//                     c++;
//                     s.pop();
//                 }
//                 if(s.empty()){
//                     v.push_back(c);
//                 }
//                 else{
//                     v.push_back(c+1);
//                 }
//             }
//             s.push(h[i]);
//         }
//         reverse(v.begin(),v.end());
//         return v;
//     }
// };

// int main() {
//    Solution obj;
//    int n = 7;
//    vector<int> arr = {1, 3, 0, 0, 1, 2, 4};
//    vector<int> res = obj.canSeePersonsCount(arr);
//    for(auto i : res)
//    {
//     cout<<i<<" ";
//    }
//    return 0;
// }










// Time Complexity: O(N)
// Auxiliary Space: O(N)

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     vector<int> v;
//     stack<int> s;

//     for(int i=n-1; i>=0; i--)
//     {
//         if(s.size() == 0)
//         {
//             v.push_back(s.top());
//         }
//         else if(s.size() > 0 && s.top() > arr[i])
//         {
//             v.push_back(s.top());
//         }
//         else if(s.size() > 0 && s.top()<=arr[i])
//         {
//             while (s.size()>0 && s.top()<= arr[i])
//             {
//                 s.pop();
//             }
//             if(s.size() == 0)
//             {
//                 v.push_back(-1);
//             }
//             else{
//                 v.push_back(s.top());
//             }
            
//         }
//         s.push(arr[i]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }