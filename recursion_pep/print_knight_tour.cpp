#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void printChess(vector<vector<int>> chess)
{
    cout << ++cnt << endl;

    for (auto x : chess)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void printKnightTour(vector<vector<int>> &chess, int n, int r, int c, int move)
{
    // base
    if (r < 0 || c < 0 || r >= n || c >= n || chess[r][c] > 0)
    {
        return;
    }
    if (move == n * n)
    {
        chess[r][c] = move;
        printChess(chess);
        chess[r][c] = 0;
        return;
    }
    // fe
    // stupid calls backtracking
    chess[r][c] = move;
    printKnightTour(chess, n, r - 2, c + 1, move + 1);
    printKnightTour(chess, n, r - 1, c + 2, move + 1);
    printKnightTour(chess, n, r + 1, c + 2, move + 1);
    printKnightTour(chess, n, r + 2, c + 1, move + 1);
    printKnightTour(chess, n, r + 2, c - 1, move + 1);
    printKnightTour(chess, n, r + 1, c - 2, move + 1);
    printKnightTour(chess, n, r - 1, c - 2, move + 1);
    printKnightTour(chess, n, r - 2, c - 1, move + 1);
    chess[r][c] = 0;
}
int main()
{
    int n = 5;
    vector<vector<int>> chess(n, vector<int>(n, 0));
    int r = 1;
    int c = 0;
    printKnightTour(chess, n, r, c, 1);

    return 0;
}