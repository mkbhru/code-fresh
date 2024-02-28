#include <bits/stdc++.h>
using namespace std;
vector<string> getMazePaths(int sr, int sc, int dr, int dc)
{
    // base
    if (sr == dr && sc == dc)
    {
        return {""};
    }
    else if (sc > dc || sr > dr)
    {
        return {};
    }
    // fe
    auto hPaths = getMazePaths(sr, sc + 1, dr, dc);
    auto vPaths = getMazePaths(sr + 1, sc, dr, dc);

    vector<string> paths;
    for (auto x : hPaths)
        paths.push_back('h' + x);
    for (auto x : vPaths)
        paths.push_back('v' + x);

    return paths;
}

int main()
{
    int n = 3;
    vector<string> paths = getMazePaths(1, 1, 3, 3);
    for (auto x : paths)
        cout << x << endl;
    cout << "size: " << paths.size() << endl;
    return 0;
}