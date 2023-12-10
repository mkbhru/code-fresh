#include <bits/stdc++.h>
using namespace std;
vector<string> getMazePaths(int sr, int sc, int dr, int dc)
{
    // base
    /*base case can be structured inside fe, by conditions, loops involving conditions, etc*/
    if (sr == dr && sc == dc)
    {
        return {""};
    }
    // fe
    vector<string> paths;
    for (int ms = 1; ms <= dc - sc; ms++)
    {
        auto hPaths = getMazePaths(sr, sc + ms, dr, dc);
        for (auto x : hPaths)
            paths.push_back('h' + to_string(ms) + x);
    }
    for (int ms = 1; ms <= dr - sr; ms++)
    { // ms-move size
        auto vPaths = getMazePaths(sr + ms, sc, dr, dc);
        for (auto x : vPaths)
            paths.push_back('v' + to_string(ms) + x);
    }

    for (int ms = 1; ms <= dr - sr && ms <= dc - sc; ms++)
    {
        auto dPaths = getMazePaths(sr + ms, sc + ms, dr, dc);
        for (auto x : dPaths)
            paths.push_back('d' + to_string(ms) + x);
    }
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