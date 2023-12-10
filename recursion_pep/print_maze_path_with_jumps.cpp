#include <bits/stdc++.h>
using namespace std;
void printMPWJ(int sr, int sc, int dr, int dc, string ans)
{
    // base
    // cout << ans << endl;
    if (sr == dr && sc == dc)
    {
        cout << ans << endl;
        return;
    }
    if (sr > dr || sc > dc)
    {
        return;
    }

    // fe
    for (int i = 1; i <= dc; i++)
    {
        printMPWJ(sr, sc + i, dr, dc, ans + to_string(i) + "h");
    }

    for (int i = 1; i <= dr; i++)
    {
        printMPWJ(sr + i, sc, dr, dc, ans + to_string(i) + "v");
    }

    for (int i = 1, j = 1; i <= dr, j <= dc; i++, j++)
    {
        printMPWJ(sr + i, sc + j, dr, dc, ans + to_string(i) + "d");
    }
}
int main()
{
    printMPWJ(1, 1, 3, 2, "");
    return 0;
}