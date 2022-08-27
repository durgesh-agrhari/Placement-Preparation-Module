#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0, sum;
        cin >> n;
        while (n)
        {
            int a = n, b = 0;
            if (n >= 3)
            {
                a = a - 3;
                ct1++;
            }
            if (n <= 3)
            {
                if (n == a)
                {
                    a = a + 3;
                    ct1++;
                }
            }
            if (n >= 2)
            {
                a = a - 3;
                ct1++;
            }
            if (n <= 2)
            {
                a = a + 3;
                ct1++;
            }
            sum = ct1 + ct2 + ct3 + ct4;
            cout << sum << " ";
        }
    }
    return 0;
}

// if(n%2==0 && n<3)
// {
//     a= a+2;
//     if(n==a)
//     {
//         cout<<1<<endl;
//     }
//     else
//     {
//         a=a+2;
//         if(n==a)
//            cout<<2<<endl;
//     }
// }