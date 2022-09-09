#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> find_missing_repeating(vector<int> array)
{
    int n = array.size() + 1;

    vector<int> substitute(n, 0); // initializing the substitute array with 0 of size n+1.

    vector<int> ans;              // initializing the answer  array .

    for (int i = 0; i < array.size(); i++)
    {
        substitute[array[i]]++;
    }

    for (int i = 1; i <= array.size(); i++)
    {
        if (substitute[i] == 0 || substitute[i] > 1)
        {
            ans.push_back(i);
        }
    }

    return ans;
}

void show(<vector<int>> array, int n)
{
    for(int i=0; i<n; i++)
    {

    }
}
int main()
{
    vector<int> array;
    array = {1, 2 , 3, 4 , 5 , 5 , 1};
    find_missing_repeating(array);
    //cout<<find_missing_repeating(array);
    int n= array.size();
    show(array,n);
}