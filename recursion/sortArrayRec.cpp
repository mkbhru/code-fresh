#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}
void insert(vector<int> &v, int tmp)
{
    if (v.size() == 0 || v[v.size() - 1] <= tmp)
    {
        v.push_back(tmp);
        return;
    }
    // print(v);
    int val = v[v.size() - 1];
    v.pop_back();
    insert(v, tmp);
    v.push_back(val);
    return;
}
// iterative way
void insert1(vector<int> &v, int tmp)
{
    if (*(--v.end()) < tmp)
    {
        v.insert(v.end(), tmp);
        return;
    }
    auto it = v.begin();
    for (; it != v.end(); it++)
    {
        if (tmp < *it)
        {
            v.insert(it, tmp);
            return;
        }
        print(v);
    }
    if (it == v.end())
        v.insert(it, tmp);
    return;
}
void sort(vector<int> &v)
{
    if (v.size() == 0)
        return;
    int tmp = v[v.size() - 1];
    v.pop_back();
    sort(v);
    insert(v, tmp);
    return;
}
int main()
{
    vector<int> v = {4, 2, 1, 3};
    print(v);
    sort(v);
    // print(v);
    // insert(v, 3);
    print(v);
    return 0;
}