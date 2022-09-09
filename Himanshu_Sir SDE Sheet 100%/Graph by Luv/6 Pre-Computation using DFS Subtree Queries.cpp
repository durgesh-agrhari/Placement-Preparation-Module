#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> g[N];
int subtree_sum[N];
int even_ct[N];

void dfs(int vertex, int par = 0){  //par = parent
    
    if(vertex % 2 == 0)
    {
        even_ct[vertex]++;
    }
    subtree_sum[vertex] += vertex;
    
    for(int child : g[vertex]){
        if(child == par){  
            continue;
        }
        dfs(child,vertex);
        subtree_sum[vertex] += subtree_sum[vertex];
        even_ct[vertex] += even_ct[vertex];
    } 
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int v1,v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    for(int i=1; i<=n; ++i)
    {
        cout<<subtree_sum[i]<<" "<<even_ct[i]<<endl;
    }

    // int q;
    // cin>>q;
    // while(q--)
    // {
    //     int v;
    //     cin>>v;
    //     cout<<subtree_sum[v]<<" "<<even_ct[v]<<endl;
    // }

}