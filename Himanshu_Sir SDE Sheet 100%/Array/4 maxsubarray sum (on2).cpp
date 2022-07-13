// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int max = INT_MIN;
    int maxe = 0;

	for (int i = 0; i < size; i++)
	{
		maxe = maxe + a[i];
        cout<<maxe<<" , ";
		if (max < maxe)
			max = maxe;

		if (maxe < 0)
			maxe = 0;
            
	}
    //cout<<"max =  "<<max;
	return max;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout <<endl<<"\n" << "Maximum contiguous sum is " << max_sum;
	return 0;
}
