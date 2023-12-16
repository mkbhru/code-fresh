#include <bits/stdc++.h>
using namespace std;
void subsets(string ip, string op, set<string> &m)
{
    // base
    if (ip == "")
    {
        if (m.find(op) == m.end()){
            cout << op << endl;
            m.insert(op);
        }
        return;
    }
    // fe
    string op1 = op;
    string op2 = op + ip[0];
    // ip.erase(ip.begin() + 0);
    ip = ip.substr(1);
    subsets(ip, op1, m);
    subsets(ip, op2, m);
}
int main()
{
    set<string> m;
    subsets("aab", "", m);
    return 0;
}