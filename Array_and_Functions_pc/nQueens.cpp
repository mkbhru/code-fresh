#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<vector<int>> &mat, int i, int j, int n){
    // row is always contain single queen
    // up column
    int r = i, c = j;
    while(r >= 0){
        if(mat[r][c] != 0)
            return false;
        r--;
    }
    // left diagonal
    r = i, c = j;
    while(r >= 0 && c >= 0){
        if(mat[r][c] != 0)
            return false;
        r--, c--;
    }
    // right diagonal
    r = i, c = j;
    while(r >= 0 && c < n){
        if(mat[r][c] != 0)
            return false;
        r--, c++;
    }

    return true;
}
void nQueens(vector<vector<int>> &mat, int i, int n)
{
    if (i == n)
    {
        for (auto v : mat)
        {
            for (int x : v)
            {
                if (x == 1)
                    cout << "Q ";
                else
                    cout << "_ ";
            }
            cout << endl;
        }
        cout << endl
             << endl;
        return;
    }

    for(int j = 0; j < n; j++){
        if(isValid(mat, i, j, n)){
            mat[i][j] = 1;
            nQueens(mat, i + 1, n);
        }
        mat[i][j] = 0;
    }
}
int main()
{
    int n = 4;
    vector<vector<int>> mat(n, vector<int>(n, 0));
    nQueens(mat, 0, n);

    return 0;
}