#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr
        [i];
    }
    int tr;
    cin>>tr;
    for (i = 0; i < n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i]+arr[j] == tr)
            {
                cout<<i<<" "<<j<<endl;
                break;
            }
        }
    }

    return 0;
}



//#include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, i, j;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >>arr[i];
//     }
//     int tr;
//     cin>>tr;
//     int p = 1;
//     for (i = 0,j=0; i < n,j<n; i++,j++)
//     {
//         if(arr[i]+arr[j] == tr)
//         {
//             cout<<i<<" "<<j<<endl;
//         }
//     }

//     return 0;
// }


