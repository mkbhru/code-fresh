#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isQueenSafe(vector<vector<int>> &chess, int row, int col)
    {
        // upper vertical
        for (int i = row; i >= 0; i--)
        {
            if (chess[i][col] == 1)
                return false;
        }
        // upper left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        {
            if (chess[i][j] == 1)
                return false;
        }
        // upper right diagonal
        for (int i = row, j = col; i >= 0 && j <= chess[0].size() - 1; i--, j++)
        {
            if (chess[i][j] == 1)
                return false;
        }

        return true;
    }
    void putChessToAns(vector<vector<int>> &chess, vector<vector<string>> &ans)
    {
        vector<string> v;
        for (int i = 0; i < chess.size(); i++)
        {
            string s;
            for (int j = 0; j < chess[0].size(); j++)
            {
                if (chess[i][j] == 1)
                    s.push_back('Q');
                else
                    s.push_back('.');
            }
            v.push_back(s);
        }
        ans.push_back(v);
    }
    void solve(vector<vector<int>> &chess, int row, vector<vector<string>> &ans)
    {
        // base
        if (row == chess.size())
        {
            putChessToAns(chess, ans);
            return;
        }
        // fe
        for (int col = 0; col < chess[0].size(); col++)
        {
            if (isQueenSafe(chess, row, col))
            {
                chess[row][col] = 1;
                solve(chess, row + 1, ans);
                chess[row][col] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<int>> chess(n, vector<int>(n));
        vector<vector<string>> ans;
        solve(chess, 0, ans);

        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<string>> v = s.solveNQueens(8);
    for (auto x : v)
    {
        for (auto y : x)
        {
            cout << y << ", ";
        }
        cout << endl;
    }

    return 0;
}