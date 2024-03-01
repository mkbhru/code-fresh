#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //first method using adjacency matrix
    /* int n, m;
    cin >> n >> m;
    adjMat[n + 1][n + 1];
    int u, v;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    } */
    //space complexity : n*n or O(n2)
    //to store weighted graph just store it in the value

    //second method to store graph is adjacency List

    int n, m;
    cin >> n >> m;
    vector<int> adjList[n + 1];
    int u, v;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    return 0;
    //space complexity: E or O(E)
    //to store edgeweight tweak datastructure and store pairs in the adjList, {node, weight}
}