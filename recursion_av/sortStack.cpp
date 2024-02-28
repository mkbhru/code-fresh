#include <bits/stdc++.h>
using namespace std;
void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
void insert(stack<int> &s, int tmp)
{
    if (s.empty() || s.top() <= tmp)
    {
        s.push(tmp);
        print(s);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s, tmp);
    s.push(val);
}
void sort(stack<int> &s)
{

    if (s.size() == 1)
    // if (s.empty()),
        return;
    int tmp = s.top();
    s.pop();
    sort(s);
    insert(s, tmp);
    return;
}
int main()
{
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(5);
    s.push(4);
    s.push(3);
    print(s);
    sort(s);
    print(s);
    cout << s.size();
    return 0;
}