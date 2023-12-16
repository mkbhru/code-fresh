#include <bits/stdc++.h>
using namespace std;
bool isItASafePlaceForQueen(vector<vector<int>> chess, int row, int col)
{

    // upper row
    for (int i = row - 1, j = col; i >= 0; i--)
    { 
        if (chess[i][j] == 1)
            return false;
    }
    // left upper diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (chess[i][j] == 1)
            return false;
    }
    // right upper diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < chess[0].size(); i--, j++)
    {
        if (chess[i][j] == 1)
            return false;
    }

    return true;
}
void printNQueens(vector<vector<int>> chess, string qsf, int row)
{
    // base
    if (row == chess.size())
    {
        cout << qsf << endl;
        return;
    }
    // fe
    
    for (int col = 0; col < chess[0].size(); col++)
    {
        if (isItASafePlaceForQueen(chess, row, col))
        {
            chess[row][col] = 1;
            printNQueens(chess, qsf + to_string(row) + '-' + to_string(col) + ',' + ' ', row + 1);
            chess[row][col] = 0;
        }
    }
}
int main()
{
    int n = 4;
    vector<vector<int>> chess(n, vector<int>(n));
    printNQueens(chess, "", 0);

    return 0;
}