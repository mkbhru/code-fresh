#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Initialize set
    unordered_set<int> s;

    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);

    // finding position of 6
    auto pos = s.find(6);

    // print element position if it is present in set
    if (pos != s.end())
        cout << "Element found at position : "
             << distance(s.begin(), pos) << endl;
    else
        cout << "Element not present in set";

    return 0;
}

// This code is modified by Susobhan Akhuli
