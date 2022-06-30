// A simple representation of graph using STL
#include <bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v) {
		cout << "\n Adjacency list of vertex " << v
			<< "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}


void printGraph2(vector<int> adj[], int V)
{
    cout<<endl;
	for (int v = 0; v < V; ++v) {
		for (auto x : adj[v])
			cout << x<< " ";
		printf("\n");
	}
}
// Driver code
int main()
{
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	printGraph(adj, V);
	printGraph2(adj, V);
	return 0;
}
















// #include <iostream>
// using namespace std;

// int main()
// {

// 	int n, m;
// 	cin >> n >> m ;
// 	int adjMat[n + 1][m + 1];
// 	for(int i = 0; i < m; i++){
// 		int u , v ;
// 		cin >> u >> v ;
// 		adjMat[u][v] = 1 ;
// 		adjMat[v][u] = 1 ;
// 	}
	
	
// 	return 0;
// }
