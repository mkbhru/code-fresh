#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
vector<string> getStairPaths(int n)
{
    cnt++;
    // base
    if (n == 0)
    {
        // vector<string> v = {""};
        // return v;
        return {""};
    }
    else if (n < 0)
    {
        // vector<string> v;
        // return v;
        return {};
    }
    // fe
    // if I add 1, 2, 3, to respective faiths I get exp
    auto path1 = getStairPaths(n - 1);
    auto path2 = getStairPaths(n - 2);
    auto path3 = getStairPaths(n - 3);
    vector<string> paths;

    for (auto x : path1)
        paths.push_back("1" + x);
    for (auto x : path2)
        paths.push_back('2' + x);
    for (auto x : path3)
        paths.push_back("3" + x);

    return paths;
}
int main()
{
    int n = 3;
    vector<string> ans = getStairPaths(n);
    cout << "cnt: " << cnt << endl;

    for (auto x : ans)
        cout << x << endl;
    cout << "size: " << ans.size() << endl;
    return 0;
}