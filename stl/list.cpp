#include <list>
#include <iostream>
using namespace std;
void printList(list<int> &l)
{
    for (auto x : l)
        cout << x << " ";
    cout << endl;
}
int main()
{
    list<int> l = {1, 3, 4, 5};
    printList(l);
    l.push_back(23);
    l.pop_front();
    l.push_front(223);
    printList(l);
    cout << l.empty() << endl;

    return 0;
}