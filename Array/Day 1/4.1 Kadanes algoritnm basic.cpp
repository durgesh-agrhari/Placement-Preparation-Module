#include <algorithm>

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




















// #include<bits/stdc++.h>
// using namespace std;

// int maxSunArray(vector<int>& arr){
//     int sum =0; 
//     int maxi = INT_MIN;
//     for(auto it: arr)
//     {
//         sum= sum+ it;
//         maxi = max(sum, maxi);
//         if(sum<0) sum=0;
//     }
//     return maxi;
// }

// int maxSubArray(vector < int > & nums, vector < int > & subarray) {
//   int max_sum = 0;
//   int n = nums.size();
//   if (n == 1) {
//     return nums[0];
//   }
//   int i, j;
//   for (i = 0; i <= n - 1; i++) {
//     for (j = i; j <= n - 1; j++) {
//       int sum = 0;
//       for (int k = i; k <= j; k++)
//         sum = sum + nums[k];
//       if (sum > max_sum) {
//         subarray.clear();
//         max_sum = sum;
//         subarray.push_back(i);
//         subarray.push_back(j);

//       }
//     }
//   }
//   return max_sum;
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