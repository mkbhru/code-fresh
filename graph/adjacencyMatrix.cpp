//space: n^2, time: m
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int u, v;
    int adj[n + 1][n + 1];
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    
    return 0;
}