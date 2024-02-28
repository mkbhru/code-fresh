#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 7};
    for (int x : v)
        cout << x << " ";
    cout << endl;
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    vector<pair<int,int>> v_p = {{1, 2}, {2, 3}, {4, 5}};
    for(auto it = v_p.begin(); it != v_p.end(); it++){
        cout << it -> first << " " << it -> second;
        cout << endl; 
    }
    return 0;
}