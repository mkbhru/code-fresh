#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    cout << " hello world" << endl;
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {1, 2, 3};
    cout << (v1 == v2) << endl;

    map<char, int> a, b;
    a['a'] = 1;
    b['a'] = 2;
    cout << (a == b) << endl;

    return 0;
}