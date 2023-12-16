// Q. 1 to 26 a to z generate strings according to questions.
#include <bits/stdc++.h>
using namespace std;
void printEncodings(string s, string ans)
{
    if (s.empty())
    {
        cout << ans << endl;
        return;
    }
    else if (s.size() == 1)
    {
        if (s[0] == '0')
        {
            return;
        }
        char ch = s[0];
        s.erase(s.begin());
        int i = ch - '0';
        char code = (char)('a' + i - 1);
        printEncodings(s, ans + code);
        return;
    }
    else
    {
        if (s[0] == '0')
        {
            return;
        }
        // for single digit code
        char ch = s[0];
        int i = ch - '0';
        char code = (char)('a' + i - 1);
        printEncodings(s.substr(1), ans + code);

        // for double digit code
        string ch12 = s.substr(0, 2);
        int j = stoi(ch12);
        if (j <= 26)
        {
            code = (char)('a' + j - 1);
            printEncodings(s.substr(2), ans + code);
        }
    }
}
int main()
{

    printEncodings("02", "");
    return 0;
}