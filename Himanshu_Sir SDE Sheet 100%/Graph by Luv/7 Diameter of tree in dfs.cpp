#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> g[N];
int depth[N];

void dfs(int v, int par = -1){ 
    for(int child : g[v]){
        if(child == par) continue;
        depth[child] = depth[v]+1;
        dfs(child,v);
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

    int mx_depth = -1;
    int mx_d_node;
    for(int i=1; i<=n; ++i)
    {
        if(mx_depth < depth[i]){
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0;
    }
    dfs(mx_d_node);
    //int mx_depth = -1;
    for(int i=1; i<=n; ++i)
    {
        if(mx_depth < depth[i]){
            mx_depth = depth[i];
        }
    }
    cout<<mx_d_node<<" "<<mx_depth<<endl;
} 