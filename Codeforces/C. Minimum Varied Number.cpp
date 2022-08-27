#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,s;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        int s;
        cin >> s;
        int count =0;
        if (s <= 9)
        {
            cout << s << " ";
        }
        else
        {
            for (int i = 9; i >= 1; i--)
            {
                if (s >= i)
                {
                    s = s - i;
                    v.push_back(i);
                    count++;
                }
            }
        }
        for(int i=count-1; i>=0; i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }


    // reverse(v.begin(),v.end());
    // for(auto i:v)
    //     cout<<i<<" ";
    // cout<<endl;
    return 0;
}
