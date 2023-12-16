#include <bits/stdc++.h>
using namespace std;
int calls = 0;
int solve(int n, vector<int> &v)
{
    calls++;
    cout << "n: " << n << " v: " << v[n] << endl;

    if (n < 0)
    {
        return 0;
    }
    if (v[n] != 0)
    {
        return v[n];
    }
    if (n == 0)
    {
        v[n] = 1;
        return v[n];
    }

    // fe
    int nm1 = solve(n - 1, v);
    int nm2 = solve(n - 2, v);
    int nm3 = solve(n - 3, v);
    v[n] = nm1 + nm2 + nm3;
    return v[n];
}
int main()
{
    int n = 4;
    int cnt = 0;
    vector<int> v(n + 1, 0);
    cnt = solve(n,  v);
    cout << cnt << endl;
    cout << "calls: " << calls << endl;
    for (int x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}