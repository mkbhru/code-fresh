#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << t << " : " << s << endl;
    }
    // this problem is because getline works from newline to newline whereas cin works by just taking next single input ignoring all spaces and newlines therefor 2 3 4 are three inputs for cin but only one input for getline.
    // to solve this use cin.ignore() after taking t input it will send cursor to next line start ignoring current newline character.

    return 0;
}