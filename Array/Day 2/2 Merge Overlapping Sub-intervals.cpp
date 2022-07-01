// C++ program to merge overlapping Intervals in
// O(n Log n) time and O(1) extra space.

// Time Complexity: O(n*log(n))
// Auxiliary Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

// An Interval
struct Interval {
	int s, e;
};

// Function used in sort
bool mycomp(Interval a, Interval b) { return a.s < b.s; }

void mergeIntervals(Interval arr[], int n)
{
	// Sort Intervals in increasing order of
	// start time
	sort(arr, arr + n, mycomp);

	int index = 0; // Stores index of last element
	// in output array (modified arr[])

	// Traverse all input Intervals
	for (int i = 1; i < n; i++) {
		// If this is not first Interval and overlaps
		// with the previous one
		if (arr[index].e >= arr[i].s) {
			// Merge previous and current Intervals
			arr[index].e = max(arr[index].e, arr[i].e);
		}
		else {
			index++;
			arr[index] = arr[i];
		}
	}

	// Now arr[0..index-1] stores the merged Intervals
	cout << "\n The Merged Intervals are: ";
	for (int i = 0; i <= index; i++)
		cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
}

// Driver program
int main()
{
	Interval arr[]
		= { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
	int n = sizeof(arr) / sizeof(arr[0]);
	mergeIntervals(arr, n);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)



















// /*
//     Time Complexity: O(N * log(N))
//     Space Complexity: O(1)

//     Where N is the number of intervals.
// */
// #include<bits/stdc++.h>

// using namespace std;
// #include <algorithm>

// int mergeIntervals(int intervals[], int n)
// {
//     int n;//= intervals.size();
//     sort(intervals, intervals+n);
//     vector<vector<int>> res;

//     for (int i = 0; i < n; i++)
//     {
//         int curS = intervals[i][0];
//         int curE = intervals[i][1];

// 	    // If current interval doesn't overlap with the previous interval.
//         if (res.size() == 0 || curS > res[res.size() - 1][1]) 
//         {

//             res.push_back(intervals[i]);
//         }
//         // If current interval overlaps with the previous interval.
//         else 
//         {
//             res[n - 1][1] = max(res[n - 1][1], curE);
//         }
//     }

//     return res;
// }

// int main() {
//   int intervals[] = {7,1,5,3,6,4};
//   int maxPro = mergeIntervals(intervals,6);
//   cout << "Max profit is: " << maxPro << endl;
// }
