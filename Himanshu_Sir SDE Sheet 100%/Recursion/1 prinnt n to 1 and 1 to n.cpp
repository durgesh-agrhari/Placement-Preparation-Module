#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n==0){
        //cout<<n<<" ";
        return;
    }
    //cout<<n<<" ";
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    print(n);
}