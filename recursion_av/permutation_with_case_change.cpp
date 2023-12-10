#include <bits/stdc++.h>
using namespace std;
void pwcc(string ip, string op)
{
    // base
    if (ip.empty())
    {
        cout << op << endl;
        return;
    }
    // fe
    char ch = ip[0];
    ip.erase(0, 1);
    // char uch = 'A' + ch - 'a';
    
    char uch = toupper(ch);
    pwcc(ip, op + ch);
    pwcc(ip, op + uch);
    return;
}
int main()
{

    pwcc("abc", "");
    return 0;
}