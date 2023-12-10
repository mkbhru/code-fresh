//space: o(2E) time: o(m)      m == E
//directed graph, space: o(E), only storing destination neighbour
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1]; // its 1 based indexing of nodes
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    return 0;
}