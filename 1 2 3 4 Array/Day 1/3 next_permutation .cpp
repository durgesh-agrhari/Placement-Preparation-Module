#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {1,3,2};
    
    next_permutation(arr,arr+3);//using in-built function of C++
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//  void nextPermutation(vector<int>& nums) {
//         int i=nums.size()-2;  
//         while(i>=0) {
//             if(nums[i] < nums[i+1]) {
//                 for(int j = nums.size()-1; j>i; j--)
//                     if(nums[i]<nums[j]) {
//                         int temp = nums[i];
//                         nums[i] = nums[j];
//                         nums[j] = temp;
//                         break;
//                     }
//                 break;
//             }
//             i--;
//         }   
//         sort(nums.begin()+i+1, nums.end());
//     }
// };

// int main()
// {
//     vector<int> nums = {1,2,3};
//     Solution obj;
//     obj.nextPermutation(nums);

// }