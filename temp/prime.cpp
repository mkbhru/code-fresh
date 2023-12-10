#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    if (isPrime(5034))
        cout << "yes";
    else
        cout << "no";

    return 0;
}
//cicada 3301, 503, 509;