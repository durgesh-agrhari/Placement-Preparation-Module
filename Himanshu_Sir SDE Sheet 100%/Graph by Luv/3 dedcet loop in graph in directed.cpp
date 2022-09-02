#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> g[N];
bool vis[N]; //vis = visited

bool dfs(int vertex, int par){  //par = parent
    //cout<<vertex<<endl;
    vis[vertex] = true;
    bool isLoopExists = false;
    for(int child : g[vertex]){
        //cout<<"Par"<<vertex<<" , Child"<<child <<endl;
        //ignore yahi pe ho raha hai parent 
        if(vis[child] && child == par){  
            continue;
        }
        if(vis[child]){
            return true; // yaha pe loop exit karata hai
        }
        isLoopExists |= dfs(child, vertex);
    }
    return isLoopExists;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v1,v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool isLoopExists = false;
    for(int i=1; i<=n; ++i){
        if(vis[i]){
            continue;
        }
        if(dfs(i,0)){
            isLoopExists= true;
            break;
        }

    }
    cout<<isLoopExists<<endl;
}