//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string longestPalin (string S)
    {
        int fi = 0, fj = 0, j, k, n = S.length ();
    
        for (int i = 0; i < n; ++i)
        {
            // odd length palindrome with current index as center
            j = i - 1;
            k = i + 1;
            while (j >= 0 and k < n)
            {
                if (S[j] != S[k])
                    break;
                j--;
                k++;
            }
            if (k - j - 1 > fj - fi + 1)
            {
                fi = j + 1;
                fj = k - 1;
            }
    
            // even length palindrome if possible
            if (i < n - 1 and S[i] == S[i + 1])
            {
                j = i - 1;
                k = i + 2;
                while (j >= 0 and k < n)
                {
                    if (S[j] != S[k])
                        break;
                    j--;
                    k++;
                }
                if (k - j - 1 > fj - fi + 1)
                {
                    fi = j + 1;
                    fj = k - 1;
                }
            }
        }
    
        return S.substr (fi, fj - fi + 1);
    }
    // Contributed By: Pranay Bansal

};



//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
















// // A C++ dynamic programming
// // solution for longest palindrome

// #include <bits/stdc++.h>
// using namespace std;

// // Function to print a substring
// // str[low..high]
// void printSubStr(
// 	string str, int low, int high)
// {
// 	for (int i = low; i <= high; ++i)
// 		cout << str[i];
// }

// // This function prints the
// // longest palindrome substring
// // It also returns the length of
// // the longest palindrome
// int longestPalSubstr(string str)
// {
// 	// get length of input string
// 	int n = str.size();

// 	// table[i][j] will be false if substring
// 	// str[i..j] is not palindrome.
// 	// Else table[i][j] will be true
// 	bool table[n][n];

// 	memset(table, 0, sizeof(table));

// 	// All substrings of length 1
// 	// are palindromes
// 	int maxLength = 1;

// 	for (int i = 0; i < n; ++i)
// 		table[i][i] = true;

// 	// check for sub-string of length 2.
// 	int start = 0;
// 	for (int i = 0; i < n - 1; ++i) {
// 		if (str[i] == str[i + 1]) {
// 			table[i][i + 1] = true;
// 			start = i;
// 			maxLength = 2;
// 		}
// 	}

// 	// Check for lengths greater than 2.
// 	// k is length of substring
// 	for (int k = 3; k <= n; ++k) {
// 		// Fix the starting index
// 		for (int i = 0; i < n - k + 1; ++i) {
// 			// Get the ending index of substring from
// 			// starting index i and length k
// 			int j = i + k - 1;

// 			// checking for sub-string from ith index to
// 			// jth index iff str[i+1] to str[j-1] is a
// 			// palindrome
// 			if (table[i + 1][j - 1] && str[i] == str[j]) {
// 				table[i][j] = true;

// 				if (k > maxLength) {
// 					start = i;
// 					maxLength = k;
// 				}
// 			}
// 		}
// 	}

// 	cout << "Longest palindrome substring is: ";
// 	printSubStr(str, start, start + maxLength - 1);

// 	// return length of LPS
// 	return maxLength;
// }

// // Driver Code
// int main()
// {
// 	string str = "forgeeksskeegfor";
// 	cout << "\nLength is: "
// 		<< longestPalSubstr(str);
// 	return 0;
// }
