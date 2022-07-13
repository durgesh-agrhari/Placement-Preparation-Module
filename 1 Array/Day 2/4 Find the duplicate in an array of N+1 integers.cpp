#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector < int > & arr) {
  int n = arr.size(), re;
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      re = arr[i];
    }
  }
  return re;
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,2};
  findDuplicate(arr);
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}