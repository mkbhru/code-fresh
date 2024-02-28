#include <iostream>
#include <vector>
using namespace std;

void printIncreasing(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printIncreasing(n - 1);
    cout << n << endl;
}

int main()
{
    int n = 5;
    printIncreasing(n);

    return 0;
}