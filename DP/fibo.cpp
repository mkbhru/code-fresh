#include <bits/stdc++.h>
using namespace std;
int cnt1 = 0;
int cnt2 = 0;
int fibo(int n)
{
    // base
    cnt1++;
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;

    // fe
    return fibo(n - 1) + fibo(n - 2);
}
int fiboMemoized(int n, vector<int> &v)
{
    cnt2++;
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;
    if (v[n] != 0)
        return v[n];
    // fe
    v[n] = fiboMemoized(n - 1, v) + fiboMemoized(n - 2, v);
    return v[n];
}
int main()
{
    // cout << fibo(-12) << endl;
    // cout << fibo(5) << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << fibo(i) << endl;
    // }
    int n = 30;
    cout << fibo(n) << " cnt1: " << cnt1 << endl;
    vector<int> v(n + 1, 0);

    cout << fiboMemoized(n, v) << " cnt2: " << cnt2 << endl;

    return 0;
}