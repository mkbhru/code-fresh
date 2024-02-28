#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    // base
    if (n == 2)
        return 1;
    if (n <= 1)
        return 0;
    // fe
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    // 0, 1, 1, 2, 3, 5, 8...
    // 1  2  3  4  5  6  7 ..
    int n = 7;
    cout << fib(-2) << endl;

    return 0;
}