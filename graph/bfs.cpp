#include <bits/stdc++.h>
using namespace std;
vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    int vis[V] = {0};
    vis[1] = 1;
    queue<int> q;
    q.push(1);
    vector<int> bfs;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (int x : adj[node])
        {
            if (!vis[x])
            {
                vis[x] = 1;
                q.push(x);
            }
        }
    }
    return bfs;
}
void printAdj(vector<int> adj[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << "-> ";
        for (int x : adj[i])
        {
            cout << x << ", ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> bfs = bfsOfGraph(n, adj);
    for (int x : bfs)
        cout << x << " ";
    cout << endl;
    printAdj(adj, n);
    return 0;
}