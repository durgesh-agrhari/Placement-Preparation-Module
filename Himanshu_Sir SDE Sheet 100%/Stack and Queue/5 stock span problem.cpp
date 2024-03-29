// ------Left to right ----- //

#include<bits/stdc++.h>
using namespace std;

// Function to return Next larger elements
class Solution
{
    public:
  vector<long long> nextLargerElement(vector<long long> arr, int n){
    vector<long long> v; // creating a vector for storing result 
    stack <long long> s; // creating a stack for temp. hold the values from array
    //for (int i=n-1;i>=0;i--){
    for (int i=0; i<n; i++){
      if(s.size() ==0){ // when stack size is empty there is no element in stack return output as -1;
        v.push_back(-1);
      }
      else if (s.size()>0 && s.top()>arr[i]) // when there is element in stack and stack top is greater then array element 
      {
        v.push_back(i); // take stack top in the result vector 
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
          v.push_back(i); // else push stack top in the vector 
        }
      }
      s.push(arr[i]); // push array in stack
    }
   // reverse(v.begin(),v.end()); // while returning reverse the vector and return it.
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

