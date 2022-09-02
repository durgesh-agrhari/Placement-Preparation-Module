#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> g[N];
int depth[N],hight[N];

void dfs(int vertex, int par = 0){  //par = parent
    for(int child : g[vertex]){
        if(child == par){  
            continue;
        }
        depth[child] = depth[vertex]+1;
        dfs(child, vertex);
        hight[vertex] = max(hight[vertex], hight[child]+1);
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
    for(int i=1; i<=n; ++i){
        cout<<depth[i]<<" "<<hight[i]<<endl;
    }

}