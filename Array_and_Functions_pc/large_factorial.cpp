#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(1, 1);
    // cout << " hll" << endl;
    for (int i = 2; i <= n; i++)
    {
        // cout << " chk " << endl;
        int c = 0;
        int length = v.size();
        for (int j = 0; j < length; j++)
        {
            int d = v[j] * i + c;
            v[j] = d % 10;
            c = d / 10;
        }
        // printv(v);
        while (c > 0)
        {
            v.push_back(c % 10);
            c /= 10;
        }
    }

    reverse(v.begin(), v.end());
    cout << "factorial is: ";
    for (auto x : v)
        cout << x;
    cout << endl;

    string ans = "";
    for (int x : v)
        ans += x;

    cout << ans << endl;

    return 0;
}