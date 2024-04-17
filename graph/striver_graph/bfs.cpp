//breadth first search (BFS) also known as level wise traversal
// there is only one node that can be at level 0, and multiple nodes can be there in other levels.
// wheather directed or undirected just use isVis always to be relieved from hassles
#include <iostream>
#include <vector>
using namespace std;
#include<queue>
void bfs(vector<vector<int>> &adjList, int start){
    vector<bool> isVis(adjList.size()); 
    queue<int> q;
    q.push(start);
    isVis[start] = 1;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        cout << tmp << " ";
        for(int x : adjList[tmp]){
            if(!isVis[x])
                q.push(x);
                isVis[x] = 1;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(n + 1);
    int u, v;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bfs(adjList, 1);
    return 0;
}