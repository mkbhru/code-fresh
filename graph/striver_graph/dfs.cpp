#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &adjList, int start, vector<bool> &isVis){
    cout << start << " ";
    isVis[start] = 1;
    for(int x : adjList[start]){
        if(!isVis[x])
            dfs(adjList, x, isVis);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(n + 1);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    //its gonna be recursion so you have to always pass a vector ans if you want dfs in it, you also need to pass isVis from the calling for the same reason
    vector<bool> isVis(n + 1);
    dfs(adjList, 1, isVis);
    
    return 0;
}