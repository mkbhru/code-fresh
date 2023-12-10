#include <iostream>
using namespace std;
int firstOccurence(int *a, int n, int key, int i = 0)
{
    if (i == n)
        return -1;
    
    if (a[i] == key)
        return i;
    firstOccurence(a, n, key, ++i);
}
int main()
{
    int n = 6;
    int *a = new int[n]{199, 22, 3, 4, 5, 3};
    int key = 3;
    cout << firstOccurence(a, n, key) << endl;
    delete[] a;
    return 0;
}