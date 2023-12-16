#include <bits/stdc++.h>
using namespace std;
int safePos(int n, int k)
{
    // code here
    // base
    if (n == 1)
        return 1;
    // fe
    int ans = safePos(n - 1, k) + (k % n);
    if (ans > n)
        ans %= n;
    return ans;
}
int main()
{

    cout << safePos(41, 3);
    return 0;
}