#include <bits/stdc++.h>
using namespace std;
vector<string> gss(string s)
{
    // base
    if (s.empty())
    {
        vector<string> ans = {""};
        return ans;
    }
    // fe
    // faith gss(ab)
    char ch = s[0];
    s.erase(s.begin());
    vector<string> tmp = gss(s);
    vector<string> ans;
    for (auto x : tmp)
        ans.push_back(x);
    for (auto x : tmp)
        ans.push_back(ch + x);
    return ans;
}
int main()
{
    string s = "abc";
    vector<string> v;
    v = gss(s);
    for (auto x : v)
        cout << x << endl;
    return 0;
}

// c
//     b
//         bc
//             a
//                 ac
//                     ab
//                         abc
