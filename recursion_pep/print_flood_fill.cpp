#include <bits/stdc++.h>
using namespace std;
void floodFill(vector<vector<int>> maze, int sr, int sc, string ans, vector<vector<bool>> &isVisited)
{
    // base, tldr
    if (sr < 0 || sc < 0 || sr == maze.size() || sc == maze[0].size() || maze[sr][sc] == 1 || isVisited[sr][sc] == true)
        return;
    if (sr == maze.size() - 1 && sc == maze[0].size() - 1)
    {
        cout << ans << endl;
        return;
    }
    // fe, calls stupid but smart base case
    isVisited[sr][sc] = true;
    floodFill(maze, sr - 1, sc, ans + 't', isVisited);
    floodFill(maze, sr, sc - 1, ans + 'l', isVisited);
    floodFill(maze, sr + 1, sc, ans + 'd', isVisited);
    floodFill(maze, sr, sc + 1, ans + 'r', isVisited);
    isVisited[sr][sc] = false;
}
int main()
{
    vector<vector<int>> maze = {{0, 0, 0, 0},
                                {0, 1, 0, 0},
                                {0, 0, 0, 0}};
    vector<vector<bool>> isVisited(3, vector<bool>(4, 0));
    floodFill(maze, 0, 0, "", isVisited);
    return 0;
}