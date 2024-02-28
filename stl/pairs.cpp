#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    // p = make_pair(2, "abc");
    p = {2, "abcd"};

    pair<int, string> &p1 = p;

    p1.first = 3; //no change only pass by value, not by reference.

    cout << p.first << " " << p.second << endl;
    return 0;
}