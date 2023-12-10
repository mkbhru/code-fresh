#include <bits/stdc++.h>
using namespace std;

static vector<string> codes = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string s, string ans)
{
    // base
    if (s.empty())
    {
        cout << ans << endl;
        return;
    }
    // fe
    char ch = s[0];
    s.erase(s.begin());
    int i = int(ch - '0');
    string tmp = codes[i];
    for (auto x : tmp)
    {
        printKPC(s, ans + x);
    }

    return;
}
int main()
{
    string s = "07";
    printKPC(s, "");
    return 0;
}