#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int lo = 0;
    if (!matrix.size())
        return false;
    int hi = (matrix.size() * matrix[0].size()) - 1;

    while (lo <= hi)
    {
        int mid = (lo + (hi - lo) / 2);
        if (matrix[mid / matrix[0].size()][mid % matrix[0].size()] == target)
        {
            return true;
        }
        if (matrix[mid / matrix[0].size()][mid % matrix[0].size()] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return false;
}

int main()
{
    // Initializing 2D vector "vect" with
    // values
    vector<vector<int>> matrix{{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    int target=3;
    //cin>>target;                         
    int re = searchMatrix(matrix,target);

    if(re==1)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}














// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int lo = 0;
//         if(!matrix.size()) return false;
//         int hi = (matrix.size() * matrix[0].size()) - 1;

//         while(lo <= hi) {
//             int mid = (lo + (hi - lo) / 2);
//             if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
//                 return true;
//             }
//             if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
//                 lo = mid + 1;
//             }
//             else {
//                 hi = mid - 1;
//             }
//         }
//         return false;
//     }
// };