#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x[] = {1, 4, 8, 5, 1, 4};
    int *ptr, y;
    ptr = x + 4;
    cout << ptr << endl;
    y = ptr - x;
    cout << y << endl;

    return 0;
}