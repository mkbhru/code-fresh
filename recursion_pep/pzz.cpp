#include <iostream>
using namespace std;
void pzz(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "pre " << n << endl;
    pzz(n - 1);
    cout << "in " << n << endl;
    pzz(n - 1);
    cout << "post " << n << endl;
}
int main()
{
    pzz(3);

    return 0;
}