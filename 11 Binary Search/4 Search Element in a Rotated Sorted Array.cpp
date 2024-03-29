#include<bits/stdc++.h>

using namespace std;

int search(vector < int > & nums, int target) {
  int low = 0, high = nums.size() - 1; //<---step 1

  while (low <= high) { //<--- step 2
    int mid = (low + high) >> 1; //<----step 3
    if (nums[mid] == target)
      return mid; // <---step 4

    if (nums[low] <= nums[mid]) { //<---step 5
      if (nums[low] <= target && nums[mid] >= target)
        high = mid - 1; //<---step 6 
      else
        low = mid + 1; //<---step 7
    } else { //<---step 7
      if (nums[mid] <= target && target <= nums[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1; //<---step 8
}

int main() {
  vector<int> nums = {4,5,6,7,0,1,2,3};
  int target = 3;
  cout << "The index in which the target is present is " << search(nums, target);

  return 0;
}












// #include<bits/stdc++.h>
// using namespace std;

// int search(vector<int>& nums,int target) {
//     for(int i=0;i<nums.size();i++)
//     {
//         if(nums[i]==target)
//             return i;
//     }
//     return -1;
     
// }

// int main() {
//     vector<int> nums = {4,5,6,7,0,1,2,3};
//     int target = 3;
//     cout<<"The index in which the target is present is "<<search(nums,target);
    
//     return 0;
// }