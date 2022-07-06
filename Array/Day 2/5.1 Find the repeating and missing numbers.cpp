// C++ program to find the missing
// and repeating element
#include <bits/stdc++.h>
using namespace std;

void getTwoElements(int arr[], int n)
{
  int repeating(0), missing(0);

  int i = 0;

  // Traverse on the array
  while (i < n)
  {
    
    // If the element is on its correct position
    if (arr[i] == arr[arr[i] - 1])
      i++;
    else
    {
      
      // If it is not at its correct position
      // then palce it to its correct position
      if(arr[i] != arr[arr[i] - 1])
        swap(arr[i], arr[arr[i] - 1]);
      else
        i++;
    }
  }

  // Find repeating and missing
  for (int i = 0; i < n; i++) {
    
    // If any element is not in its correct position
    if (arr[i] != i + 1) {
      repeating = arr[i];
      missing = i + 1;
      break;
    }
  }

  // Print answer
  cout << "Repeating: " << repeating << endl
    << "Missing: " << missing << endl;
}

// Driver code
int main()
{
  int arr[] = { 2, 3, 1, 5, 1 };
  int n = sizeof(arr) / sizeof(int);

  getTwoElements(arr, n);

  return 0;
}

// This code is contributed by Tapesh (tapeshdua420)









// // C++ program to Find the repeating
// // and missing elements

// #include <bits/stdc++.h>
// using namespace std;

// void printTwoElements(int arr[], int size)
// {
//   int i;
//   cout << "The repeating element is ";

//   for (i = 0; i < size; i++) {
//     if (arr[abs(arr[i]) - 1] > 0)
//       arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
//     else
//       cout << abs(arr[i]) << "\n";
//   }

//   cout << "and the missing element is ";
//   for (i = 0; i < size; i++) {
//     if (arr[i] > 0)
//       cout << (i + 1);
//   }
// }

// /* Driver code */
// int main()
// {
//   int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
//   int n = sizeof(arr) / sizeof(arr[0]);
//   printTwoElements(arr, n);
// }

// // This code is contributed by Shivi_Aggarwal
