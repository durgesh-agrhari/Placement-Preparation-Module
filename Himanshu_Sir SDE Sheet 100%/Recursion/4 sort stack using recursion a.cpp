#include <bits/stdc++.h>
#include <stack>
using namespace std;

void insert(stack<int> &s, int temp)
{
    if (s.size() == 0 || (s.top() - 1) <= temp)
    {
        s.push(temp);
        return;
    }
    int val = s.top() - 1;
    s.pop();
    insert(s, temp);
    s.push(val);
    return;
}

void sort(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int temp = s.top() - 1;
    s.pop();
    sort(s);
    insert(s, temp);
}

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}


int main()
{
    vector<int> l = {5, -2, 9, -7, 3};
    // s={0, 1, 5, 2};
    stack<int> s;
    for (int i : l)
    {
        s.push(i);
    }
    //sort(s);
    // for(auto it:s)
    //    cout<<it<<" ";

    cout << "Stack before sorting: ";
    printStack(s);
 
    sort(s);
 
    cout << "Stack after sorting: ";
    printStack(s);

    return 0;
}






// #include <bits/stdc++.h>
// using namespace std;
// void insertion(stack<int>&v,int temp)
// {
//    if(v.size()==0 || v[v.size()-1]<=temp)
//    {
//    v.push_back(temp);
//    return;
//    }
//    int x=v[v.size()-1];
//    v.pop_back();
//    insertion(v,temp);
//    v.push_back(x);
// }
// void sorting(stack<int>&v)
// {
//    if(v.size()<=1)
//    return;
//    int temp=v[v.size()-1];
//    v.pop_back();
//    sorting(v);
//    insertion(v,temp);
// }
// int main()
// {
//     stack<int>v={5,3,2,4,1};
//     sorting(v);
//    for(auto it:v)
//    cout<<it<<" ";
//     return 0;
// }
