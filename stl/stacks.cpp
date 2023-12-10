#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    // no other known initialization
    s.push(3);
    s.push(34);
    cout << s.top();
    // for(int x : s)cout << x << " ";
    /*stack is strict to follow LIFO structure thats the point of it. so it does not provide any iterators or otherwise whats the point of having it. */
    return 0;
}