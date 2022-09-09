/*
    Time Complexity: O(N^3)
    Space Complexity: O(1)

    where N is the length of the array.
*/
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long maxSum = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            long long curSum = 0;
            for(int k=i; k<=j; k++)
            {
                curSum += arr[k];
            }
            maxSum = max(maxSum, curSum);
        }
    }
    return maxSum;
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int a = maxSubarraySum(arr, n);
    cout<<a<<endl;
    return 0;
}




















// #include<bits/stdc++.h>

// using namespace std;
// int maxSubArray(vector < int > & nums, vector < int > & subarray) {
//   int msf = nums[0], meh = 0;
//   int s = 0;
//   for (int i = 0; i < nums.size(); i++) {
//     meh += nums[i];
//     if (meh > msf) {
//       subarray.clear();
//       msf = meh;
//       subarray.push_back(s);
//       subarray.push_back(i);

//     }
//     if (meh < 0) {
//       meh = 0;
//       s = i + 1;

//     }
//   }

//   return msf;
// }

// int main() {
//   vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
//   vector < int > subarray;
//   int lon = maxSubArray(arr, subarray);
//   cout << "The longest subarray with maximum sum is " << lon << endl;
//   cout << "The subarray is " << endl;
//   for (int i = subarray[0]; i <= subarray[1]; i++) {
//     cout << arr[i] << " ";
//   }

// }