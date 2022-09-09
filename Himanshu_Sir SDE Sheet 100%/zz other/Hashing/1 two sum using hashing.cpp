/*
* This C++ program tells if there exists a pair in array whose sum results in x.
*/

#include <iostream>

using namespace std;

// Function to find and print pair
bool chkPair(int A[], int size, int x) {
	for (int i = 0; i < (size - 1); i++) {
		for (int j = (i + 1); j < size; j++) {
			if (A[i] + A[j] == x) {
				cout << "Pair with a given sum \n" << x << " is (" << A[i] << ", " << A[j] << ")"
				<< endl;

				return 1;
			}
		}
	}

	return 0;
}

int main(void) {
	int A[] = {0, -1, 2, -3, 1};
	int x = -2;
	int size = sizeof(A) / sizeof(A[0]);

	if (chkPair(A, size, x)) {
		cout << "Valid pair exists" << endl;
	}
	else {
		cout << "No valid pair exists for " << x << endl;
	}

	return 0;
}

// This code is contributed by Manish Kumar (mkumar2789)













// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         map<int,int> m;
//         vector<int> v;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(m.find(target-nums[i])!=m.end())
//             {
//                 v.push_back(m[target-nums[i]]);
//                 v.push_back(i);
//                 return v;
//             }
//             m[nums[i]]=i;
//         }
//         return v;
//     }
// };



// int main()
// {
//     int key;
//     vector<int>nums = {1,4,3,6,5,8};
//     cin>>key;

//     Solution ob;
//     ob.twoSum(nums,key);
//     cout<<twoSum(nums,key)<<endl;
//     return 0;
// }