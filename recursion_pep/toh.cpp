#include <iostream>
using namespace std;

void toh(int n, int from_rod, int to_rod, int aux_rod)
{
    if (n == 0)
    {
        return;
    }
    toh(n - 1, from_rod, aux_rod, to_rod);
    cout << n << "[" << from_rod << "->" << to_rod << "]" << endl;
    toh(n - 1, aux_rod, to_rod, from_rod);
    return;
}
int main()
{
    int n = 3;
    toh(n, 10, 11, 12);

    return 0;
}