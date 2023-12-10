#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// bool cmp(pair<int, int> a, pair<int, int> b)
// {
//     if(a.first != b.first)
//         return a.first < b.first;
//     return a.second > b.second;
// }
bool cmp(string a, string b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}
// simply write the order you want in the return itself in the comparator.
int main()
{
    // vector<pair<int, int>> v = {{2, 3}, {3, 6}, {7, 56}, {7, 34}};
    // int n = v.size();
    // sort(v.begin(), v.end(), cmp);
    // for (auto x : v)
    //     cout << x.first << " " << x.second << endl;

    vector<string> v1 = {"x", "xyz", "xy", "abc", "a", "ab"};
    int n = v1.size();
    sort(v1.begin(), v1.end(), cmp);
    for (auto x : v1)
        cout << x << endl;

    return 0;
}