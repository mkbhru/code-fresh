#include <iostream>
using namespace std;
int lastOccurence(int *a, int n, int key, int i)
{
    // base
    if (i == n)
        return -1;
    // fe
    // call first for las index then check while returning
    int loisa = lastOccurence(a, n, key, i + 1);
    // last occurence in smaller array.
    if (loisa != -1)
        return loisa;
    else if (a[i] == key)
        return i;
    else
        return loisa;
}
int main()
{
    int n = 5;
    int *a = new int[n]{22, 3, 4, 5, 3};
    int key = 3;
    cout << lastOccurence(a, n, key, 0) << endl;
    delete[] a;
    return 0;
}