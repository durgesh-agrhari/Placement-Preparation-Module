// C++ implementation to find length of smallest
// subsequence such that sum of elements
// is greater than equal to given number K

#include <bits/stdc++.h>
using namespace std;

// Function to find the smallest
// subsequence such that sum of elements
// is greater than equal to given number K
int lengthOfSmallestSubsequence(int K, vector<int> v)
{
	// Initialize priority queue
	priority_queue<int> pq;

	// Loop to insert all elements into
	// the priority queue
	for (int i = 0; i < v.size(); i++) {
		pq.push(v[i]);
	}
	int sum = 0, count = 0;

	// Loop to find the smallest
	// subsequence such that sum of elements
	// is greater than equal to given number K
	while (!pq.empty() && sum < K) {
		sum += pq.top();
		pq.pop();
		count++;
	}
	// If sum is less then K
	// then return -1 else return count.
	if (sum < K) {
		return -1;
	}
	return count;
}

// Driver code
int main()
{

	vector<int> v{ 2, 3, 1, 5,
				6, 3, 7, 9,
				14, 10, 2, 5 };
	int K = 35;

	cout << lengthOfSmallestSubsequence(K, v);

	return 0;
}
