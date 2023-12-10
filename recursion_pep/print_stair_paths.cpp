#include <bits/stdc++.h>
using namespace std;
void printStairPaths(int n, string ans)
{
    // base
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }
    if (n < 0)
    {
        return;
    }
    // fe
    printStairPaths(n - 1, ans + "1");
    printStairPaths(n - 2, ans + "2");
    printStairPaths(n - 3, ans + "3");
}
int main()
{
    int n = 3;
    printStairPaths(n, "");

    return 0;
}