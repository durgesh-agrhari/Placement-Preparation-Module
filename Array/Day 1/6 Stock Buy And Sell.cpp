// C++ Program to find best buying
// and selling days
#include <bits/stdc++.h>
using namespace std;

// This function finds the buy sell
// schedule for maximum profit
void stockBuySell(int price[], int n)
{
	// Prices must be given for at
	// least two days
	if (n == 1)
		return;

	// Traverse through given price array
	int i = 0;
	while (i < n - 1)
	{
		// Find Local Minima
		// Note that the limit is (n-2) as we are
		// comparing present element to the next element
		while ((i < n - 1) &&
			(price[i + 1] <= price[i]))
			i++;

		// If we reached the end, break
		// as no further solution possible
		if (i == n - 1)
			break;

		// Store the index of minima
		int buy = i++;

		// Find Local Maxima
		// Note that the limit is (n-1) as we are
		// comparing to previous element
		while ((i < n) &&
			(price[i] >= price[i - 1]))
			i++;

		// Store the index of maxima
		int sell = i - 1;

		cout << "Buy on day: " << buy
			<< "	 Sell on day: " <<
				sell << endl;
	}
}

// Driver code
int main()
{
	// Stock prices on consecutive days
	int price[] = {100, 180, 260,
				310, 40, 535, 695};
	int n = sizeof(price) / sizeof(price[0]);

	// Function call
	stockBuySell(price, n);

	return 0;
}

// This is code is contributed by rathbhupendra




// #include<bits/stdc++.h>
// using namespace std;


// /*
//     Time Complexity: O(N)
//     Space Complexity: O(1)

//     Where N is the size of the array.
// */

// int maximumProfit(vector<int> &prices){

//     // Variables to store the buying price and maximum profit
//     int buy = prices[0],maxProfit = 0;
//     int n = prices.size();

//     // Iterating over the array
//     for(int i = 1; i < n; i++){

//         /*
//             If current price is less than buying price
//             we will update buying price as the current price.
//         */
//         if(prices[i] < buy){
//             buy = prices[i];
//         }

//         /*
//             Else if selling at this price is more profitable,
//             then we will update out maximum profit.
//         */
//         else if( (prices[i] - buy) > maxProfit){
//             maxProfit = prices[i] - buy;
//         }
//     }
//     return maxProfit;
// }

// void print(int prices[])
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<prices[i]<<endl;
//     }
// }

// int main()
// {
//     // int n; 
//     // cin>>n;
//     int prices[1000];
//     // for(int i=0; i<n; i++)
//     // {
//     //     cin>>prices[i];
//     // }
//     vector<int> prices = {4,2,2,2,4,7,8,4,10}
//     maximumProfit(prices);
//     print(prices);
// }


// int main()
// {
//     int n,i;
//     cin>>n;
//     int arr[n];
//     for(i=0; i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     while(i<n-1)
//     {
//         while (arr[i]>=arr[i+1])
//         {
//             i++;
//             cout<<i<<endl;
//         }
//         if(i==n-1)
//         {
//             break;
//             i++;
//         }
//         while ((i<n) && arr[i]>=arr[i-1])
//         {
//             i++;
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }