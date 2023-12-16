#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a = 'a';
    char b = '1';
    char ch = '4';
    string s = "23";
    // character to ascii
    cout << (int)a << endl;
    cout << (int)b << endl;
    // string to integer
    cout << stoi(s) + 23 << endl;
    // char to integer
    int i = ch - '0';
    cout << i << endl;
    // interger to char number 1 to 26
    char ch1 = (char)('a' + i - 1);
    cout << ch1 << endl;

    //stoi() only works for strings and for chars it is ch - '0'
    return 0;
}