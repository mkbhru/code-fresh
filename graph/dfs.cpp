// space: ans(n), vis(n), recursion stack: n = o(3n)
// time: n callings + (2E) iterations = o(n + 2E) forn undirected
// total degrees for undirected = 2E, directed = E
#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void dfs(vector<int> adj[], int node, int vis[], vector<int> &ans)
    {
        vis[node] = 1;
        ans.push_back(node);

        for (auto x : adj[node])
        {
            if (!vis[x])
            {
                dfs(adj, x, vis, ans);
            }
        }
    }

public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        int vis[V + 1] = {0};
        int start = 1;
        vector<int> ans;
        dfs(adj, start, vis, ans);
        return ans;
    }
};
void printAdj(vector<int> adj[], int n)
{
    for (int i = 0; i < n; i++)
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
    Solution s;
    vector<int> bfs = s.dfsOfGraph(n, adj);
    for (int x : bfs)
        cout << x << " ";
    cout << endl;
    printAdj(adj, n);
    return 0;
}