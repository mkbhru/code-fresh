#include <bits/stdc++.h>
using namespace std;

static vector<string> codes = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

vector<string> getKPC(string s)
{
    // base
    if (s.empty())
    {
        return {""};
    }
    // fe
    char ch = s[0];
    s.erase(s.begin());
    vector<string> tmp = getKPC(s);
    vector<string> ans;
    int i = int(ch - '0');
    string key = codes[i];

    for (auto x : key)
    {
        for (auto y : tmp)
        {
            ans.push_back(x + y);
        }
    }
    return ans;
}
int main()
{
    string s = "678";
    auto v = getKPC(s);
    for (auto x : v)
        cout << x << endl;
    return 0;
}