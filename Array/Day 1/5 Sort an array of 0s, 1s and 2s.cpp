/*
    Time Complexity : O(N)
    Space Complexity : O(1)

    Where N is the size of the array.
*/

#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


void sort012(int *arr, int n)
{
    int i = 0;
    int nextZero = 0;
    int nextTwo = n - 1;

    while (i <= nextTwo)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[nextZero]);
            i++;
            nextZero++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[nextTwo]);
            nextTwo--;
        }
        else
        {
            i++;
        }
    }
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
    sort012(arr, n);
    //cout<<a<<endl;
    return 0;
}