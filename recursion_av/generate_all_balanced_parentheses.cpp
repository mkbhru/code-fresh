#include <bits/stdc++.h>
using namespace std;
void gabp(int open, int close, string op)
{
    // base
    // cout <<open << close<< op << endl;
    if (open == 0 && close == 0)
    {
        cout << open << close << op << endl;
        return;
    }
    // fe
    // if (open == 0)
    // {
    //     gabp(open, close - 1, op + ')');
    // }
    // else if (open < close)
    // {
    //     gabp(open - 1, close, op + '(');
    //     gabp(open, close - 1, op + ')');
    // }
    // else if (open == close)
    // {
    //     gabp(open - 1, close, op + '(');
    // }
    if (open != 0)
    {
        gabp(open - 1, close, op + '(');
    }
    if (open < close)
    {
        gabp(open, close - 1, op + ')');
    }
}
int main()
{
    int n = 3;
    gabp(n - 1, n, "(");

    return 0;
}