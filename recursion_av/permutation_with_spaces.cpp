#include <bits/stdc++.h>
using namespace std;
void permutationWithSpaces(string ip, string op)
{
    // base
    if (ip == "")
    {
        cout << op << endl;
        return;
    }
    // fe
    char ch = ip[0];
    ip.erase(0, 1);
    permutationWithSpaces(ip, op + " " + ch);
    permutationWithSpaces(ip, op + ch);
}
int main()
{
    string ip = "abc";
    string op = "";
    op.push_back(ip[0]);
    ip.erase(0, 1);
    permutationWithSpaces(ip, op);
    return 0;
}