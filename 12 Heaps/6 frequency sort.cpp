#include <iostream>
#include <vector>
#include <tuple>
#include <unordered_map>
#include <algorithm>
using namespace std;
 
// Custom comparator function
bool value_comparer(tuple<int, int, int> const& lhs,
    tuple<int, int, int> const& rhs)
{
    // If two elements have different frequencies, then
    // the one which has more frequency should come first
    if (get<1>(lhs) != get<1>(rhs)) {
        return get<1>(lhs) > get<1>(rhs);
    }
    
    // If two elements have the same frequencies, then the
    // one which has less index should come first
    else {
        return get<2>(lhs) < get<2>(rhs);
    }
}
 
// Custom sort by element's frequency and index
void sortByFrequencyAndIndex(int arr[], int n)
{
    if (n < 2) {
        return;
    }
 
    // key —> element, value —> (frequency, first_index)
    unordered_map<int, pair<int, int>> hm;
 
    // insert frequency of each array element into the map
    // and index of its first occurrence in the array
    for (int i = 0; i < n; i++)
    {
        // element seen before
        if (hm.find(arr[i]) != hm.end()) {
            hm[arr[i]].first++;
        }
        else {
            // element is seen for the first time
            hm[arr[i]] = make_pair(1, i);
        }
    }
 
    // create a vector of `tuple`
    vector<tuple<int, int, int>> tuples;
 
    // since a map cannot be sorted by its values, create
    // a tuple of all (element, frequency, first_index) pairs
    // and insert it into the vector
    for (auto it: hm)
    {
        pair<int, int> p = it.second;
        tuples.push_back(make_tuple(it.first, p.first, p.second));
    }
 
    // sort the tuples based on a custom comparator
    sort(tuples.begin(), tuples.end(), value_comparer);
 
    int a, b, c, k = 0;
    for (auto tup: tuples)
    {
        tie(a, b, c) = tup;
        for (int j = 0; j < b; j++) {
            arr[k++] = a;
        }
    }
}
 
int main()
{
    int a[] = { 3, 3, 1, 1, 1, 8, 3, 6, 8, 8, 8, 7, 8 };
    int n = sizeof(a) / sizeof(a[0]);
 
    sortByFrequencyAndIndex(a, n);
 
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
 
    return 0;
}






// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     priority_queue<int> maxh;



//     while(maxh.size() > 0)
//     {
//         int fiq = maxh.top().first();
//         int ele = maxh.top().second();
//         for(int i=0; i<=fiq; i++)
//         {
//             cout<<ele;
//             maxh.pop();
//         }
//     }

//     for(int i=0; i<n; i++)
//     {
//         maxh.push(arr[i]);
//     }


//     while (maxh.size()>0)
//     {
//         cout<<maxh.top()<<" ";
//         maxh.pop();
//     }
    
//     return 0;
// }











// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }

//     priority_queue<int,vector<int>, greater<int>> minh;
//     for(int i=0; i<n; i++)
//     {
//         vector<int> v;
//         minh.push(arr[i]);
//         v.push_back(arr[i]);
//     }
//     while (minh.size()>0)
//     {
//         cout<<minh.top()<<" ";
//         minh.pop();
//     }
    
//     return 0;
// }