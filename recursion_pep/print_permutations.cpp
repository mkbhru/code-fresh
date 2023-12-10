#include <bits/stdc++.h>
using namespace std;

void printPermutations(string qn, string ans)
{
    // base
    if (qn.empty())
    {
        cout << ans << endl;
        return;
    }
    // fe
    for (int i = 0; i < qn.size(); i++)
    {
        char ch = qn[i];
        string tmp = qn;
        // tmp.erase(i, 1);

        printPermutations(tmp.erase(i, 1), ans + ch);
    }
}
int main()
{

    printPermutations("1234", "");
    return 0;
}