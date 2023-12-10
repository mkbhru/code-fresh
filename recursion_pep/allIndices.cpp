#include <iostream>
using namespace std;
int *allIndices(int *a, int i, int n, int key, int fsf)
{
    if (i == n)
    {
        int *ans = new int[fsf];
        return ans;
    }

    if (a[i] == key)
    {
        fsf++;
        int *ans = allIndices(a, i + 1, n, key, fsf);
        ans[fsf] = i;
        cout << "[" << i << "]" << endl;
        return ans;
    }
    else
    {
        int *ans = allIndices(a, i + 1, n, key, fsf);
        return ans;
    }
}

int main()
{
    int n = 6;
    int *a = new int[n]{199, 22, 3, 4, 5, 3};
    int key = 3;
    // int fsf = 0; // find so far
    int *ans = allIndices(a, 0, n, key, 0);

    for (int i = 0; i < 2; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}