#include<bits/stdc++.h>

using namespace std;
int maxProfit(int arr[]) {
  int maxPro = 0;
  int minPrice = INT_MAX;
  for (int i = 0; i < 6; i++) {
    minPrice = min(minPrice, arr[i]);
    maxPro = max(maxPro, arr[i] - minPrice);
  }
  return maxPro;
}
int main() {
  int arr[] = {7,1,5,3,6,4};
  int maxPro = maxProfit(arr);
  cout << "Max profit is: " << maxPro << endl;
}










// // C++ program to implement
// // the above approach
// #include <iostream>
// using namespace std;

// // Preprocessing helps the code
// // run faster
// // #define fl(i, a, b)
// // for(int i = a; i < b; i++)

// // Function that return
// int maxProfit(int* prices, int size)
// {
// 	// maxProfit adds up the difference
// 	// between adjacent elements if they
// 	// are in increasing order
// 	int maxProfit = 0;

// 	// The loop starts from 1 as its
// 	// comparing with the previous
//     //fl(i, 1, size)
// 	for(int i=0; i<size; i++)if (prices[i] > prices[i - 1]) maxProfit
// 		+= prices[i] - prices[i - 1];
// 	return maxProfit;
// }

// // Driver code
// int main()
// {
// 	int prices[] = {100, 180, 260,
// 					310, 40, 535, 695};
// 	int N = sizeof(prices) / sizeof(prices[0]);
// 	cout << maxProfit(prices, N) << endl;
// 	return 0;
// }
// // This code is contributed by Kingshuk Deb
