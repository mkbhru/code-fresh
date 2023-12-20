#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {1, 2, 3};
    dq.push_back(32);
    dq.push_front(32);
    
    for(auto x : dq)
        cout << x << " ";
    cout << endl;
    return 0;
}
/*
so deque vs list
deque is vector based - double ended queue, access is o(1), deletion from middle is o(n) but from ends is amortized const.
list is doubly linked list., access is o(n), deletion is fast
- a deque can be treated as a normal list
I841lG9
*/