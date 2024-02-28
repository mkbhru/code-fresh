#include <iostream>
using namespace std;

void printAll(int arr[], int i, int n)
{
    if (i == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
        cout << endl;
        return;
    }
    arr[i] = 1;
    printAll(arr, i + 1, n);
    arr[i] = 2;
    printAll(arr, i + 1, n);
    return;
}

int main()
{
    int n = 3;
    int arr[3];
    printAll(arr, 0, n);

    return 0;
}