#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;  
    q.push(11);
    q.push(12);
    q.push(13);
    int s;
    cin >> s;
    q.push(s);
    cout << q.front() << endl;
    cout << q.back() << endl;

    return 0;
}