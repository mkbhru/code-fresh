#include <iostream>
#include <vector>
using namespace std;

int sum(int n)
{
    // base
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main()
{
    int n = 5;
    cout << sum(n) << endl;
    return 0;
}