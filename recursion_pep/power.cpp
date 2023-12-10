#include <iostream>
using namespace std;
int maxArray(int *a, int i)
{
    if (i == 0)
        return a[0];
    // return max(a[i], maxArray(a, i - 1));
    int misa = maxArray(a, i - 1);
    return a[i] > misa ? a[i] : misa;
}
int main()
{
    int n = 5;
    int *a = new int[n]{199, 22, 3, 4, 5};
    cout << maxArray(a, n - 1) << endl;
    delete[] a;
    return 0;
}