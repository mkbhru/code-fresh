#include <iostream>
#include <vector>
using namespace std;
void allIndices(int *a, int i, int n, int key, vector<int> &v)
{
    if (i == n)
    {
        return;
    }

    if (a[i] == key)
    {
        allIndices(a, i + 1, n, key, v);
        v.push_back(i);
        cout << "[" << i << "]" << endl;
        return;
    }
    else
    {
        allIndices(a, i + 1, n, key, v);
        return;
    }
}

int main()
{
    int n = 6;
    int *a = new int[n]{199, 22, 3, 4, 3, 3};
    int key = 3;
    // int fsf = 0; // find so far
    vector<int> v;
    allIndices(a, 0, n, key, v);

    for (int x : v)
        cout << x << endl;
    return 0;
}