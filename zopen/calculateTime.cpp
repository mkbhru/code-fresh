#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
class Node
{

public:
    int data;
    Node *next;
};

int main()
{
    auto start = high_resolution_clock::now();
    Node *node1 = new Node();
    cout << node1->data << endl;
    cout << node1->next << endl;
    auto stop = high_resolution_clock::now();

    auto duration = stop - start;
    cout << duration.count() << endl;
    return 0;
}